//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, CPLCloudKitScope, MISSING_TYPE, NSArray, NSError, NSString;

@interface CPLCloudKitSendSharedLibraryExitFeedbackTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_sourceRecordIDs;	// 16 = 0x10
    NSArray *_destinationRecordIDs;	// 24 = 0x18
    MISSING_TYPE *_moveError;	// 32 = 0x20
    NSString *_operationID;	// 40 = 0x28
    NSString *_moveBatchID;	// 48 = 0x30
    CPLCloudKitScope *_scope;	// 56 = 0x38
    CKRecordZoneID *_exitZoneID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000d79b8
@property(readonly, nonatomic) CKRecordZoneID *exitZoneID; // @synthesize exitZoneID=_exitZoneID;
@property(readonly, nonatomic) CPLCloudKitScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) NSString *moveBatchID; // @synthesize moveBatchID=_moveBatchID;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(readonly, nonatomic) NSError *moveError; // @synthesize moveError=_moveError;
@property(readonly, nonatomic) NSArray *destinationRecordIDs; // @synthesize destinationRecordIDs=_destinationRecordIDs;
@property(readonly, nonatomic) NSArray *sourceRecordIDs; // @synthesize sourceRecordIDs=_sourceRecordIDs;
- (void)runOperations;	// IMP=0x00100000000d72ef
- (id)_itemErrorFromError:(id)arg1 forID:(id)arg2;	// IMP=0x00100000000d7160
- (id)initWithController:(id)arg1 sourceRecordIDs:(id)arg2 destinationRecordIDs:(id)arg3 moveError:(id)arg4 operationID:(id)arg5 moveBatchID:(id)arg6 exitZoneID:(id)arg7 scope:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x00100000000d6fb1

@end

