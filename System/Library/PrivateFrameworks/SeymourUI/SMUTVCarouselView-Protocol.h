//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UICollectionView, UICollectionViewCell, UIView;
@protocol SMUTVCarouselViewDataSource, SMUTVCarouselViewDelegate;

@protocol SMUTVCarouselView
@property(nonatomic) unsigned long long scrollMode;
@property(nonatomic) double pageControlMargin;
@property(nonatomic) _Bool showsPageControl;
@property(nonatomic) _Bool shouldScaleOnIdleFocus;
@property(readonly, nonatomic) double showcaseFactor;
@property(retain, nonatomic) UIView *headerView;
@property(nonatomic) struct CGPoint focusDirection;
@property(readonly, copy, nonatomic) NSArray *visibleCells;
@property(nonatomic) double unitScrollDuration;
@property(nonatomic) double autoscrollInterval;
@property(nonatomic) double interitemSpacing;
@property(nonatomic) struct CGSize itemSize;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(nonatomic) __weak id <SMUTVCarouselViewDelegate> delegate;
@property(nonatomic) __weak id <SMUTVCarouselViewDataSource> dataSource;
- (UICollectionView *)_collectionView;
- (void)centerItemAtPageIndex:(long long)arg1;
- (UICollectionViewCell *)focusedCell;
- (void)reloadData;
- (long long)indexForCell:(UICollectionViewCell *)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(NSString *)arg1 forIndex:(long long)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(NSString *)arg2;
- (void)layoutIfNeeded;
@end

