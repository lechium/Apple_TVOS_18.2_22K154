//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSString, UIAccessibilityHUDItem, UIColor, UIView, UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillView
{
    _Bool _pulsing;	// 8 = 0x8
    UIVisualEffect *_visualEffect;	// 16 = 0x10
    UIColor *_pillColor;	// 24 = 0x18
    UIView *_subviewForBaselineAlignment;	// 32 = 0x20
    CALayer *_pulseLayer;	// 40 = 0x28
    UIVisualEffectView *_visualEffectView;	// 48 = 0x30
    struct UIEdgeInsets _alignmentRectInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002eb5cd
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) CALayer *pulseLayer; // @synthesize pulseLayer=_pulseLayer;
@property(nonatomic) __weak UIView *subviewForBaselineAlignment; // @synthesize subviewForBaselineAlignment=_subviewForBaselineAlignment;
@property(retain, nonatomic) UIColor *pillColor; // @synthesize pillColor=_pillColor;
@property(retain, nonatomic) UIVisualEffect *visualEffect; // @synthesize visualEffect=_visualEffect;
@property(nonatomic) _Bool pulsing; // @synthesize pulsing=_pulsing;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
- (id)viewForLastBaselineLayout;	// IMP=0x00000000002eb4d4
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x00000000002eb35f
- (void)_updateBackgroundColor;	// IMP=0x00000000002eb2ac
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002eb26b
- (_Bool)isUserInteractionEnabled;	// IMP=0x00000000002eb222
- (_Bool)canBecomeFocused;	// IMP=0x00000000002eb1d9
- (void)layoutSubviews;	// IMP=0x00000000002eb049
- (void)resumePersistentAnimation;	// IMP=0x00000000002eaef2
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002eacbb

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIAccessibilityHUDItem",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(readonly, nonatomic) _Bool prefersBaselineAlignment;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool prefersCenterVerticalAlignment;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N


@end

