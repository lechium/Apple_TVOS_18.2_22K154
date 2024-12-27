//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIParallelogramTile : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputAngle;	// 88 = 0x58
    NSNumber *inputAcuteAngle;	// 96 = 0x60
    NSNumber *inputWidth;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00600000001816aa
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001811e0

@end

