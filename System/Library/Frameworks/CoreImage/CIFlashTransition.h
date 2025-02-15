//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFlashTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    CIVector *inputCenter;	// 88 = 0x58
    CIVector *inputExtent;	// 96 = 0x60
    CIColor *inputColor;	// 104 = 0x68
    NSNumber *inputTime;	// 112 = 0x70
    NSNumber *inputMaxStriationRadius;	// 120 = 0x78
    NSNumber *inputStriationStrength;	// 128 = 0x80
    NSNumber *inputStriationContrast;	// 136 = 0x88
    NSNumber *inputFadeThreshold;	// 144 = 0x90
}

+ (id)customAttributes;	// IMP=0x0060000000100f16
@property(retain, nonatomic) NSNumber *inputFadeThreshold; // @synthesize inputFadeThreshold;
@property(retain, nonatomic) NSNumber *inputStriationContrast; // @synthesize inputStriationContrast;
@property(retain, nonatomic) NSNumber *inputStriationStrength; // @synthesize inputStriationStrength;
@property(retain, nonatomic) NSNumber *inputMaxStriationRadius; // @synthesize inputMaxStriationRadius;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000101527
- (id)_geomKernel;	// IMP=0x0000000000101507
- (id)_colorKernel;	// IMP=0x00000000001014e7

@end

