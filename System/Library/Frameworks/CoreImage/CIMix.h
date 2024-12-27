//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMix : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBackgroundImage;	// 80 = 0x50
    NSNumber *inputAmount;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000002da8a
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000002dc65
- (id)_kernel;	// IMP=0x000000000002dc45

@end

