//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface _TVOrganizerFocusAdaptor : UIView
{
    _Bool _focused;	// 8 = 0x8
    _UIFloatingContentView *_selectingView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000721ea
@property(retain, nonatomic) _UIFloatingContentView *selectingView; // @synthesize selectingView=_selectingView;
@property(readonly, nonatomic, getter=isFocused) _Bool focused; // @synthesize focused=_focused;
- (void)_playButtonAction:(id)arg1;	// IMP=0x0000000000072143
- (void)_selectButtonAction:(id)arg1;	// IMP=0x00000000000720bd
- (void)layoutSubviews;	// IMP=0x0000000000072027
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000071f4c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000071e59
- (_Bool)canBecomeFocused;	// IMP=0x0000000000071e51
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000071dcc
- (id)contentView;	// IMP=0x0000000000071daf
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000071a9b

@end

