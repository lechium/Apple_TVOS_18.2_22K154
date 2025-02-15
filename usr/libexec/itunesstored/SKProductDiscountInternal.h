//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscountInternal : NSObject
{
    NSDecimalNumber *_price;	// 8 = 0x8
    NSLocale *_priceLocale;	// 16 = 0x10
    unsigned long long _paymentMode;	// 24 = 0x18
    SKProductSubscriptionPeriod *_subscriptionPeriod;	// 32 = 0x20
    unsigned long long _numberOfPeriods;	// 40 = 0x28
    unsigned long long _type;	// 48 = 0x30
    NSString *_identifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000125384

@end

