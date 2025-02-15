//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSString, UIAccessibilityHUDItem, UILabel;

__attribute__((visibility("hidden")))
@interface _UIStatusBarBadgeView : UIView
{
    UILabel *_label;	// 8 = 0x8
    NSArray *_constraintsWithConstant;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000011e4f3d
@property(retain, nonatomic) NSArray *constraintsWithConstant; // @synthesize constraintsWithConstant=_constraintsWithConstant;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (id)viewForLastBaselineLayout;	// IMP=0x00000000011e4ede
- (void)applyStyleAttributes:(id)arg1;	// IMP=0x00000000011e4c08
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011e47bb

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

