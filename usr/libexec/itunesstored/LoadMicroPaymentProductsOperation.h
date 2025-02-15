//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, StoreKitClientIdentity;
@protocol SKProductsResponse;

@interface LoadMicroPaymentProductsOperation : ISOperation
{
    StoreKitClientIdentity *_clientIdentity;	// 96 = 0x60
    NSArray *_productIdentifiers;	// 104 = 0x68
    id <SKProductsResponse> _response;	// 112 = 0x70
}

- (_Bool)_loadResponseForIdentity:(id)arg1 batchSize:(long long)arg2 returningError:(id *)arg3;	// IMP=0x0020000000050447
- (id)_copyResponseForIdentity:(id)arg1 identifiers:(id)arg2 returningError:(id *)arg3;	// IMP=0x0010000000050269
- (id)_copyQueryStringDictionaryForIdentity:(id)arg1 productIdentifiers:(id)arg2;	// IMP=0x0010000000050049
- (long long)_batchSizeForIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004fe02
- (void)run;	// IMP=0x001000000004f870
@property(copy) StoreKitClientIdentity *clientIdentity;
@property(readonly) NSArray *productIdentifiers;
- (id)copyProductsResponse;	// IMP=0x001000000004f7a4
- (void)dealloc;	// IMP=0x001000000004f6e9
- (id)initWithProductIdentifiers:(id)arg1;	// IMP=0x001000000004f68b

@end

