//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents28SetShuffleStateIntentHandler : NSObject
{
    MISSING_TYPE *playbackController;	// 8 = 0x8
    MISSING_TYPE *deviceSelector;	// 48 = 0x30
    MISSING_TYPE *analyticsService;	// 56 = 0x38
    MISSING_TYPE *aceServiceHelper;	// 96 = 0x60
    MISSING_TYPE *deviceState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000010e524
- (void)confirmSetShuffleState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e2d6
- (void)resolveDevicesForSetShuffleState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e1f3
- (void)handleSetShuffleState:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010bd92
- (id)init;	// IMP=0x000000000010abb3

@end

