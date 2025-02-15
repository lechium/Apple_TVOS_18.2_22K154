//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, NSLayoutConstraint, SLReplicatorView;

__attribute__((visibility("hidden")))
@interface SLHighlightPillMarqueeView : UIView
{
    _Bool _marqueeEnabled;	// 8 = 0x8
    _Bool _marqueeAnimationIsActive;	// 9 = 0x9
    _Bool _endingPositionConstraintsShouldBeActive;	// 10 = 0xa
    double _marqueeClippingWidth;	// 16 = 0x10
    long long _replicatedContentAlignment;	// 24 = 0x18
    UIView *_pillView;	// 32 = 0x20
    SLReplicatorView *_replicatorView;	// 40 = 0x28
    NSLayoutConstraint *_ourWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_ourHeightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_replicatorViewStartingPositionXConstraint;	// 64 = 0x40
    NSLayoutConstraint *_replicatorViewEndingPositionXConstraint;	// 72 = 0x48
    NSLayoutConstraint *_replicatorViewYConstraint;	// 80 = 0x50
    CALayer *_maskLayer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000013a87
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) NSLayoutConstraint *replicatorViewYConstraint; // @synthesize replicatorViewYConstraint=_replicatorViewYConstraint;
@property(retain, nonatomic) NSLayoutConstraint *replicatorViewEndingPositionXConstraint; // @synthesize replicatorViewEndingPositionXConstraint=_replicatorViewEndingPositionXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *replicatorViewStartingPositionXConstraint; // @synthesize replicatorViewStartingPositionXConstraint=_replicatorViewStartingPositionXConstraint;
@property(retain, nonatomic) NSLayoutConstraint *ourHeightConstraint; // @synthesize ourHeightConstraint=_ourHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *ourWidthConstraint; // @synthesize ourWidthConstraint=_ourWidthConstraint;
@property(nonatomic) _Bool endingPositionConstraintsShouldBeActive; // @synthesize endingPositionConstraintsShouldBeActive=_endingPositionConstraintsShouldBeActive;
@property(nonatomic) _Bool marqueeAnimationIsActive; // @synthesize marqueeAnimationIsActive=_marqueeAnimationIsActive;
@property(retain, nonatomic) SLReplicatorView *replicatorView; // @synthesize replicatorView=_replicatorView;
@property(retain, nonatomic) UIView *pillView; // @synthesize pillView=_pillView;
@property(nonatomic) long long replicatedContentAlignment; // @synthesize replicatedContentAlignment=_replicatedContentAlignment;
@property(nonatomic) double marqueeClippingWidth; // @synthesize marqueeClippingWidth=_marqueeClippingWidth;
@property(nonatomic) _Bool marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
- (void)_deactivateMarqueeAnimationIfNecessary;	// IMP=0x0000000000013874
- (void)_activateMarqueeAnimationIfNecessary;	// IMP=0x00000000000135a6
- (void)updateConstraints;	// IMP=0x0000000000012b55
- (void)layoutSubviews;	// IMP=0x000000000001286b
- (id)initWithFrame:(struct CGRect)arg1 pillView:(id)arg2;	// IMP=0x00000000000124bf

@end

