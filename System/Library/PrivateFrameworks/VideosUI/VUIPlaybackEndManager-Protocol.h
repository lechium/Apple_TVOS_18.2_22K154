//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/NSObject-Protocol.h>

@class TVPPlayer;

@protocol VUIPlaybackEndManager <NSObject>
@property(copy, nonatomic) CDUnknownBlockType playbackBroadcastDidEndHandler;
- (void)removeAllPlayers;
- (void)remove:(TVPPlayer *)arg1;
- (void)monitor:(TVPPlayer *)arg1;
@end

