//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PGBackdropView, UIImageView;

__attribute__((visibility("hidden")))
@interface PGStashView : UIView
{
    PGBackdropView *_backdropView;	// 8 = 0x8
    UIView *_lightTintView;	// 16 = 0x10
    UIView *_darkTintView;	// 24 = 0x18
    UIImageView *_leftChevron;	// 32 = 0x20
    UIImageView *_rightChevron;	// 40 = 0x28
    _Bool _chevronsHidden;	// 48 = 0x30
    _Bool _isChevronShownLeft;	// 49 = 0x31
    double _blurProgress;	// 56 = 0x38
    double _stashedTabWidth;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000044b68
@property(nonatomic) double stashedTabWidth; // @synthesize stashedTabWidth=_stashedTabWidth;
@property(nonatomic) double blurProgress; // @synthesize blurProgress=_blurProgress;
- (void)resetChevronState;	// IMP=0x0000000000044b19
- (void)setChevronHidden:(_Bool)arg1 left:(_Bool)arg2;	// IMP=0x0000000000044ae3
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x000000000004488d
- (void)layoutStashChevrons;	// IMP=0x00000000000444f6
- (void)layoutSubviews;	// IMP=0x0000000000044308
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000043cdd

@end

