//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIClamp : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputExtent;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x0060000000018238
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000001832b

@end

