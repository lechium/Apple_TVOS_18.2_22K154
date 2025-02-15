//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol TVPPlayback, TVPPlaybackImageLoader, TVPScrubImageLoaderDelegate;

__attribute__((visibility("hidden")))
@interface TVPScrubImageLoader : NSObject
{
    _Bool _imagesAvailable;	// 8 = 0x8
    id <TVPScrubImageLoaderDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPPlayback> *_player;	// 24 = 0x18
    id <TVPPlaybackImageLoader> _stillImageLoader;	// 32 = 0x20
    NSMutableDictionary *_imageInfoCache;	// 40 = 0x28
    NSMutableArray *_imageInfosBeingLoaded;	// 48 = 0x30
    NSMutableArray *_loadedImageInfos;	// 56 = 0x38
    double _priorityImageTime;	// 64 = 0x40
    struct CGSize _maxImageSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000025b00
@property(nonatomic) double priorityImageTime; // @synthesize priorityImageTime=_priorityImageTime;
@property(retain, nonatomic) NSMutableArray *loadedImageInfos; // @synthesize loadedImageInfos=_loadedImageInfos;
@property(retain, nonatomic) NSMutableArray *imageInfosBeingLoaded; // @synthesize imageInfosBeingLoaded=_imageInfosBeingLoaded;
@property(retain, nonatomic) NSMutableDictionary *imageInfoCache; // @synthesize imageInfoCache=_imageInfoCache;
@property(retain, nonatomic) id <TVPPlaybackImageLoader> stillImageLoader; // @synthesize stillImageLoader=_stillImageLoader;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
@property(retain, nonatomic) NSObject<TVPPlayback> *player; // @synthesize player=_player;
@property(nonatomic) _Bool imagesAvailable; // @synthesize imagesAvailable=_imagesAvailable;
@property(nonatomic) __weak id <TVPScrubImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (double)_timeAfterInsertingInterstitials:(double)arg1;	// IMP=0x0000000000025960
- (double)_timeAfterRemovingInterstitials:(double)arg1;	// IMP=0x00000000000258ac
- (id)_closestLoadedImageInfoForTime:(double)arg1;	// IMP=0x0000000000025552
- (void)_saveLoadedImageInfo:(id)arg1;	// IMP=0x000000000002534a
- (id)_imageLoadInfoIfNeededForTime:(double)arg1;	// IMP=0x000000000002523b
- (id)_imageInfosNeededWithStride:(double)arg1;	// IMP=0x0000000000025052
- (id)_progressiveImageLoadInfosNeeded;	// IMP=0x0000000000024f52
- (void)_loadImages;	// IMP=0x00000000000242e2
- (void)_reset;	// IMP=0x000000000002416f
- (void)_playerCurrentMediaItemMetadataDidChange:(id)arg1;	// IMP=0x0000000000024020
- (id)closestImageForTime:(double)arg1 imageTime:(double *)arg2;	// IMP=0x0000000000023d4d
- (void)prioritizeLoadingOfImageAtTime:(double)arg1;	// IMP=0x0000000000023d12
- (void)loadImages;	// IMP=0x0000000000023d00
- (void)dealloc;	// IMP=0x0000000000023c7d
- (id)initWithPlayer:(id)arg1 maxImageSize:(struct CGSize)arg2;	// IMP=0x0000000000023b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

