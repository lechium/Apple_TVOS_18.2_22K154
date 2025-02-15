//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SKRunAction : SKAction
{
    SKAction *_action;	// 8 = 0x8
    NSString *_subSpriteKey;	// 16 = 0x10
    NSString *_actionKey;	// 24 = 0x18
    _Bool _waitForKeyedAction;	// 32 = 0x20
    _Bool _runOnSubSprite;	// 33 = 0x21
    _Bool _fired;	// 34 = 0x22
}

+ (id)runAction:(id)arg1 afterActionWithKey:(id)arg2;	// IMP=0x0060000000048b33
+ (id)runAction:(id)arg1 onFirstChildWithName:(id)arg2;	// IMP=0x0060000000048a74
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000048617
- (void).cxx_destruct;	// IMP=0x0000000000048ec4
- (id)reversedAction;	// IMP=0x0000000000048e0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048d66
- (void)updateWithTarget:(id)arg1 forTime:(double)arg2;	// IMP=0x0000000000048c2e
- (void)willStartWithTarget:(id)arg1 atTime:(double)arg2;	// IMP=0x0000000000048bf2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000488fc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000486c4
- (id)init;	// IMP=0x000000000004861f

@end

