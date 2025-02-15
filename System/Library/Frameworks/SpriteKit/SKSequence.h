//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKSequence : SKAction
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
    unsigned long long _animIndex;	// 24 = 0x18
}

+ (id)sequenceWithActions:(id)arg1;	// IMP=0x006000000004ac64
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000004a52a
- (void).cxx_destruct;	// IMP=0x000000000004b447
- (id)reversedAction;	// IMP=0x000000000004b219
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b137
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004ab78
- (id)subactions;	// IMP=0x000000000004ab63
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a66a
- (id)init;	// IMP=0x000000000004a532

@end

