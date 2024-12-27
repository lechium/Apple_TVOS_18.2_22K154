//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CPLFingerprintContext, NSString;
@protocol CPLCKBatchUploadPlanner;

@interface CPLCKSplitCopyHelper : NSObject
{
    _Bool _fromPrivateRecord;	// 8 = 0x8
    CKRecord *_baseCKRecord;	// 16 = 0x10
    CKRecordID *_sourceRecordID;	// 24 = 0x18
    Class _recordClass;	// 32 = 0x20
    long long _sourceDatabaseScope;	// 40 = 0x28
    CKRecordID *_destinationRecordID;	// 48 = 0x30
    NSString *_action;	// 56 = 0x38
    id <CPLCKBatchUploadPlanner> _planner;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000388e7
@property(readonly, nonatomic) id <CPLCKBatchUploadPlanner> planner; // @synthesize planner=_planner;
@property(readonly, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) CKRecordID *destinationRecordID; // @synthesize destinationRecordID=_destinationRecordID;
@property(readonly, nonatomic) long long sourceDatabaseScope; // @synthesize sourceDatabaseScope=_sourceDatabaseScope;
@property(readonly, nonatomic) Class recordClass; // @synthesize recordClass=_recordClass;
@property(readonly, nonatomic) _Bool fromPrivateRecord; // @synthesize fromPrivateRecord=_fromPrivateRecord;
@property(readonly, nonatomic) CKRecordID *sourceRecordID; // @synthesize sourceRecordID=_sourceRecordID;
@property(readonly, nonatomic) CKRecord *baseCKRecord; // @synthesize baseCKRecord=_baseCKRecord;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x0010000000038882
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x001000000003886c
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x0010000000038856
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x0010000000038840
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x001000000003882a
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000038814
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000385ac
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000384b5
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000383ff
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000383f9
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000383f1
- (id)copiedRecordFromSourceRecord:(id)arg1 action:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000383bf
- (id)initWithBaseCKRecord:(id)arg1 sourceRecordID:(id)arg2 fromPrivateRecord:(_Bool)arg3 recordClass:(Class)arg4 sourceDatabaseScope:(long long)arg5 destinationRecordID:(id)arg6 planner:(id)arg7;	// IMP=0x00100000000382c2
@property(readonly) CPLFingerprintContext *fingerprintContext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

