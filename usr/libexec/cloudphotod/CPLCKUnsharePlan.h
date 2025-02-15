//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCKBatchUploadPlanner, CPLCKShareRecordTodo, CPLFingerprintContext, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CPLCKUnsharePlan : NSObject
{
    NSMutableArray *_todos;	// 8 = 0x8
    NSMutableDictionary *_todoPerScopedIdentifier;	// 16 = 0x10
    CPLCKShareRecordTodo *_currentTodo;	// 24 = 0x18
    _Bool _wasSplit;	// 32 = 0x20
    NSArray *_ckRecordsToUpdate;	// 40 = 0x28
    NSArray *_ckRecordIDsToDelete;	// 48 = 0x30
    CPLCKBatchUploadPlanner *_planner;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000003825a
@property(nonatomic) __weak CPLCKBatchUploadPlanner *planner; // @synthesize planner=_planner;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000381c9
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x001000000003815f
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000380f5
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x001000000003808b
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x0010000000038021
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000037f13
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000037d7c
- (_Bool);	// IMP=0x0010000000037c61
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000377f4
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x0010000000037527
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x001000000003751f
@property(readonly, nonatomic) NSArray *privateRecordIDs;
- (void)updateTargetMappingAfterUploadWithRealSourceRecordIDs:(id)arg1;	// IMP=0x00100000000371f3
- (void)didFinishUploadOfRecordsWithError:(id)arg1;	// IMP=0x00100000000371ed
- (void)willUploadRecords;	// IMP=0x00100000000371e7
- (id)ckRecordIDsToDelete;	// IMP=0x00100000000371c2
- (id)ckRecordsToUpdate;	// IMP=0x001000000003719d
- (void)_prepareRecordsToDelete;	// IMP=0x0010000000036e29
@property(readonly, nonatomic) NSArray *ckRecordIDsToUnshare;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x0010000000036b99
- (_Bool)hasShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x0010000000036b62
- (void)addShareTodo:(id)arg1;	// IMP=0x0010000000036afc
- (id)initWithPlanner:(id)arg1;	// IMP=0x0010000000036a5f
@property(readonly) CPLFingerprintContext *fingerprintContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

