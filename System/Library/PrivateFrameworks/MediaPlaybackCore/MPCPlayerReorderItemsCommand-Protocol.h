//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlayerCommandRequest, MPCPlayerResponseItem, NSIndexPath;

@protocol MPCPlayerReorderItemsCommand <MPCPlayerCommand>
- (NSIndexPath *)limitedDisplayIndexPathForMovingIndexPath:(NSIndexPath *)arg1 toProprosedIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)limitedIndexPathForMovingIndexPath:(NSIndexPath *)arg1 toProprosedIndexPath:(NSIndexPath *)arg2;
- (MPCPlayerCommandRequest *)moveItem:(MPCPlayerResponseItem *)arg1 beforeItem:(MPCPlayerResponseItem *)arg2;
- (MPCPlayerCommandRequest *)moveItem:(MPCPlayerResponseItem *)arg1 afterItem:(MPCPlayerResponseItem *)arg2;
- (_Bool)canMoveItem:(MPCPlayerResponseItem *)arg1;
@end

