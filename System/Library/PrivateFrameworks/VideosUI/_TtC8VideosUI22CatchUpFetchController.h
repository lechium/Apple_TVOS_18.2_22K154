//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI22CatchUpFetchController
{
    MISSING_TYPE *clipItems;	// 8 = 0x8
    MISSING_TYPE *mediaInfo;	// 16 = 0x10
    MISSING_TYPE *selectedAudioOption;	// 24 = 0x18
    MISSING_TYPE *prewarmPlayer;	// 32 = 0x20
    MISSING_TYPE *imageOperationQueue;	// 40 = 0x28
    MISSING_TYPE *operations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000004ed8ca
- (id)init;	// IMP=0x00000000004eee76
- (id)initWithMediaInfos:(id)arg1;	// IMP=0x00000000004eee26
- (id)loadPlayerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004ee8ac
- (_Bool)mediaInfoContainsPlayerAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004ee22c
- (_Bool)mediaInfoContainsImageAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004ee1bc
- (void)loadImageAtIndex:(unsigned long long)arg1 completion:(void (^)(VUIImage *, NSError *, _Bool))arg2;	// IMP=0x00000000004edf7c
- (void)appendMediaInfos:(id)arg1;	// IMP=0x00000000004edb46
- (void)dealloc;	// IMP=0x00000000004ed8ad
@property(nonatomic, copy) NSArray *mediaInfos;

@end

