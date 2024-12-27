//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIDisparityPreprocV3 : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputAlphaImage;	// 80 = 0x50
}

@property(retain) CIImage *inputAlphaImage; // @synthesize inputAlphaImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000217bc4
- (id)preprocKernelNoAlpha;	// IMP=0x0000000000217b67
- (id)preprocKernel;	// IMP=0x0000000000217b0a

@end

