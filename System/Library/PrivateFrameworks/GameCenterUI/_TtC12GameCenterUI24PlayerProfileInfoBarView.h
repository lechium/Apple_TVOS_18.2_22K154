//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI24PlayerProfileInfoBarView : UIView
{
    MISSING_TYPE *centerContentInScrollView;	// 8 = 0x8
    MISSING_TYPE *state;	// 9 = 0x9
    MISSING_TYPE *infoItemPairs;	// 16 = 0x10
    MISSING_TYPE *separators;	// 24 = 0x18
    MISSING_TYPE *scrollView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000157668
@property(nonatomic, readonly) NSArray *accessibilityInfoItemPairs;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001573c0
- (void)layoutSubviews;	// IMP=0x0000000000156fba
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000000156b87
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001567b0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001563aa
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001562be

@end

