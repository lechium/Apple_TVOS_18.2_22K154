//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class NSMutableSet, UIPress;

__attribute__((visibility("hidden")))
@interface _UIFocusLinearMovementDebugGestureRecognizer : UIGestureRecognizer
{
    UIPress *_press;	// 8 = 0x8
    _Bool _allowsGroupMode;	// 16 = 0x10
    NSMutableSet *_presses;	// 24 = 0x18
    _Bool _groupMode;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001305539
@property(nonatomic, getter=isGroupMode) _Bool groupMode; // @synthesize groupMode=_groupMode;
- (void)reset;	// IMP=0x00000000013054fc
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013053ac
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000130525c
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000130524a
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000013050fa
- (void)_update;	// IMP=0x0000000001304d38
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 allowsGroupMode:(_Bool)arg3;	// IMP=0x0000000001304c1a
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000001304c05

@end

