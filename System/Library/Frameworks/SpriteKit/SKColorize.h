//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKColorize : SKAction
{
    struct SKCColorize *_mycaction;	// 8 = 0x8
}

+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000035bda
+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;	// IMP=0x0060000000035b0c
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000003541e
- (id)reversedAction;	// IMP=0x0000000000035cd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035c64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000358b3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035542
- (id)init;	// IMP=0x0000000000035426

@end

