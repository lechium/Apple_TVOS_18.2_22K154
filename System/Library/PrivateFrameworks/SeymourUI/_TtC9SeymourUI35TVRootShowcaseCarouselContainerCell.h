//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI35TVRootShowcaseCarouselContainerCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 0 = 0x0
    MISSING_TYPE *layout;	// 0 = 0x0
    MISSING_TYPE *carouselView;	// 1868783455 = 0x6f635f5f
    MISSING_TYPE *pageControl;	// 0 = 0x0
    MISSING_TYPE *preferredCenterIndex;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *items;	// 0 = 0x0
    MISSING_TYPE *onElementAppearance;	// 13056048 = 0xc73830
    MISSING_TYPE *onElementDisappearance;	// 16688 = 0x4130
    MISSING_TYPE *onImpressionableBoundsChange;	// 0 = 0x0
    MISSING_TYPE *onVisibleBoundsChange;	// 0 = 0x0
    MISSING_TYPE *itemCellIdentifier;	// 0 = 0x0
    MISSING_TYPE *isUpdatingImpression;	// 0 = 0x0
    MISSING_TYPE *impressionElements;	// 0 = 0x0
    MISSING_TYPE *leftArrowButton;	// 1 = 0x1
    MISSING_TYPE *rightArrowButton;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000204af0
- (void)didMoveToWindow;	// IMP=0x0000000000203f10
- (void)layoutSubviews;	// IMP=0x0000000000203ee0
- (void)prepareForReuse;	// IMP=0x0000000000203d20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000203d00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000203cd0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (id)carouselView:(id)arg1 cellForItemAtIndex:(long long)arg2;	// IMP=0x0000000000204d40
- (long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x0000000000204d20
- (void)carouselView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(long long)arg3;	// IMP=0x0000000000204e40
- (void)carouselView:(id)arg1 didCenterItemAtIndex:(long long)arg2;	// IMP=0x0000000000204de0
- (long long)indexForPreferredCenteredViewInCarouselView:(id)arg1;	// IMP=0x0000000000204db0

@end

