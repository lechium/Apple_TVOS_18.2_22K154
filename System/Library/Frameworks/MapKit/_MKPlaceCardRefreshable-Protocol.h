//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/NSObject-Protocol.h>

@protocol _MKPlaceItem;

@protocol _MKPlaceCardRefreshable <NSObject>
@property(nonatomic) unsigned long long options;
@property(readonly, nonatomic) double headerSecondaryNameLabelPadding;
@property(nonatomic) _Bool placeInBookmarks;
@property(nonatomic) _Bool placeInShortcuts;
@property(nonatomic) _Bool placeInCollections;
- (void)setPlaceItem:(id <_MKPlaceItem>)arg1 updateOriginalContact:(_Bool)arg2;
- (void)updateHeaderTitle;
@end

