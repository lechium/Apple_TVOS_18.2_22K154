//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIMorphologyProcessor : CIImageProcessorKernel
{
}

+ (id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3 doMin:(_Bool)arg4;	// IMP=0x0080000000176b51
+ (_Bool)allowSRGBTranferFuntionOnOutput;	// IMP=0x0080000000176b49
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;	// IMP=0x0080000000176b41
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x0080000000176b39
+ (_Bool)allowCompressedInputsAndOutputs;	// IMP=0x0080000000176b31
+ (_Bool)canReduceOutputChannels;	// IMP=0x0080000000176b29
+ (int)outputFormat;	// IMP=0x0080000000176b21
+ (_Bool)synchronizeInputs;	// IMP=0x0080000000176b19
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000017669a
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x00800000001765df
+ (id)logDescription:(id)arg1;	// IMP=0x0080000000176531

@end

