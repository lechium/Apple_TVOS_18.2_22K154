//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents29SetPlaybackSpeedIntentHandler : NSObject
{
    MISSING_TYPE *playbackController;	// 8 = 0x8
    MISSING_TYPE *deviceSelector;	// 48 = 0x30
    MISSING_TYPE *aceServiceHelper;	// 56 = 0x38
    MISSING_TYPE *deviceState;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000756ba
- (void)resolveDevicesForSetPlaybackSpeed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000749a4
- (void)resolvePlaybackSpeedTypeForSetPlaybackSpeed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000737c6
- (void)resolveSpeedMagnitudeForSetPlaybackSpeed:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007337a
- (void)confirmSetPlaybackSpeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000007279d
- (void)handleSetPlaybackSpeed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000726f2
- (id)init;	// IMP=0x0000000000071b4f

@end

