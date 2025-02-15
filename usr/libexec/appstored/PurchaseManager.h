//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPurchaseQueue, NSHashTable, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface PurchaseManager : NSObject
{
    NSHashTable *_activeBatches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    TaskQueue *_taskQueue;	// 24 = 0x18
    AMSPurchaseQueue *_purchaseQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000008408b
- (void)pushService:(id)arg1 recoverFromDroppedMessagesOfActionType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084085
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000084078
- (void)processPurchases:(id)arg1 failBatchOnError:(_Bool)arg2 requestToken:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000084010
- (void)checkStoreQueue:(long long)arg1;	// IMP=0x0010000000083f2e
- (id)init;	// IMP=0x0010000000083de0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

