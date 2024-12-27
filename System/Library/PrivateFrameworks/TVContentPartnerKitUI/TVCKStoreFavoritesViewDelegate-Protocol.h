//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/NSObject-Protocol.h>

@class TVCKStoreFavoritesView, TVContentItem;

@protocol TVCKStoreFavoritesViewDelegate <NSObject>

@optional
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 didEndEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 willBeginEditingItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 moveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (_Bool)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 canMoveItemAtIndex:(unsigned long long)arg2;
- (void)storeFavoritesView:(TVCKStoreFavoritesView *)arg1 didSelectItem:(TVContentItem *)arg2;
@end

