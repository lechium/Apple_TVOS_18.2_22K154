//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, HMBSQLQueryStatement, HMBSQLStatement, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMBLocalSQLQueryTable : HMFObject
{
    _Bool _finalized;	// 8 = 0x8
    HMBLocalSQLContext *_context;	// 16 = 0x10
    Class _modelClass;	// 24 = 0x18
    NSString *_modelType;	// 32 = 0x20
    NSArray *_columnFields;	// 40 = 0x28
    NSArray *_columnNames;	// 48 = 0x30
    HMBSQLQueryStatement *_selectAll;	// 56 = 0x38
    NSString *_dropTableSQL;	// 64 = 0x40
    HMBSQLStatement *_deleteAll;	// 72 = 0x48
    HMBSQLStatement *_updateRecord;	// 80 = 0x50
    HMBSQLStatement *_deleteRecord;	// 88 = 0x58
    NSMutableSet *_userQueries;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0010000000023c46
- (void).cxx_destruct;	// IMP=0x0000000000022c1b
@property(nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSMutableSet *userQueries; // @synthesize userQueries=_userQueries;
@property(readonly, nonatomic) HMBSQLStatement *deleteRecord; // @synthesize deleteRecord=_deleteRecord;
@property(readonly, nonatomic) HMBSQLStatement *updateRecord; // @synthesize updateRecord=_updateRecord;
@property(readonly, nonatomic) HMBSQLStatement *deleteAll; // @synthesize deleteAll=_deleteAll;
@property(readonly, nonatomic) NSString *dropTableSQL; // @synthesize dropTableSQL=_dropTableSQL;
@property(readonly, nonatomic) HMBSQLQueryStatement *selectAll; // @synthesize selectAll=_selectAll;
@property(readonly, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, nonatomic) NSArray *columnFields; // @synthesize columnFields=_columnFields;
@property(readonly, nonatomic) NSString *modelType; // @synthesize modelType=_modelType;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) __weak HMBLocalSQLContext *context; // @synthesize context=_context;
- (id)logIdentifier;	// IMP=0x0000000000022b26
- (void)finalize;	// IMP=0x00000000000228e3
- (void)dealloc;	// IMP=0x0000000000022895
- (unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002276a
- (id)buildQueriableFieldsForModel:(id)arg1;	// IMP=0x0000000000022622
- (unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000022570
- (unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000022498
- (id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;	// IMP=0x00000000000222f6
- (_Bool)prepareWithError:(id *)arg1;	// IMP=0x00000000000205db
- (id)initWithContext:(id)arg1 queryModel:(Class)arg2;	// IMP=0x00000000000202c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

