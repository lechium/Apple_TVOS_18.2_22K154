//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class UIView, _UIFloatingContentView;

@interface TVNPFloatingContentControl : UIControl
{
    _UIFloatingContentView *_floatingContentView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000029d80
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
- (unsigned long long)_currentControlState;	// IMP=0x0000000000029ce0
- (_Bool)_canHandlePresses:(id)arg1;	// IMP=0x0000000000029bf0
- (void)_setupConstraints;	// IMP=0x00000000000295e0
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000029500
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000029430
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000029360
- (_Bool)canBecomeFocused;	// IMP=0x0000000000029340
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000292b0
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000029240
- (void)setControlState:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000291f0
@property(readonly, nonatomic) UIView *contentView;
- (id)init;	// IMP=0x0000000000028f60

@end

