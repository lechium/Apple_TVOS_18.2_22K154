//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface HBAppDeleteHintView : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UIImageView *_playPauseGlyphView;	// 16 = 0x10
    UILabel *_leftLabel;	// 24 = 0x18
    UILabel *_rightLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000cb61
- (void)_updateWithUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000000ca65
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000c9e7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000c8aa
- (void)layoutSubviews;	// IMP=0x000000000000c5f6
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000c1e5

@end

