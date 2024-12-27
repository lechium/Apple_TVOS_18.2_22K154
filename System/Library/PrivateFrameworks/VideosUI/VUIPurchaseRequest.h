//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSBuyParams, AMSPurchase, NSString;

__attribute__((visibility("hidden")))
@interface VUIPurchaseRequest : NSObject
{
    AMSPurchase *_purchase;	// 8 = 0x8
    NSString *_buyParamsString;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    NSString *_enhancedBuyParamsString;	// 32 = 0x20
    AMSBuyParams *_amsBuyParams;	// 40 = 0x28
    long long _purchaseType;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
}

+ (_Bool)shouldPlayWhenDoneForActionRef:(id)arg1;	// IMP=0x006000000006765d
+ (long long)getPurchaseTypeFromActionRef:(id)arg1;	// IMP=0x00600000000674bb
- (void).cxx_destruct;	// IMP=0x0000000000067b36
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long purchaseType; // @synthesize purchaseType=_purchaseType;
@property(retain, nonatomic) AMSBuyParams *amsBuyParams; // @synthesize amsBuyParams=_amsBuyParams;
@property(retain, nonatomic) NSString *enhancedBuyParamsString; // @synthesize enhancedBuyParamsString=_enhancedBuyParamsString;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *buyParamsString; // @synthesize buyParamsString=_buyParamsString;
@property(retain, nonatomic) AMSPurchase *purchase; // @synthesize purchase=_purchase;
- (void)_recordErrorLog:(id)arg1;	// IMP=0x0000000000067773
- (void)handleRequestCompletionWithResult:(id)arg1 andError:(id)arg2;	// IMP=0x0000000000067280
- (void)enqueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000006714b
- (void)_createPurchaseRequest;	// IMP=0x0000000000067073
- (id)initWithBuyParams:(id)arg1 ofPurchaseType:(long long)arg2;	// IMP=0x0000000000066ed6

@end

