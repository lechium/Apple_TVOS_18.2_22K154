//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface APSNoOpPowerAssertion
{
}

+ (void)prepareForWake;	// IMP=0x0040000000071c8f
+ (void)setUseInteractivePowerAssertion:(_Bool)arg1;	// IMP=0x0010000000071c89
- (_Bool)isClear;	// IMP=0x0040000000071caf
- (void)clear;	// IMP=0x0010000000071ca9
- (void)hold;	// IMP=0x0010000000071ca3
- (id)initWithName:(id)arg1 category:(int)arg2 holdDuration:(double)arg3;	// IMP=0x0010000000071c95

@end

