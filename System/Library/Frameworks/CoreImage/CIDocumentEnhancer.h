//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDocumentEnhancer : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputAmount;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000009f7f0
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000009f9ba

@end

