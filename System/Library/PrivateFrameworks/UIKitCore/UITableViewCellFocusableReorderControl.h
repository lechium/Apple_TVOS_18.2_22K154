//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableReorderControl
{
    _UIFloatingContentView *_floatingContentView;	// 200 = 0xc8
    UIPanGestureRecognizer *_panRecognizer;	// 208 = 0xd0
    UITapGestureRecognizer *_upArrowButtonRecognizer;	// 216 = 0xd8
    UITapGestureRecognizer *_downArrowButtonRecognizer;	// 224 = 0xe0
    _Bool _cellHasReorderingAppearance;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000012e2b6c
- (void)_downArrowButton:(id)arg1;	// IMP=0x00000000012e2b2b
- (void)_upArrowButton:(id)arg1;	// IMP=0x00000000012e2aed
- (void)_arrowButton:(long long)arg1;	// IMP=0x00000000012e293d
- (void)_panRecognizer:(id)arg1;	// IMP=0x00000000012e2723
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e2630
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e2553
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e249d
- (_Bool)_shouldHandlePressEvent:(id)arg1;	// IMP=0x00000000012e241b
- (void)_endIndirectTracking;	// IMP=0x00000000012e233c
- (void)_beginIndirectTracking;	// IMP=0x00000000012e21b7
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e21b1
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e21a9
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000012e21a1
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000012e2135
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000012e2056
- (void)_updateFocusedFloatingContentView:(_Bool)arg1;	// IMP=0x00000000012e1ff9
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;	// IMP=0x00000000012e1f81
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000012e1ec8
- (_Bool)wantsMaskingWhileAnimatingDisabled;	// IMP=0x00000000012e1eab
- (void)layoutSubviews;	// IMP=0x00000000012e1e36
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000012e1de0
- (void)_updateFloatingViewForCurrentTraits;	// IMP=0x00000000012e1be3
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x00000000012e186e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

