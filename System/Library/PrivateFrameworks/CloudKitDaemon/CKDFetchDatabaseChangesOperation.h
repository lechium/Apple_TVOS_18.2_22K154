//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, NSMutableArray, NSObject, NSString;
@protocol CKFetchDatabaseChangesOperationCallbacks><CKDOperationCallbackProxy, OS_dispatch_group, OS_dispatch_queue;

@interface CKDFetchDatabaseChangesOperation
{
    _Bool _fetchAllChanges;	// 8 = 0x8
    CDUnknownBlockType _recordZoneWithIDChangedBlock;	// 16 = 0x10
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;	// 24 = 0x18
    CDUnknownBlockType _recordZoneWithIDWasPurgedBlock;	// 32 = 0x20
    CDUnknownBlockType _recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock;	// 40 = 0x28
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;	// 48 = 0x30
    CKServerChangeToken *_previousServerChangeToken;	// 56 = 0x38
    unsigned long long _resultsLimit;	// 64 = 0x40
    unsigned long long _numRequestsSent;	// 72 = 0x48
    NSObject<OS_dispatch_group> *_fetchZonesGroup;	// 80 = 0x50
    NSMutableArray *_requestInfos;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002f6319
@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup; // @synthesize fetchZonesGroup=_fetchZonesGroup;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock; // @synthesize recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock=_recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasPurgedBlock; // @synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
- (id)analyticsPayload;	// IMP=0x00000000002f6042
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002f5fa7
- (void)main;	// IMP=0x00000000002f5dda
- (void)_handleAnonymousZoneDataObjects:(id)arg1 schedulerInfo:(id)arg2;	// IMP=0x00000000002f5166
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;	// IMP=0x00000000002f31c4
- (int)operationType;	// IMP=0x00000000002f31b9
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;	// IMP=0x00000000002f2cdd
- (id)activityCreate;	// IMP=0x00000000002f2cb4
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (_Bool)shouldReturnServerChangeTokensToAdopter;	// IMP=0x00000000002f2b22
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002f28ae

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(retain, nonatomic) id <CKFetchDatabaseChangesOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

