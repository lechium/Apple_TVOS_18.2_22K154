//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorControls : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSaturation;	// 80 = 0x50
    NSNumber *inputBrightness;	// 88 = 0x58
    NSNumber *inputContrast;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x0060000000059f79
@property(retain, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast;
@property(retain, nonatomic) NSNumber *inputBrightness; // @synthesize inputBrightness;
@property(retain, nonatomic) NSNumber *inputSaturation; // @synthesize inputSaturation;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000005a2f4

@end

