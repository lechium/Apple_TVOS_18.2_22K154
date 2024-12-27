//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSIndexPath, UICollectionView, UICollectionViewLayout;

@protocol VUIShelfViewLayoutDelegate <NSObject>

@optional
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 selectionMarginsForItemAtIndexPath:(NSIndexPath *)arg3;
- (struct UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
@end

