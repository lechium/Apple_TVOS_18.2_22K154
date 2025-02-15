//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/MPCPlayerCommand-Protocol.h>

@class MPCPlaybackIntent, MPCPlayerCommandRequest, NSArray;

@protocol MPCPlayerResetTracklistCommand <MPCPlayerCommand>
@property(readonly, nonatomic) NSArray *specializedIntents;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1 replaceIntent:(long long)arg2;
- (MPCPlayerCommandRequest *)replaceWithPlaybackIntent:(MPCPlaybackIntent *)arg1;
- (MPCPlayerCommandRequest *)clearUpNextItems;
- (MPCPlayerCommandRequest *)clear;
@end

