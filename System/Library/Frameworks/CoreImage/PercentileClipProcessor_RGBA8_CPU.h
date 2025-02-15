//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface PercentileClipProcessor_RGBA8_CPU : CIImageProcessorKernel
{
}

+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000a4d9d
+ (struct CGPoint)centerInImg:(id)arg1 fromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3 offset:(struct CGPoint)arg4;	// IMP=0x00800000000a4cb2
+ (_Bool)allowPartialOutputRegion;	// IMP=0x00800000000a4caa
+ (_Bool)canReduceOutputChannels;	// IMP=0x00800000000a4ca2
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000a4c3b
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000a4c04
+ (int)outputFormat;	// IMP=0x00800000000a4bf5

@end

