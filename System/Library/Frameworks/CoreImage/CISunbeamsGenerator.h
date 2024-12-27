//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISunbeamsGenerator : CIFilter
{
    CIVector *inputCenter;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputSunRadius;	// 88 = 0x58
    NSNumber *inputMaxStriationRadius;	// 96 = 0x60
    NSNumber *inputStriationStrength;	// 104 = 0x68
    NSNumber *inputStriationContrast;	// 112 = 0x70
    NSNumber *inputTime;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x0060000000203375
- (id)outputImage;	// IMP=0x0000000000202f38
- (id)_CISunbeams;	// IMP=0x0000000000202f18

@end

