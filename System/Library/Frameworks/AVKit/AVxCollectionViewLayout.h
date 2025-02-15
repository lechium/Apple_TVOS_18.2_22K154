//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class AVxGroupList, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVxCollectionViewLayout : UICollectionViewLayout
{
    _Bool _isLayoutClean;	// 8 = 0x8
    _Bool _isLayoutInProgress;	// 9 = 0x9
    NSMutableArray *_allLayoutAttributes;	// 16 = 0x10
    double _interitemSpacing;	// 24 = 0x18
    AVxGroupList *_groups;	// 32 = 0x20
    struct CGSize _itemSize;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000173796
@property(retain, nonatomic) AVxGroupList *groups; // @synthesize groups=_groups;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (void)_buildLayout;	// IMP=0x00000000001734ef
- (void)_buildLayoutForSection:(long long)arg1 minX:(double)arg2 maxX:(double)arg3;	// IMP=0x000000000017316c
- (double)_calculateWidthForSection:(long long)arg1 maxWidthAllowed:(double)arg2;	// IMP=0x000000000017309c
- (id)_visibleItemsForSection:(long long)arg1;	// IMP=0x0000000000172e87
- (double)_availableWidth;	// IMP=0x0000000000172da4
- (double)_availableRight;	// IMP=0x0000000000172cc9
- (double)_availableLeft;	// IMP=0x0000000000172bff
- (id)controlItemForIndexPath:(id)arg1;	// IMP=0x0000000000172b58
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000172a93
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000172a6e
- (void)prepareLayout;	// IMP=0x00000000001729f6
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000017290a
- (void)_loadGroups;	// IMP=0x0000000000172728
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x0000000000172720
- (id)init;	// IMP=0x00000000001726a2

@end

