//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface _CIScreenFilter : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputAngle;	// 88 = 0x58
    NSNumber *inputWidth;	// 96 = 0x60
    NSNumber *inputSharpness;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000114bb2
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000114f18
- (id)_kernel;	// IMP=0x0000000000114f10

@end

