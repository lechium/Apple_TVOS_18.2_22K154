//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSString, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI20JetDashboardCellView : UIView
{
    MISSING_TYPE *glyph;	// 8 = 0x8
    MISSING_TYPE *titleLabel;	// 16 = 0x10
    MISSING_TYPE *subtitleLabel;	// 24 = 0x18
    MISSING_TYPE *chevronGlyph;	// 32 = 0x20
    MISSING_TYPE *state;	// 40 = 0x28
    MISSING_TYPE *contentViewBackground;	// 48 = 0x30
    MISSING_TYPE *usingCustomHighlightView;	// 56 = 0x38
    MISSING_TYPE *isHighlighted;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x000000000032229a
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)layoutSubviews;	// IMP=0x00000000003218d0
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x00000000003216ab
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003214f5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000321402
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000321164

@end

