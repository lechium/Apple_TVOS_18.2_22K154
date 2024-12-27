//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString, UIAccessibilityHUDItem, UIImageView, _UIStatusBarCellularSignalView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarEmergencySignalView : UIView
{
    _Bool _rounded;	// 8 = 0x8
    UIImageView *_sosView;	// 16 = 0x10
    _UIStatusBarCellularSignalView *_signalView;	// 24 = 0x18
    long long _iconSize;	// 32 = 0x20
    NSLayoutConstraint *_topConstraint;	// 40 = 0x28
    NSLayoutConstraint *_verticalInterspaceConstraint;	// 48 = 0x30
    struct UIEdgeInsets _alignmentRectInsets;	// 56 = 0x38
}

+ (double)_interspaceForIconSize:(long long)arg1;	// IMP=0x00100000011e8cec
+ (double)_fontSizeForIconSize:(long long)arg1;	// IMP=0x00100000011e8ccc
- (void).cxx_destruct;	// IMP=0x00000000011e97d5
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(retain, nonatomic) NSLayoutConstraint *verticalInterspaceConstraint; // @synthesize verticalInterspaceConstraint=_verticalInterspaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool rounded; // @synthesize rounded=_rounded;
@property(readonly) _UIStatusBarCellularSignalView *signalView; // @synthesize signalView=_signalView;
@property(readonly) UIImageView *sosView; // @synthesize sosView=_sosView;
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIAccessibilityHUDItem",?,R,N

- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000011e93b8
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x00000000011e9294
- (void)_iconSizeDidChange;	// IMP=0x00000000011e90f4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011e90ad
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011e9055
- (void)_commonInit;	// IMP=0x00000000011e8d0c

// Remaining properties
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

