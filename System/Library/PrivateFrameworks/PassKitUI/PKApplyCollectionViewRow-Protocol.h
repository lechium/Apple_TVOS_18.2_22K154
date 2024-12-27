//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKIdentifiable-Protocol.h>

@class UICollectionViewListCell;

@protocol PKApplyCollectionViewRow <PKIdentifiable>
- (void)configureCell:(UICollectionViewListCell *)arg1;
- (Class)cellClass;

@optional
- (_Bool)shouldHighlightItem;
- (void)handleCellSelection;
@end

