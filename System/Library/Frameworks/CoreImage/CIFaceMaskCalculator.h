//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceMaskCalculator : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputFacesLeftEyeX;	// 80 = 0x50
    CIVector *inputFacesLeftEyeY;	// 88 = 0x58
    CIVector *inputFacesCenterX;	// 96 = 0x60
    CIVector *inputFacesCenterY;	// 104 = 0x68
    CIVector *inputFacesRightEyeX;	// 112 = 0x70
    CIVector *inputFacesRightEyeY;	// 120 = 0x78
    CIVector *inputFacesChinX;	// 128 = 0x80
    CIVector *inputFacesChinY;	// 136 = 0x88
    NSNumber *inputMaxBlur;	// 144 = 0x90
    NSNumber *inputFacesCapMultip;	// 152 = 0x98
    NSNumber *inputFacesMaxBlurOnEyes;	// 160 = 0xa0
    NSNumber *inputFacesMaxBlurDistFromFocus;	// 168 = 0xa8
    NSNumber *inputFacesLinearBlurGrowthM;	// 176 = 0xb0
    NSNumber *inputFacesLinearBlurGrowthC;	// 184 = 0xb8
    NSNumber *inputFacesEyeToEyebrowRatio;	// 192 = 0xc0
    NSNumber *inputFacesDistToBlurScaling;	// 200 = 0xc8
    NSNumber *inputFacesGainMultip;	// 208 = 0xd0
    NSNumber *inputApertureScaling;	// 216 = 0xd8
    NSDictionary *inputTuningParameters;	// 224 = 0xe0
}

@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(copy, nonatomic) NSNumber *inputFacesGainMultip; // @synthesize inputFacesGainMultip;
@property(copy, nonatomic) NSNumber *inputFacesDistToBlurScaling; // @synthesize inputFacesDistToBlurScaling;
@property(copy, nonatomic) NSNumber *inputFacesEyeToEyebrowRatio; // @synthesize inputFacesEyeToEyebrowRatio;
@property(copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthC; // @synthesize inputFacesLinearBlurGrowthC;
@property(copy, nonatomic) NSNumber *inputFacesLinearBlurGrowthM; // @synthesize inputFacesLinearBlurGrowthM;
@property(copy, nonatomic) NSNumber *inputFacesMaxBlurDistFromFocus; // @synthesize inputFacesMaxBlurDistFromFocus;
@property(copy, nonatomic) NSNumber *inputFacesMaxBlurOnEyes; // @synthesize inputFacesMaxBlurOnEyes;
@property(copy, nonatomic) NSNumber *inputFacesCapMultip; // @synthesize inputFacesCapMultip;
@property(copy, nonatomic) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain, nonatomic) CIVector *inputFacesChinY; // @synthesize inputFacesChinY;
@property(retain, nonatomic) CIVector *inputFacesChinX; // @synthesize inputFacesChinX;
@property(retain, nonatomic) CIVector *inputFacesCenterY; // @synthesize inputFacesCenterY;
@property(retain, nonatomic) CIVector *inputFacesCenterX; // @synthesize inputFacesCenterX;
@property(retain, nonatomic) CIVector *inputFacesRightEyeY; // @synthesize inputFacesRightEyeY;
@property(retain, nonatomic) CIVector *inputFacesRightEyeX; // @synthesize inputFacesRightEyeX;
@property(retain, nonatomic) CIVector *inputFacesLeftEyeY; // @synthesize inputFacesLeftEyeY;
@property(retain, nonatomic) CIVector *inputFacesLeftEyeX; // @synthesize inputFacesLeftEyeX;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000c6771
- (id)outputImage_V4;	// IMP=0x00000000000c5e31
- (id)metalKernel;	// IMP=0x00000000000c5dd4
- (id)_kernel;	// IMP=0x00000000000c5db4

@end

