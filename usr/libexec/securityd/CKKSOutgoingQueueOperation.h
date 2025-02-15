//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSOperationDependencies, NSString;
@protocol OctagonStateString;

@interface CKKSOutgoingQueueOperation
{
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    CKKSOperationDependencies *_deps;	// 32 = 0x20
    unsigned long long _itemsProcessed;	// 40 = 0x28
    NSString<OctagonStateString> *_ckErrorState;	// 48 = 0x30
}

+ (id)ontransactionFetchEntries:(id)arg1 contextID:(id)arg2 error:(id *)arg3;	// IMP=0x002000000007ebb4
- (void).cxx_destruct;	// IMP=0x00200000000781e1
@property(retain) NSString<OctagonStateString> *ckErrorState; // @synthesize ckErrorState=_ckErrorState;
@property unsigned long long itemsProcessed; // @synthesize itemsProcessed=_itemsProcessed;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (_Bool)isCKErrorBadEtagOnly:(id)arg1;	// IMP=0x0010000000077de3
- (_Bool)intransactionIsErrorBadEtagOnKeyPointersOnly:(id)arg1;	// IMP=0x0010000000077a69
- (_Bool)_onqueueIsErrorMissingSyncKey:(id)arg1;	// IMP=0x0010000000077732
- (void)_onqueueModifyAllRecords:(id)arg1 as:(id)arg2 viewState:(id)arg3;	// IMP=0x00100000000770e0
- (void)_onqueueSaveRecordsWithDelay:(id)arg1 viewState:(id)arg2;	// IMP=0x0010000000076981
- (void)_onqueueModifyRecordAsError:(id)arg1 recordError:(id)arg2 viewState:(id)arg3;	// IMP=0x0010000000076569
- (void)modifyRecordsCompleted:(id)arg1 fullUpload:(_Bool)arg2 recordsToSave:(id)arg3 recordIDsToDelete:(id)arg4 recordIDsModified:(id)arg5 modifyComplete:(id)arg6 savedRecords:(id)arg7 deletedRecordIDs:(id)arg8 ckerror:(id)arg9;	// IMP=0x0010000000075f37
- (void)groupStart;	// IMP=0x00100000000757b1
- (id)initWithDependencies:(id)arg1 intending:(id)arg2 ckErrorState:(id)arg3 errorState:(id)arg4;	// IMP=0x00100000000756bb

@end

