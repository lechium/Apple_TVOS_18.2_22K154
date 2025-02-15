//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGenerator, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSURL;
@protocol AVFrameSetDelegate;

__attribute__((visibility("hidden")))
@interface AVFrameSet : NSObject
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    _Bool _ready;	// 12 = 0xc
    _Bool _invalidated;	// 13 = 0xd
    _Bool _canAssetImageGeneratorFetchFrames;	// 14 = 0xe
    _Bool _haveSeenAssetImageGeneratorTimeout;	// 15 = 0xf
    _Bool _memoryConstrained;	// 16 = 0x10
    AVAsset *_asset;	// 24 = 0x18
    NSURL *_assetURL;	// 32 = 0x20
    double _frameInterval;	// 40 = 0x28
    CDUnknownBlockType _imageGenerator;	// 48 = 0x30
    id <AVFrameSetDelegate> _delegate;	// 56 = 0x38
    NSIndexSet *_framesOnScreenNow;	// 64 = 0x40
    NSIndexSet *_highPriorityFrames;	// 72 = 0x48
    NSMutableIndexSet *_frameSet;	// 80 = 0x50
    NSMutableIndexSet *_requestedTimes;	// 88 = 0x58
    NSMutableDictionary *_cacheImages;	// 96 = 0x60
    AVAssetImageGenerator *_assetImageGenerator;	// 104 = 0x68
    NSMutableArray *_completionBlocks;	// 112 = 0x70
    double _earliestAllowedFetchTime;	// 120 = 0x78
    struct CGSize _desiredImageSize;	// 128 = 0x80
    CDStruct_1b6d18a9 _assetDuration;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingCanFetchFrames;	// IMP=0x0060000000021c43
+ (id)imageFetchingQueue;	// IMP=0x0060000000021c13
- (void).cxx_destruct;	// IMP=0x0000000000021065
@property double earliestAllowedFetchTime; // @synthesize earliestAllowedFetchTime=_earliestAllowedFetchTime;
@property CDStruct_1b6d18a9 assetDuration; // @synthesize assetDuration=_assetDuration;
@property(retain) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(getter=isMemoryConstrained) _Bool memoryConstrained; // @synthesize memoryConstrained=_memoryConstrained;
@property _Bool haveSeenAssetImageGeneratorTimeout; // @synthesize haveSeenAssetImageGeneratorTimeout=_haveSeenAssetImageGeneratorTimeout;
@property _Bool canAssetImageGeneratorFetchFrames; // @synthesize canAssetImageGeneratorFetchFrames=_canAssetImageGeneratorFetchFrames;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain) AVAssetImageGenerator *assetImageGenerator; // @synthesize assetImageGenerator=_assetImageGenerator;
@property(retain) NSMutableDictionary *cacheImages; // @synthesize cacheImages=_cacheImages;
@property(readonly) NSMutableIndexSet *requestedTimes; // @synthesize requestedTimes=_requestedTimes;
@property(retain, nonatomic) NSMutableIndexSet *frameSet; // @synthesize frameSet=_frameSet;
@property(copy) NSIndexSet *highPriorityFrames; // @synthesize highPriorityFrames=_highPriorityFrames;
@property(readonly, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(readonly) struct CGSize desiredImageSize; // @synthesize desiredImageSize=_desiredImageSize;
@property(copy) NSIndexSet *framesOnScreenNow; // @synthesize framesOnScreenNow=_framesOnScreenNow;
@property __weak id <AVFrameSetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) CDUnknownBlockType imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(readonly) double frameInterval; // @synthesize frameInterval=_frameInterval;
@property(readonly) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly) AVAsset *asset; // @synthesize asset=_asset;
- (void)_mediaServicesReset:(id)arg1;	// IMP=0x0000000000020dd5
- (void)_handleMemoryWarning:(id)arg1;	// IMP=0x0000000000020d08
- (unsigned long long)_estimatedImageMemoryFootprint;	// IMP=0x0000000000020b87
- (void)flushAllCachedImages;	// IMP=0x0000000000020af0
- (id)imageForFrame:(long long)arg1;	// IMP=0x00000000000209b5
- (long long)availableFrameIndexForIndex:(long long)arg1;	// IMP=0x0000000000020949
- (id)frameForIndex:(long long)arg1;	// IMP=0x000000000002089f
- (id)frameForTime:(double)arg1;	// IMP=0x000000000002086e
- (struct _NSRange)_rangeFramesAffectedByLoadedFrame:(long long)arg1;	// IMP=0x00000000000207d2
- (void)_fetchNextFrame;	// IMP=0x000000000001ff43
- (void)_flushSomeLowPriorityFramesExcluding:(unsigned long long)arg1;	// IMP=0x000000000001fcb9
- (void)_callDoneBlocks;	// IMP=0x000000000001fc1a
- (void)whenDoneCallBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fb9e
- (id)_arrayOfTimesForFrames:(id)arg1;	// IMP=0x000000000001facd
- (void)_cacheImage:(id)arg1 forFrame:(long long)arg2 actualTime:(double)arg3;	// IMP=0x000000000001f9a1
- (void)requestFrameRange:(struct _NSRange)arg1;	// IMP=0x000000000001f777
- (void)requestFrameForTime:(double)arg1;	// IMP=0x000000000001f6d7
- (void)requestFrame:(long long)arg1;	// IMP=0x000000000001f652
- (id)framesRequestedAndOnScreenStoppingAfterFirst:(_Bool)arg1;	// IMP=0x000000000001f44c
- (_Bool)isRequestedTime:(double)arg1;	// IMP=0x000000000001f41b
- (void)removeRequestedTime:(double)arg1;	// IMP=0x000000000001f3ea
- (void)addRequestedTime:(double)arg1;	// IMP=0x000000000001f3b9
- (double)timeIntervalRequestedForFrameIndex:(long long)arg1;	// IMP=0x000000000001f362
- (long long)frameIndexForRequestedTime:(double)arg1;	// IMP=0x000000000001f30c
- (id)copyOfRequestedFrames;	// IMP=0x000000000001f2d2
- (_Bool)isRequestedFrameIndex:(long long)arg1;	// IMP=0x000000000001f28b
- (void)removeAllFrameRequests;	// IMP=0x000000000001f23c
- (void)removeRequestedFrameRange:(struct _NSRange)arg1;	// IMP=0x000000000001f1f5
- (void)removeRequestedFrameIndex:(long long)arg1;	// IMP=0x000000000001f1b3
- (_Bool)addRequestedFrameSet:(id)arg1;	// IMP=0x000000000001f137
- (_Bool)addRequestedFrameIndex:(long long)arg1;	// IMP=0x000000000001f0cd
- (unsigned long long)numberOfRequestedFrames;	// IMP=0x000000000001f093
@property(readonly) _Bool canFetchFrames;
- (void)flushUndisplayedFrames;	// IMP=0x000000000001ece2
- (unsigned long long)flushFramesForLowMemoryEmergency;	// IMP=0x000000000001ec0f
- (long long)numberOfFrames;	// IMP=0x000000000001eb5b
- (void)invalidate;	// IMP=0x000000000001e9ee
- (void)setReady:(_Bool)arg1;	// IMP=0x000000000001e9c0
- (id)imageFetchingQueue;	// IMP=0x000000000001e9a6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001e894
- (id)_assetImageGeneratorForAsset:(id)arg1 videoComposition:(id)arg2;	// IMP=0x000000000001e6e4
- (void)dealloc;	// IMP=0x000000000001e5fa
- (id)initWithImageGenerator:(CDUnknownBlockType)arg1 asset:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(struct CGSize)arg4;	// IMP=0x000000000001e502
- (id)initWithAsset:(id)arg1 videoComposition:(id)arg2 frameInterval:(double)arg3 maximumImageSize:(struct CGSize)arg4;	// IMP=0x000000000001e3f2
- (id)initWithAsset:(id)arg1 frameInterval:(double)arg2 maximumImageSize:(struct CGSize)arg3;	// IMP=0x000000000001e3db
- (id)init;	// IMP=0x000000000001e3aa

@end

