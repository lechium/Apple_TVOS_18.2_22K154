//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNNMLEnhancerEspresso : NSObject
{
    void *_plan;	// 8 = 0x8
    void *_ctx;	// 16 = 0x10
    CDStruct_2bc666a5 _net;	// 24 = 0x18
}

- (int)inferenceWithPixelBuffer:(struct __CVBuffer *)arg1 toDestinationPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x00000000000d3942
- (void)dealloc;	// IMP=0x00000000000d38c0
- (id)initWithModelFile:(id)arg1;	// IMP=0x00000000000d3685

@end

