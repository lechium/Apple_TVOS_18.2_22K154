//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack;

__attribute__((visibility("hidden")))
@interface VCPVideoTrackDecoder : NSObject
{
    AVAssetTrack *_track;	// 8 = 0x8
}

+ (CDStruct_1ef3fb1f)decodeDimensionsForTrack:(id)arg1;	// IMP=0x006000000021daa2
- (void).cxx_destruct;	// IMP=0x000000000021e334
- (struct opaqueCMSampleBuffer *)getNextCaptureSampleBuffer;	// IMP=0x000000000021e2f3
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;	// IMP=0x000000000021e2b2
- (long long)status;	// IMP=0x000000000021e271
- (_Bool)validateDecodedFrame:(struct __CVBuffer *)arg1 withSettings:(id)arg2;	// IMP=0x000000000021e08c
- (id)settings;	// IMP=0x000000000021de99
- (id)initWithTrack:(id)arg1;	// IMP=0x000000000021dc3e
- (id)init;	// IMP=0x000000000021dc30

@end

