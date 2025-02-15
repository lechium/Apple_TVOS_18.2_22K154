//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIGenericMetalProcessor : CIImageProcessorKernel
{
}

+ (id)applyWithExtent:(struct CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x008000000010f33a
+ (_Bool)synchronizeInputs;	// IMP=0x008000000010f332
+ (_Bool)outputIsOpaque;	// IMP=0x008000000010f32a
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000010f322
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000010ef0e
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x008000000010e13e
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 className:(id)arg4 arguments:(id)arg5 error:(id *)arg6;	// IMP=0x008000000010e06a
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 arguments:(id)arg4 error:(id *)arg5;	// IMP=0x008000000010dfc3
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 scaleFactors:(id)arg4 arguments:(id)arg5 error:(id *)arg6;	// IMP=0x008000000010deef
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 insetRects:(id)arg4 arguments:(id)arg5 error:(id *)arg6;	// IMP=0x008000000010de1b
+ (id)applyWithExtent:(struct CGRect)arg1 shader:(id)arg2 inputs:(id)arg3 roiMethods:(id)arg4 insetRects:(id)arg5 scaleFactors:(id)arg6 arguments:(id)arg7 error:(id *)arg8;	// IMP=0x008000000010dd01
+ (_Bool)skipFormatChecks;	// IMP=0x008000000010dcf9
+ (id)logDescription:(id)arg1;	// IMP=0x008000000010dca5

@end

