//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC15IdleCharacterUI14FrameRateTimer : NSObject
{
    MISSING_TYPE *mode;	// 8 = 0x8
    MISSING_TYPE *preferredDisplayLinkRate;	// 16 = 0x10
    MISSING_TYPE *timerObservers;	// 24 = 0x18
    MISSING_TYPE *effectiveDisplayLinkRate;	// 32 = 0x20
    MISSING_TYPE *displayLink;	// 40 = 0x28
    MISSING_TYPE *lastFrameTimestamp;	// 48 = 0x30
    MISSING_TYPE *frameCount;	// 56 = 0x38
    MISSING_TYPE *effectiveFrameCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000d1090
- (id)init;	// IMP=0x00000000000d33e0
- (void)displayLinkFiredFrom:(id)arg1;	// IMP=0x00000000000d3280
- (void)dealloc;	// IMP=0x00000000000d1070

@end

