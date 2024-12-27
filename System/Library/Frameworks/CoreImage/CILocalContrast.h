//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CILocalContrast : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputStrength;	// 80 = 0x50
    NSNumber *inputScale;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000015b608
- (id)outputImage;	// IMP=0x000000000015b86e
- (id)_kernelLocalContrast;	// IMP=0x000000000015b84e

@end

