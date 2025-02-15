//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUICanonicalConfig : NSObject
{
    float _videoViewOffscreenThresholdToStopPlayback;	// 8 = 0x8
    double _playbackDelayInterval;	// 16 = 0x10
    NSString *_storeTabIdentifier;	// 24 = 0x18
    NSString *_tvShowsTabIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000137c48
@property(retain, nonatomic) NSString *tvShowsTabIdentifier; // @synthesize tvShowsTabIdentifier=_tvShowsTabIdentifier;
@property(retain, nonatomic) NSString *storeTabIdentifier; // @synthesize storeTabIdentifier=_storeTabIdentifier;
@property(nonatomic) double playbackDelayInterval; // @synthesize playbackDelayInterval=_playbackDelayInterval;
@property(nonatomic) float videoViewOffscreenThresholdToStopPlayback; // @synthesize videoViewOffscreenThresholdToStopPlayback=_videoViewOffscreenThresholdToStopPlayback;
- (id)init;	// IMP=0x0000000000137b6c

@end

