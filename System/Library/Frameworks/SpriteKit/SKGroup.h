//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKGroup : SKAction
{
    void *_mycaction;	// 8 = 0x8
    NSArray *_actions;	// 16 = 0x10
}

+ (id)groupWithActions:(id)arg1;	// IMP=0x0060000000036e65
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000368e4
- (void).cxx_destruct;	// IMP=0x00000000000377ac
- (_Bool)finished;	// IMP=0x0000000000037619
- (id)reversedAction;	// IMP=0x00000000000373ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003732b
- (id)subactions;	// IMP=0x0000000000036e50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036dcd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036a1f
- (id)init;	// IMP=0x00000000000368ec

@end

