//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC17SiriAudioInternal24INPlayMediaIntentHandler : NSObject
{
    MISSING_TYPE *playbackService;	// 8 = 0x8
    MISSING_TYPE *localSearch;	// 16 = 0x10
    MISSING_TYPE *deviceProvider;	// 56 = 0x38
    MISSING_TYPE *nowPlaying;	// 96 = 0x60
    MISSING_TYPE *seDeviceProvider;	// 136 = 0x88
    MISSING_TYPE *appleMediaServicesProvider;	// 176 = 0xb0
    MISSING_TYPE *featureFlagProvider;	// 216 = 0xd8
    MISSING_TYPE *nearDeviceProvider;	// 256 = 0x100
    MISSING_TYPE *accountProvider;	// 296 = 0x128
    MISSING_TYPE *siriKitTaskLoggingProvider;	// 336 = 0x150
    MISSING_TYPE *onscreenEntityProvider;	// 376 = 0x178
}

- (void).cxx_destruct;	// IMP=0x000000000003b710
- (void)handlePlayMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037fe0
- (void)resolveMediaItemsForPlayMedia:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000358c0
- (id)init;	// IMP=0x000000000002e280

@end

