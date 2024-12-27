//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CICrop : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputRectangle;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x001000000008848a
@property(retain, nonatomic) CIVector *inputRectangle; // @synthesize inputRectangle;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x0000000000088814
- (id)_outputProperties;	// IMP=0x00000000000886e6
- (id)outputImage;	// IMP=0x0000000000088659

@end

