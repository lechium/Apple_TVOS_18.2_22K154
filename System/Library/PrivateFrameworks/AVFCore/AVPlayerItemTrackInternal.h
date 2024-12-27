//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVWeakReference, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToPlayerItem;	// 8 = 0x8
    struct OpaqueFigPlaybackItem *figPlaybackItem;	// 16 = 0x10
    _Bool figPlaybackItemIsReadyForInspection;	// 24 = 0x18
    AVAsset *asset;	// 32 = 0x20
    int trackID;	// 40 = 0x28
    NSString *videoFieldMode;	// 48 = 0x30
    NSDictionary *loudnessInfo;	// 56 = 0x38
    NSDictionary *videoEnhancementFilterOptions;	// 64 = 0x40
    _Bool enabled;	// 72 = 0x48
    _Bool enabledWasSet;	// 73 = 0x49
    _Bool disableColorMatching;	// 74 = 0x4a
    _Bool disableColorMatchingWasSet;	// 75 = 0x4b
    long long activeHapticChannelIndex;	// 80 = 0x50
    _Bool activeHapticChannelIndexWasSet;	// 88 = 0x58
    float hapticVolume;	// 92 = 0x5c
    _Bool hapticVolumeWasSet;	// 96 = 0x60
    _Bool mutesHaptics;	// 97 = 0x61
    _Bool mutesHapticsWasSet;	// 98 = 0x62
    NSMutableArray *sampleBufferOutputs;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *ivarAccessQueue;	// 112 = 0x70
}

@end

