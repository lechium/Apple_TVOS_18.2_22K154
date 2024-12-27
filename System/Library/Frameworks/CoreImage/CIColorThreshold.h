//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorThreshold : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputThreshold;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000006438c
@property(retain, nonatomic) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000064560

@end

