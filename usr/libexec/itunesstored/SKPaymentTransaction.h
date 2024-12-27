//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000044cab
- (id)copyXPCEncoding;	// IMP=0x001000000004495e
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1;	// IMP=0x00100000000447a5
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0010000000043ff0
- (_Bool)mergeWithServerTransaction:(id)arg1;	// IMP=0x0010000000043732
- (id)initWithServerTransaction:(id)arg1;	// IMP=0x00100000000436e0
@property(readonly, nonatomic) NSString *_transactionIdentifier;
- (void)_setTransactionState:(long long)arg1;	// IMP=0x00100000000436c0
- (void)_setTransactionReceipt:(id)arg1;	// IMP=0x001000000004365f
- (void)_setTransactionIdentifier:(id)arg1;	// IMP=0x00100000000435fe
- (void)_setTransactionDate:(id)arg1;	// IMP=0x00100000000435b9
- (void)_setTemporaryIdentifier:(id)arg1;	// IMP=0x0010000000043558
- (void)_setOriginalTransaction:(id)arg1;	// IMP=0x0010000000043513
- (void)_setError:(id)arg1;	// IMP=0x00100000000434ce
- (void)_setDownloads:(id)arg1;	// IMP=0x0010000000043407
- (_Bool)mergeWithTransaction:(id)arg1;	// IMP=0x00100000000432bb
@property(readonly, nonatomic) NSString *matchingIdentifier;
- (_Bool)canMergeWithTransaction:(id)arg1;	// IMP=0x001000000004316f
- (id)UUID;	// IMP=0x001000000004315d
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (id)initWithPayment:(id)arg1;	// IMP=0x0010000000043050
- (id)init;	// IMP=0x0010000000042ffa

@end

