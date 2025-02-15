//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDPurchase, NSArray, NSDictionary, NSNumber, NSString, NSURL;

@protocol ASDPurchaseServiceProtocol
- (void)renewReceiptForApplicationAtURL:(NSURL *)arg1 withAppleID:(NSString *)arg2 password:(NSString *)arg3 forceSandbox:(_Bool)arg4 withReplyHandler:(void (^)(NSError *))arg5;
- (void)unadoptWithReplyHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)adoptionStatus:(_Bool)arg1 withReplyHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)notifyDialogCompleteForPurchaseID:(NSNumber *)arg1 result:(_Bool)arg2 selectedButton:(long long)arg3 withResultHandler:(void (^)(_Bool, NSError *))arg4;
- (void)startPurchase:(ASDPurchase *)arg1 withReplyHandler:(void (^)(ASDPurchaseResult *, NSError *))arg2;
- (void)purchaseBatchWithItemMetadata:(NSDictionary *)arg1 additionalBuyParams:(NSDictionary *)arg2 withReplyHandler:(void (^)(ASDPurchaseResponse *, NSError *))arg3;
- (void)purchaseBatch:(NSArray *)arg1 additionalBuyParams:(NSDictionary *)arg2 withReplyHandler:(void (^)(ASDPurchaseResponse *, NSError *))arg3;
- (void)processPurchases:(NSArray *)arg1 withReplyHandler:(void (^)(ASDPurchaseResponse *, NSError *))arg2;
- (void)processPurchase:(ASDPurchase *)arg1 withReplyHandler:(void (^)(ASDPurchaseResponse *, NSError *))arg2;
- (void)checkStoreQueue:(long long)arg1;
- (void)adoptableBundleIdentifiersWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)adopt:(NSArray *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
@end

