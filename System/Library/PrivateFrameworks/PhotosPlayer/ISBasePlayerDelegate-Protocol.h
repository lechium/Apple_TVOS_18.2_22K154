//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosPlayer/NSObject-Protocol.h>

@class AVPlayer, ISBasePlayer, ISWrappedAVPlayer;

@protocol ISBasePlayerDelegate <NSObject>

@optional
- (void)playerWillRelinquishVideoPlayer:(ISWrappedAVPlayer *)arg1;
- (ISWrappedAVPlayer *)wrappedVideoPlayerForPlayer:(ISBasePlayer *)arg1;
- (AVPlayer *)videoPlayerForPlayer:(ISBasePlayer *)arg1;
@end

