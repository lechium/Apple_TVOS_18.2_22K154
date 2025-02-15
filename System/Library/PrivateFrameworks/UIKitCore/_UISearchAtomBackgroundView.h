//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIBlurEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchAtomBackgroundView : UIView
{
    UIVisualEffectView *_visualEffectView;	// 160 = 0xa0
    long long _selectionStyle;	// 168 = 0xa8
    UIBlurEffect *_blurEffect;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000111366e
@property(retain, nonatomic) UIBlurEffect *blurEffect; // @synthesize blurEffect=_blurEffect;
@property(nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
- (void)_updateSelectionStyleMask;	// IMP=0x00000000011134f4
- (void)_transitionFromBlurEffect:(id)arg1 toBlurEffect:(id)arg2;	// IMP=0x000000000111313f
- (void)layoutSubviews;	// IMP=0x0000000001113022
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000001112fc5

@end

