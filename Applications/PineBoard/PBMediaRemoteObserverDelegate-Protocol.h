//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class PBMediaRemoteObserver;

@protocol PBMediaRemoteObserverDelegate <NSObject>
- (void)mediaRemoteObserverRemotePlaybackStateDidChange:(PBMediaRemoteObserver *)arg1;
- (void)mediaRemoteObserverNowPlayingPlayingOrInfoOrRateDidChange:(PBMediaRemoteObserver *)arg1;
- (void)mediaRemoteObserverNowPlayingAppDidChange:(PBMediaRemoteObserver *)arg1;
- (void)mediaRemoteObserverIsPlayingDidChange:(PBMediaRemoteObserver *)arg1;
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(PBMediaRemoteObserver *)arg1;
@end

