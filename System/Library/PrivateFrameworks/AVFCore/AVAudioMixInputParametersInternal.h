//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMutableScheduledAudioParameters, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVAudioMixInputParametersInternal : NSObject
{
    int trackID;	// 8 = 0x8
    AVMutableScheduledAudioParameters *scheduledAudioParameters;	// 16 = 0x10
    NSString *audioTimePitchAlgorithm;	// 24 = 0x18
    struct opaqueMTAudioProcessingTap *tap;	// 32 = 0x20
    NSMutableArray *effects;	// 40 = 0x28
}

@end

