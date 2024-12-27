//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIFaceMaskKernel : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000000c824a
+ (_Bool)synchronizeInputs;	// IMP=0x00800000000c8242
+ (int)outputFormat;	// IMP=0x00800000000c8233
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x00800000000c8224
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000c7697
+ (void)allocateBuffersIfNeeded:(id)arg1;	// IMP=0x00800000000c7617
+ (void)releaseBuffers;	// IMP=0x00800000000c75f4
+ (void)allocateBuffers:(id)arg1;	// IMP=0x00800000000c75d0
+ (_Bool)hasValidBuffers;	// IMP=0x00800000000c75bf
+ (void)compilePipelinesIfNeeded:(id)arg1;	// IMP=0x00800000000c753f
+ (void)releasePipelines;	// IMP=0x00800000000c7505
+ (void)compilePipelines:(id)arg1;	// IMP=0x00800000000c7388
+ (_Bool)hasValidPipelines;	// IMP=0x00800000000c736a

@end

