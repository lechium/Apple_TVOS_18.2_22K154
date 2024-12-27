//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDModifyRecordsOperation.h"

@class CKRecordZoneID, NSDictionary;
@protocol CKMovePhotosOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDMovePhotosOperation : CKDModifyRecordsOperation
{
    CDUnknownBlockType _moveCompletionBlock;	// 8 = 0x8
    NSDictionary *_moveChangesByDestinationRecordID;	// 16 = 0x10
    CKRecordZoneID *_sourceZoneID;	// 24 = 0x18
    long long _sourceDatabaseScope;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000019b880
@property(nonatomic) long long sourceDatabaseScope; // @synthesize sourceDatabaseScope=_sourceDatabaseScope;
@property(copy, nonatomic) CKRecordZoneID *sourceZoneID; // @synthesize sourceZoneID=_sourceZoneID;
@property(copy, nonatomic) NSDictionary *moveChangesByDestinationRecordID; // @synthesize moveChangesByDestinationRecordID=_moveChangesByDestinationRecordID;
@property(copy, nonatomic) CDUnknownBlockType moveCompletionBlock; // @synthesize moveCompletionBlock=_moveCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000019b67e
- (void)main;	// IMP=0x000000000019b4af
- (void)_reallyHandleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;	// IMP=0x0000000000199483
- (void)_handleRecordMoved:(id)arg1 handler:(id)arg2 responseCode:(id)arg3 recordForOplockFailure:(id)arg4 destinationServerRecord:(id)arg5 moveMarkerServerRecord:(id)arg6;	// IMP=0x0000000000198727
- (id)_createModifyRequestWithRecordsToSave:(id)arg1 recordsToDelete:(id)arg2 recordsToDeleteToEtags:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 handlersByRecordID:(id)arg5 sendMergeableDeltas:(_Bool)arg6;	// IMP=0x000000000019820d
- (void)moveCallbackWithMetadata:(id)arg1 error:(id)arg2;	// IMP=0x0000000000197ac8
- (void)callbackWithMetadata:(id)arg1 error:(id)arg2;	// IMP=0x000000000019793d
- (id)handlerForDeleteWithRecordID:(id)arg1;	// IMP=0x00000000001978c0
- (id)handlerForSaveWithRecord:(id)arg1;	// IMP=0x000000000019776d
- (int)operationType;	// IMP=0x0000000000197762
- (id)activityCreate;	// IMP=0x0000000000197739
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x0000000000197509

// Remaining properties
@property(retain, nonatomic) id <CKMovePhotosOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

