//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVibrance : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputAmount;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x001000000020ff3c
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x0000000000210574
- (id)_outputProperties;	// IMP=0x000000000021045c
- (id)outputImage;	// IMP=0x00000000002101b0
- (id)_kernelPos;	// IMP=0x0000000000210190
- (id)_kernelNeg;	// IMP=0x0000000000210170
- (_Bool)_isIdentity;	// IMP=0x000000000021013b

@end

