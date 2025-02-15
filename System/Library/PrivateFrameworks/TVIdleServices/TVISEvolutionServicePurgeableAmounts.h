//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVISEvolutionServicePurgeableAmounts : NSObject
{
    long long _maxAmount;	// 8 = 0x8
    long long _highAmount;	// 16 = 0x10
    long long _mediumAmount;	// 24 = 0x18
    long long _lowAmount;	// 32 = 0x20
}

@property(readonly, nonatomic) long long lowAmount; // @synthesize lowAmount=_lowAmount;
@property(readonly, nonatomic) long long mediumAmount; // @synthesize mediumAmount=_mediumAmount;
@property(readonly, nonatomic) long long highAmount; // @synthesize highAmount=_highAmount;
@property(readonly, nonatomic) long long maxAmount; // @synthesize maxAmount=_maxAmount;
- (long long)amountForUrgency:(long long)arg1;	// IMP=0x000000000001b210
- (id)purgeableAmountsByConcatenatingPurgeableAmounts:(id)arg1;	// IMP=0x000000000001b0a0
- (id)description;	// IMP=0x000000000001b000
- (id)initWithMaxAmount:(long long)arg1 highAmount:(long long)arg2 mediumAmount:(long long)arg3 lowAmount:(long long)arg4;	// IMP=0x000000000001af40

@end

