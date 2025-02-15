//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueResponse, NSArray, NSDate, StoreKitClientIdentity;

@interface LoadMicroPaymentQueuesOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;	// 96 = 0x60
    NSDate *_lastQueueCheckDate;	// 104 = 0x68
    long long _reason;	// 112 = 0x70
    MicroPaymentQueueResponse *_paymentsResponse;	// 120 = 0x78
    NSArray *_userDSIDs;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000008413a
@property(copy) NSArray *userDSIDs; // @synthesize userDSIDs=_userDSIDs;
@property long long reason; // @synthesize reason=_reason;
@property(retain) MicroPaymentQueueResponse *paymentsResponse; // @synthesize paymentsResponse=_paymentsResponse;
- (id)_URLBagContext;	// IMP=0x001000000008405c
- (_Bool)_shouldCheckAutoRenewQueue;	// IMP=0x0010000000083f70
- (_Bool)_appendToResponse:(id)arg1 usingOperation:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000083a8c
- (_Bool)_appendNormalQueueToResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000083927
- (_Bool)_appendAutoRenewQueueToResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000837c2
- (void)run;	// IMP=0x001000000008309b
@property(copy) NSDate *lastQueueCheckDate;
@property(copy) StoreKitClientIdentity *clientIdentity;

@end

