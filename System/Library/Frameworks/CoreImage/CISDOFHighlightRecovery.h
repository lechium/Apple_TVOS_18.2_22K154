//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISDOFHighlightRecovery : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputApertureScaling;	// 88 = 0x58
    NSNumber *inputIterations;	// 96 = 0x60
    NSNumber *inputMaxBlur;	// 104 = 0x68
    CIVector *inputBlurRadius;	// 112 = 0x70
    CIVector *inputMaxIntensity;	// 120 = 0x78
    CIVector *inputMinIntensity;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x00600000001a50b2
@property(retain) CIVector *inputMinIntensity; // @synthesize inputMinIntensity;
@property(retain) CIVector *inputMaxIntensity; // @synthesize inputMaxIntensity;
@property(retain) CIVector *inputBlurRadius; // @synthesize inputBlurRadius;
@property(retain) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain) NSNumber *inputIterations; // @synthesize inputIterations;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001a55d0

@end

