//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKHide : SKAction
{
    struct SKCHide *_mycaction;	// 8 = 0x8
}

+ (id)unhide;	// IMP=0x00600000000b711a
+ (id)hide;	// IMP=0x00600000000b70c2
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000b7033
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b71b8
- (id)reversedAction;	// IMP=0x00000000000b7172
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b703b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b6f11
- (id)init;	// IMP=0x00000000000b6e3a

@end

