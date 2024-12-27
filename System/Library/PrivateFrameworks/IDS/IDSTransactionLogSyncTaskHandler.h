//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSTransactionLogSyncTask, NSObject;
@protocol IDSTransactionLogTaskHandlerDelegate, OS_dispatch_queue;

@interface IDSTransactionLogSyncTaskHandler
{
    IDSTransactionLogSyncTask *_syncTask;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <IDSTransactionLogTaskHandlerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000014f8c6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <IDSTransactionLogTaskHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSTransactionLogSyncTask *syncTask; // @synthesize syncTask=_syncTask;
- (id)_transactionMessageFromTransportMessage:(id)arg1 withDecryptedPayload:(id)arg2 accountInfo:(id)arg3;	// IMP=0x000000000014f3e0
- (id)_transactionMessageFromTransportMessage:(id)arg1 withParticipants:(id)arg2 accountInfo:(id)arg3;	// IMP=0x000000000014f101
- (id)_transactionMessageFromTransportMessage:(id)arg1 withGroupID:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4;	// IMP=0x000000000014f0f9
- (id)_transactionMessageFromTransportMessage:(id)arg1 groups:(id)arg2 participants:(id)arg3 accountInfo:(id)arg4;	// IMP=0x000000000014f004
- (id)_participantsByAliasFromParticipants:(id)arg1;	// IMP=0x000000000014ed7c
- (id)_groupsByGroupIDFromGroups:(id)arg1;	// IMP=0x000000000014ebbf
- (id)_groupIDsFromMessages:(id)arg1;	// IMP=0x000000000014ea1e
- (id)_destinationsInMessages:(id)arg1;	// IMP=0x000000000014e87d
- (void)_completeWithError:(id)arg1;	// IMP=0x000000000014e814
- (void)_transactionMessagesFromTransportMessages:(id)arg1 withParticipants:(id)arg2 groups:(id)arg3 accountInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000014e4ac
- (void)qFetchParticipantsFromDeviceMessges:(id)arg1 andGroupsFromGroupMessages:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014da34
- (void)qIngestMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000014d05c
- (void)qPerformWithToken:(id)arg1;	// IMP=0x000000000014c9aa
- (void)perform;	// IMP=0x000000000014c6a5
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x000000000014c5e0

@end

