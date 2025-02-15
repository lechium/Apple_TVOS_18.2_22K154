//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MISSING_TYPE, NSArray, SSAuthenticationContext;

@interface PurchaseHistoryOperation : ISOperation
{
    MISSING_TYPE *_authenticationContext;	// 96 = 0x60
    NSArray *_inputItems;	// 104 = 0x68
    NSArray *_outputItems;	// 112 = 0x70
}

- (void)_setOutputItemsWithMapping:(id)arg1;	// IMP=0x002000000010c769
- (id)_newURLOperation;	// IMP=0x001000000010c429
- (void)run;	// IMP=0x001000000010c1b5
@property(readonly) NSArray *purchaseHistoryItems;
@property(readonly) NSArray *purchasedItems;
@property(readonly) SSAuthenticationContext *authenticationContext;
- (void)dealloc;	// IMP=0x001000000010c0be
- (id)initWithPurchaseHistoryItems:(id)arg1 authenticationContext:(id)arg2;	// IMP=0x001000000010c036
- (id)init;	// IMP=0x001000000010c020

@end

