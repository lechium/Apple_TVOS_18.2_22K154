//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorPosterize : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputLevels;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x0060000000063e30
@property(retain, nonatomic) NSNumber *inputLevels; // @synthesize inputLevels;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000064074
- (_Bool)_isIdentity;	// IMP=0x000000000006404b
- (id)_kernel;	// IMP=0x000000000006402b

@end

