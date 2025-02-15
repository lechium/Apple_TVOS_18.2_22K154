//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _HKFactorization : NSObject
{
    NSMapTable *_factors;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000014604a
+ (id)factorizationFromString:(id)arg1 factorGrammar:(id)arg2;	// IMP=0x0010000000018758
+ (id)factorizationWithFactorsAndExponents:(id)arg1;	// IMP=0x001000000001a788
+ (id)factorizationWithFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x001000000001a771
+ (id)factorization;	// IMP=0x001000000001a90d
- (void).cxx_destruct;	// IMP=0x000000000001aad8
- (void)_raiseToExponent:(long long)arg1;	// IMP=0x000000000001be86
- (void)_multiplyByFactorization:(id)arg1;	// IMP=0x000000000001c046
- (void)_multiplyByFactor:(id)arg1 exponent:(long long)arg2;	// IMP=0x000000000001a985
- (long long)_exponentForFactor:(id)arg1;	// IMP=0x000000000000dc1c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001461dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000146052
- (id)unitString;	// IMP=0x000000000000e3b5
- (long long)exponentForFactor:(id)arg1;	// IMP=0x000000000001aa90
- (id)anyFactor;	// IMP=0x000000000001aa3c
- (unsigned long long)factorCount;	// IMP=0x000000000001aa26
- (void)_enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000145e87
- (void)enumerateFactorsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d9da
- (id)factorizationByRaisingToExponent:(long long)arg1;	// IMP=0x000000000001be27
- (id)reciprocal;	// IMP=0x000000000001be0e
- (id)factorizationByDividing:(id)arg1;	// IMP=0x000000000001bdac
- (id)factorizationByMultiplying:(id)arg1;	// IMP=0x000000000001bfe9
- (id)description;	// IMP=0x0000000000145e75
- (unsigned long long)hash;	// IMP=0x0000000000145d69
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000479f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b544
- (id)init;	// IMP=0x000000000001a91f

@end

