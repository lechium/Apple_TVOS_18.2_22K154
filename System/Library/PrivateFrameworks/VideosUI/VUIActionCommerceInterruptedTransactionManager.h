//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceInterruptedTransactionManager : NSObject
{
    NSDictionary *interruptedOfferDetails;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0060000000240421
- (void).cxx_destruct;	// IMP=0x0000000000240543
- (void)setLastInterruptedOfferDetails:(id)arg1;	// IMP=0x00000000002404e9
- (id)getLastInterruptedOfferDetails;	// IMP=0x00000000002404a6

@end

