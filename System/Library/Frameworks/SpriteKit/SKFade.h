//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKFade : SKAction
{
    struct SKCFade *_mycaction;	// 8 = 0x8
}

+ (id)fadeOutWithDuration:(double)arg1;	// IMP=0x006000000003666f
+ (id)fadeInWithDuration:(double)arg1;	// IMP=0x00600000000365fc
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000003657e
+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000364e7
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000035f5a
- (id)reversedAction;	// IMP=0x0000000000036771
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000366e3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036321
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036065
- (id)init;	// IMP=0x0000000000035f62

@end

