//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CICoreMLProcessor : CIImageProcessorKernel
{
}

+ (_Bool)allowPartialOutputRegion;	// IMP=0x0080000000086b74
+ (int)outputFormatWithArguments:(id)arg1;	// IMP=0x0080000000086b3f
+ (int)formatForInputAtIndex:(int)arg1 arguments:(id)arg2;	// IMP=0x0080000000086b0a
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000084bd7
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x0080000000084ae0
+ (id)logDescription:(id)arg1;	// IMP=0x0080000000084a42

@end

