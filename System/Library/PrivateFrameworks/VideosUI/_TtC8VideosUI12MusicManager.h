//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI12MusicManager : NSObject
{
    MISSING_TYPE *logger;	// 2337013916 = 0x8b4c009c
    MISSING_TYPE *savedSongsPlaylistId;	// 1200243199 = 0x478a41ff
    MISSING_TYPE *playlistListenerTask;	// 4294966880 = 0xfffffe60
    MISSING_TYPE *savedSongsPlaylistSongsIDs;	// 1229425217 = 0x49478a41
    MISSING_TYPE *pendingAddedSongs;	// 947882825 = 0x387f8b49
    MISSING_TYPE *defaultArtworkSymbol;	// 2303262915 = 0x894900c3
}

- (void).cxx_destruct;	// IMP=0x000000000063508b
- (void)dealloc;	// IMP=0x000000000063506e
- (id)init;	// IMP=0x0000000000634ff5
- (void)addSongToMusicWithSongId:(id)arg1 isExplicit:(_Bool)arg2;	// IMP=0x000000000063c545

@end

