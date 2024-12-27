//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSAuthenticateRequest, AMSPurchase, AMSPurchaseQueue, ASDPurchaseResponse, MISSING_TYPE;

@interface _TtC9appstored23PurchaseArcadeBatchTask
{
    MISSING_TYPE *itemIDs;	// 8 = 0x8
    MISSING_TYPE *additionalBuyParams;	// 16 = 0x10
    MISSING_TYPE *itemMetadata;	// 24 = 0x18
    MISSING_TYPE *client;	// 32 = 0x20
    MISSING_TYPE *logKey;	// 48 = 0x30
    MISSING_TYPE *purchaseResponse;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000048590
- (id)initWithoutKeepAlive;	// IMP=0x0010000000048530
- (id)init;	// IMP=0x0010000000048500
- (void)handleAuthenticateRequest:(AMSAuthenticateRequest *)arg1 purchase:(AMSPurchase *)arg2 purchaseQueue:(AMSPurchaseQueue *)arg3 completion:(void (^)(AMSAuthenticateResult *, NSError *))arg4;	// IMP=0x00100000000481e0
- (void)mainWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x0010000000045c80
- (id)initWithItemMetadata:(id)arg1 additionalBuyParams:(id)arg2 client:(id)arg3 logKey:(id)arg4;	// IMP=0x001000000003bd10
- (id)initWithItemIDs:(id)arg1 additionalBuyParams:(id)arg2 client:(id)arg3 logKey:(id)arg4;	// IMP=0x001000000003bc00
@property(nonatomic, retain) ASDPurchaseResponse *purchaseResponse; // @synthesize purchaseResponse;

@end

