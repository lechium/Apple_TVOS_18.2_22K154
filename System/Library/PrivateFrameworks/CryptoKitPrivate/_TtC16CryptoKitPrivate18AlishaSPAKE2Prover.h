//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC16CryptoKitPrivate18AlishaSPAKE2Prover : NSObject
{
    MISSING_TYPE *spakeCtxData;	// 8 = 0x8
    MISSING_TYPE *aad;	// 16 = 0x10
    MISSING_TYPE *X;	// 24 = 0x18
    MISSING_TYPE *z0_self;	// 32 = 0x20
    MISSING_TYPE *z1_self;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000040a60
- (id)init;	// IMP=0x0000000000040a10
- (id)processResponseWithY:(id)arg1 M1:(id)arg2;	// IMP=0x0000000000040940
- (id)getX;	// IMP=0x0000000000040590
- (id)initWithPassword:(id)arg1 salt:(id)arg2 authenticatedData:(id)arg3 keyDerivationCost:(unsigned long long)arg4;	// IMP=0x00000000000404f0

@end

