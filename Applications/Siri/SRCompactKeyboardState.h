//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SRCompactKeyboardAnimation;

@interface SRCompactKeyboardState : NSObject
{
    SRCompactKeyboardAnimation *_animation;	// 8 = 0x8
    struct CGRect _frame;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000016b02
@property(readonly, copy, nonatomic) SRCompactKeyboardAnimation *animation; // @synthesize animation=_animation;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000016ad5
@property(readonly, nonatomic) struct CGRect frameForAnimation;
- (id)initWithKeyboardNotification:(id)arg1;	// IMP=0x00100000000166fa
- (id)initWithFrame:(struct CGRect)arg1 animation:(id)arg2;	// IMP=0x001000000001667a

@end

