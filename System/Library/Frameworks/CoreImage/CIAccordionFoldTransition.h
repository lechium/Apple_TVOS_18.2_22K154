//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAccordionFoldTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    NSNumber *inputBottomHeight;	// 88 = 0x58
    NSNumber *inputNumberOfFolds;	// 96 = 0x60
    NSNumber *inputFoldShadowAmount;	// 104 = 0x68
    NSNumber *inputTime;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x0060000000015350
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) NSNumber *inputFoldShadowAmount; // @synthesize inputFoldShadowAmount;
@property(retain, nonatomic) NSNumber *inputNumberOfFolds; // @synthesize inputNumberOfFolds;
@property(retain, nonatomic) NSNumber *inputBottomHeight; // @synthesize inputBottomHeight;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000001575f
- (id)_kernel;	// IMP=0x000000000001573f
- (id)_kernelMix;	// IMP=0x000000000001571f
- (id)_kernelWarpT;	// IMP=0x00000000000156ff
- (id)_kernelWarpS;	// IMP=0x00000000000156df

@end

