//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _TVAtlasMaskFilter : CIFilter
{
    CIImage *_inputImage;	// 72 = 0x48
    CIImage *_maskImage;	// 80 = 0x50
}

+ (id)_kernel;	// IMP=0x006000000000a94b
- (void).cxx_destruct;	// IMP=0x000000000000ab80
@property(retain, nonatomic) CIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;	// IMP=0x000000000000a9b7

@end

