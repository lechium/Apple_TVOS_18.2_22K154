//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGloom : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    NSNumber *inputIntensity;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000002f07e
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000002f385
- (_Bool)_isIdentity;	// IMP=0x000000000002f328
- (id)_kernel;	// IMP=0x000000000002f308

@end

