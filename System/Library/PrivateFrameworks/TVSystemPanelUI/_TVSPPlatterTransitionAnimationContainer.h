//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _TVSPPlatterTransitionAnimationContainer : UIView
{
    UIVisualEffectView *_effectView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    unsigned long long _transitionKind;	// 24 = 0x18
    UIView *_sourceView;	// 32 = 0x20
    UIView *_destinationView;	// 40 = 0x28
    double _initialCornerRadius;	// 48 = 0x30
    double _finalCornerRadius;	// 56 = 0x38
    UIColor *_transitionBackgroundColor;	// 64 = 0x40
    double _focusedSizeIncrease;	// 72 = 0x48
    struct CGSize _sourceSize;	// 80 = 0x50
    struct CGSize _destinationSize;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000004e010
@property(readonly, nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(readonly, nonatomic) UIColor *transitionBackgroundColor; // @synthesize transitionBackgroundColor=_transitionBackgroundColor;
@property(readonly, nonatomic) struct CGSize destinationSize; // @synthesize destinationSize=_destinationSize;
@property(readonly, nonatomic) struct CGSize sourceSize; // @synthesize sourceSize=_sourceSize;
@property(readonly, nonatomic) double finalCornerRadius; // @synthesize finalCornerRadius=_finalCornerRadius;
@property(readonly, nonatomic) double initialCornerRadius; // @synthesize initialCornerRadius=_initialCornerRadius;
@property(readonly, nonatomic) UIView *destinationView; // @synthesize destinationView=_destinationView;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) unsigned long long transitionKind; // @synthesize transitionKind=_transitionKind;
@property(readonly, nonatomic) _Bool isCollapsing;
@property(readonly, nonatomic) _Bool isExpanding;
- (id)finalBackgroundColor;	// IMP=0x000000000004dd70
- (void)setBackgroundViewColor:(id)arg1;	// IMP=0x000000000004dd10
- (id)initialBackgroundColor;	// IMP=0x000000000004dc30
- (void)_configureCornerRadius:(double)arg1;	// IMP=0x000000000004db20
- (_Bool)sizeIsValid:(struct CGSize)arg1;	// IMP=0x000000000004da70
- (void)applyTransformToDestinationTransitioningToFinal;	// IMP=0x000000000004d6f0
- (id)effectView;	// IMP=0x000000000004d6c0
- (void)applyTransformToSourceTransitioningToDestination;	// IMP=0x000000000004d470
- (void)transitionContainerBackgroundAppearance;	// IMP=0x000000000004d410
- (void)transitionDestinationScale;	// IMP=0x000000000004d390
- (void)transitionSourceScale;	// IMP=0x000000000004d360
- (void)transitionDestinationOpacity;	// IMP=0x000000000004d240
- (void)transitionSourceOpacity;	// IMP=0x000000000004d120
- (void)layoutSubviews;	// IMP=0x000000000004cd50
- (void)configure;	// IMP=0x000000000004c380
- (id)initWithFrame:(struct CGRect)arg1 transitionKind:(unsigned long long)arg2 transitionBackgroundColor:(id)arg3 sourceView:(id)arg4 destinationView:(id)arg5 initialCornerRadius:(double)arg6 finalCornerRadius:(double)arg7 focusedSizeIncrease:(double)arg8;	// IMP=0x000000000004c080

@end

