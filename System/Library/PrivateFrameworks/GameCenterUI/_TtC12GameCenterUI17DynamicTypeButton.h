//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKFocusableButton.h"

@class MISSING_TYPE;

@interface _TtC12GameCenterUI17DynamicTypeButton : GKFocusableButton
{
    MISSING_TYPE *fontUseCaseContentSizeCategory;	// 8 = 0x8
    MISSING_TYPE *fontUseCase;	// 3644280 = 0x379b78
    MISSING_TYPE *titleColorFollowsTintColor;	// 0 = 0x0
    MISSING_TYPE *imageAlignment;	// 103 = 0x67
    MISSING_TYPE *imageSpacing;	// 1937071967 = 0x73755f5f
    MISSING_TYPE *imageWantsBaselineAlignment;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *touchOutsideMargin;	// 18 = 0x12
}

- (void).cxx_destruct;	// IMP=0x0000000000175143
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001750ac
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000174fc5
- (void)tintColorDidChange;	// IMP=0x0000000000174dae
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000174cbe
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000174b50
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x00000000001745f4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000173dee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000173cc4

@end

