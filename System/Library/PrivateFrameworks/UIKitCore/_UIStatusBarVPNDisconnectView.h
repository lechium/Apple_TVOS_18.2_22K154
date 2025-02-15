//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CAShapeLayer, NSString, UIAccessibilityHUDItem, _UIStatusBarImageView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVPNDisconnectView : UIView
{
    _UIStatusBarImageView *_iconView;	// 8 = 0x8
    CAShapeLayer *_iconSlashMaskShapeLayer;	// 16 = 0x10
    UIView *_slashView;	// 24 = 0x18
    CAShapeLayer *_slashShapeLayer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000ae36ba
@property(retain, nonatomic) CAShapeLayer *slashShapeLayer; // @synthesize slashShapeLayer=_slashShapeLayer;
@property(retain, nonatomic) UIView *slashView; // @synthesize slashView=_slashView;
@property(retain, nonatomic) CAShapeLayer *iconSlashMaskShapeLayer; // @synthesize iconSlashMaskShapeLayer=_iconSlashMaskShapeLayer;
@property(retain, nonatomic) _UIStatusBarImageView *iconView; // @synthesize iconView=_iconView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000ae3609
- (id)viewForLastBaselineLayout;	// IMP=0x0000000000ae35f4
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x0000000000ae35b6
- (void)animateSlashForUpdate:(id)arg1;	// IMP=0x0000000000ae33e5
- (void)resetSlashForUpdate:(id)arg1;	// IMP=0x0000000000ae3332
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x0000000000ae3268
- (void)updateFramesForStyleAttributes:(id)arg1;	// IMP=0x0000000000ae30cb
- (void)_setupForStyleAttributes:(id)arg1;	// IMP=0x0000000000ae2b37

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

