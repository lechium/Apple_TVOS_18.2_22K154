//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI25TVFilterResultActionsCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 0 = 0x0
    MISSING_TYPE *titleLabel;	// 0 = 0x0
    MISSING_TYPE *sortButton;	// 0 = 0x0
    MISSING_TYPE *bottomFocusGuide;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000051420
- (void)sortButtonTapped;	// IMP=0x00000000000513c0
- (void)clearButtonTapped;	// IMP=0x0000000000051210
- (void)prepareForReuse;	// IMP=0x0000000000051140
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000051120
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000510f0
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end

