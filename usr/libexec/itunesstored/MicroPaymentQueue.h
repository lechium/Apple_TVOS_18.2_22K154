//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MicroPaymentQueue : NSObject
{
    NSManagedObjectID *_activePaymentID;	// 8 = 0x8
    long long _aliveState;	// 16 = 0x10
    long long _changeSetCount;	// 24 = 0x18
    NSMutableArray *_clients;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    _Bool _observingNetworkChanges;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_purchaseActionsDBQueue;	// 56 = 0x38
}

+ (id)paymentQueue;	// IMP=0x0040000000033066
- (void)_startFirstReadyPayment;	// IMP=0x002000000003d769
- (void)_setActivePaymentID:(id)arg1;	// IMP=0x001000000003d6c1
- (void)_sendPurchaseIntentsForApp:(id)arg1 storeKitClient:(id)arg2 force:(_Bool)arg3;	// IMP=0x001000000003d0f2
- (id)_newPaymentQueueClientWithMessage:(id)arg1 connection:(id)arg2 parameter:(const char *)arg3;	// IMP=0x001000000003d06c
- (id)_firstReadyPaymentInContext:(id)arg1;	// IMP=0x001000000003cf33
- (void)_finishPaymentOperationForPaymentID:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000003ce45
- (void)_enumerateDownloadsForIdentifiers:(id)arg1 context:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000003cb75
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000003cab1
- (id)_copyDownloadsIDsFromMessage:(id)arg1 key:(const char *)arg2;	// IMP=0x001000000003c9ac
- (id)_clients;	// IMP=0x001000000003be70
- (id)_clientForPayment:(id)arg1;	// IMP=0x001000000003be22
- (id)_clientForObjectID:(id)arg1;	// IMP=0x001000000003bc68
- (id)_clientForConnection:(id)arg1 paymentQueueClient:(id)arg2;	// IMP=0x001000000003ba70
- (id)_beginManagedContextSession;	// IMP=0x001000000003b8ea
- (void)_refreshDidFinishNotification:(id)arg1;	// IMP=0x001000000003b888
- (void)_networkTypeChanged:(id)arg1;	// IMP=0x001000000003b79b
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000003b4b9
- (_Bool)_inAppReviewEnabled;	// IMP=0x001000000003b47c
- (void)resetInAppReviewRequestsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003b20c
- (void)updateInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003aebd
- (id)_inAppReviewRequestConstants;	// IMP=0x001000000003ac37
- (void)addInAppReviewRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039e9c
- (void)getPromotedIAPInfoInternalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000398dd
- (void)setPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000039196
- (void)getPromotedIAPVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038b71
- (void)setPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000038386
- (void)getPromotedIAPOrderWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000037d4a
- (void)updateDeferredPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000037323
- (void)startDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003722a
- (void)resumeDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000037131
- (void)restoreCompletedTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003703e
- (void)registerClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036cdb
- (void)productsRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036c94
- (void)pauseDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036b9b
- (void)installSheetStateUpdatedWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036b08
- (void)getTransactionsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036989
- (void)finishPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000368b0
- (void)forceSandboxWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036790
- (void)connectedAppEnteredForegroundWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003654b
- (void)checkQueueForClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036480
- (void)cancelRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000036448
- (void)cancelDownloadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003634f
- (void)addPurchaseIntentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000361e4
- (void)addPaymentWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000003602f
- (void)updateWithPurchaseResponse:(id)arg1;	// IMP=0x0010000000035c03
- (void)startFirstReadyPayment;	// IMP=0x0010000000035ba1
- (void)start;	// IMP=0x0010000000035b36
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000003589c
- (void)notifyClientsOfExternalPropertyChanges:(id)arg1 ofDownloadID:(long long)arg2;	// IMP=0x00100000000354ef
- (void)finishDownloadsWithIdentifiers:(id)arg1;	// IMP=0x001000000003457f
- (void)failDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000033c7e
- (void)checkQueueForClientWithIdentifier:(id)arg1 URLBagContext:(id)arg2;	// IMP=0x00100000000337e8
- (void)addPurchaseIntentWithProductIdentifier:(id)arg1 productName:(id)arg2 appBundleId:(id)arg3 appName:(id)arg4;	// IMP=0x00100000000330e3
- (void)dealloc;	// IMP=0x0010000000032f96
- (id)init;	// IMP=0x0010000000032e92

@end

