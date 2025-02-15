//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetExportSessionInternal : NSObject
{
    struct OpaqueFigAssetExportSession *figExportSession;	// 8 = 0x8
    AVAsset *asset;	// 16 = 0x10
    AVAudioMix *audioMix;	// 24 = 0x18
    unsigned long long audioTrackGroupHandling;	// 32 = 0x20
    void *figVideoCompositor;	// 40 = 0x28
    AVCustomVideoCompositorSession *customVideoCompositorSession;	// 48 = 0x30
    AVVideoComposition *videoComposition;	// 56 = 0x38
    NSArray *metadata;	// 64 = 0x40
    AVMetadataItemFilter *metadataItemFilter;	// 72 = 0x48
    CDUnknownBlockType handler;	// 80 = 0x50
}

@end

