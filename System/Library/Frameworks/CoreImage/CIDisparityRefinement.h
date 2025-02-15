//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinement : CIFilter
{
    CIImage *inputDisparityImage;	// 72 = 0x48
    CIImage *inputImage;	// 80 = 0x50
    NSNumber *inputPropagateKernel;	// 88 = 0x58
    NSNumber *inputSmoothSigma;	// 96 = 0x60
    NSNumber *inputPropagateMinWeightSum;	// 104 = 0x68
    NSNumber *inputPropagateSigmaLuma;	// 112 = 0x70
    NSNumber *inputPropagateSigmaChma;	// 120 = 0x78
    NSNumber *inputScale;	// 128 = 0x80
    CIVector *inputOriginalSize;	// 136 = 0x88
}

+ (id)customAttributes;	// IMP=0x006000000009a547
@property(copy) CIVector *inputOriginalSize; // @synthesize inputOriginalSize;
@property(copy) NSNumber *inputScale; // @synthesize inputScale;
@property(copy) NSNumber *inputPropagateSigmaChma; // @synthesize inputPropagateSigmaChma;
@property(copy) NSNumber *inputPropagateSigmaLuma; // @synthesize inputPropagateSigmaLuma;
@property(copy) NSNumber *inputPropagateMinWeightSum; // @synthesize inputPropagateMinWeightSum;
@property(copy) NSNumber *inputSmoothSigma; // @synthesize inputSmoothSigma;
@property(copy) NSNumber *inputPropagateKernel; // @synthesize inputPropagateKernel;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
@property(retain) CIImage *inputDisparityImage; // @synthesize inputDisparityImage;
- (id)outputImage;	// IMP=0x000000000009c988
- (id)outputImageUsingMetal:(_Bool)arg1;	// IMP=0x000000000009c5b0
- (id)propagateDisparity:(id)arg1 pyramids:(id *)arg2 useMetal:(_Bool)arg3 computedPyramidLevels:(int)arg4;	// IMP=0x000000000009bcea
- (id)_combineImages;	// IMP=0x000000000009bcca
- (id)smoothDisparityImage:(id)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000009b629
- (id)generatePyramidLevel:(id)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000009b3f2
- (id)shiftmapLevelZeroWithSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000009b138
- (id)initialConversionForSize:(struct CGSize)arg1 useMetal:(_Bool)arg2;	// IMP=0x000000000009ab97
- (id)_smoothDisparity;	// IMP=0x000000000009ab77
- (id)_propagateDisparityCombined;	// IMP=0x000000000009ab1a
- (id)_propagateDisparityR1Combined;	// IMP=0x000000000009aabd
- (id)_propagateDisparityR1;	// IMP=0x000000000009aa60
- (id)_propagateDisparity;	// IMP=0x000000000009aa03
- (id)_pyramidGenerateLevel;	// IMP=0x000000000009a9e3
- (id)_initialConversionRGB;	// IMP=0x000000000009a9c3

@end

