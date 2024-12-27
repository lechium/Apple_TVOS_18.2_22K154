//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMediaInfoFetchController : NSObject
{
    _Bool _preloadPlaybackEnabled;	// 8 = 0x8
    NSArray *_mediaInfos;	// 16 = 0x10
    unsigned long long _index;	// 24 = 0x18
    unsigned long long _playerPreloadOffset;	// 32 = 0x20
    NSOperationQueue *_imageQueue;	// 40 = 0x28
    NSMutableArray *_imageOperations;	// 48 = 0x30
    NSMutableDictionary *_prewarmedPlayers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_imageDecodingQueue;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x00600000000e4e17
- (void).cxx_destruct;	// IMP=0x00000000000e7e08
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageDecodingQueue; // @synthesize imageDecodingQueue=_imageDecodingQueue;
@property(retain, nonatomic) NSMutableDictionary *prewarmedPlayers; // @synthesize prewarmedPlayers=_prewarmedPlayers;
@property(retain, nonatomic) NSMutableArray *imageOperations; // @synthesize imageOperations=_imageOperations;
@property(retain, nonatomic) NSOperationQueue *imageQueue; // @synthesize imageQueue=_imageQueue;
@property(nonatomic, getter=isPreloadPlaybackEnabled) _Bool preloadPlaybackEnabled; // @synthesize preloadPlaybackEnabled=_preloadPlaybackEnabled;
@property(nonatomic) unsigned long long playerPreloadOffset; // @synthesize playerPreloadOffset=_playerPreloadOffset;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSArray *mediaInfos; // @synthesize mediaInfos=_mediaInfos;
- (_Bool)mediaInfoContainsPlayerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e7c92
- (_Bool)mediaInfoContainsImageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e7bb4
- (id)loadPlayerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e78ea
- (void)removePopulatedMediaItems:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000e77fb
- (void)populatePlaylistWithMediaItems:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000e7565
- (void)loadImageAtIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6fd1
- (id)_createPlayerWithPlaylist:(id)arg1 isForPrewarming:(_Bool)arg2;	// IMP=0x00000000000e6efa
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e6d33
- (void)appendMediaInfos:(id)arg1;	// IMP=0x00000000000e6c04
- (void)setMediaInfo:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000e6973
- (id)_identifierForPlaylist:(id)arg1 isForPrewarming:(_Bool)arg2;	// IMP=0x00000000000e6478
- (void)_removePrewarmedPlayerForIdentifier:(id)arg1;	// IMP=0x00000000000e632d
- (id)_prewarmIndices;	// IMP=0x00000000000e60ce
- (void)_updatePrewarmedPlayers;	// IMP=0x00000000000e56a7
- (long long)queuePriorityForIndex:(long long)arg1 itemCount:(long long)arg2 selectedIndex:(long long)arg3;	// IMP=0x00000000000e5649
- (void)_updateImageOperationPriorities;	// IMP=0x00000000000e5535
- (void)_populateQueueWithMediaInfos:(id)arg1;	// IMP=0x00000000000e5261
- (void)dealloc;	// IMP=0x00000000000e51d8
- (void)preloadPlayback;	// IMP=0x00000000000e51c6
- (void)clearPreloadedPlayback;	// IMP=0x00000000000e4ff8
- (id)initWithMediaInfos:(id)arg1;	// IMP=0x00000000000e4e80
- (id)init;	// IMP=0x00000000000e4e67

@end

