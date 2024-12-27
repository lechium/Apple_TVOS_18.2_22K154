//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheckerboardGenerator : CIFilter
{
    CIVector *inputCenter;	// 72 = 0x48
    CIColor *inputColor0;	// 80 = 0x50
    CIColor *inputColor1;	// 88 = 0x58
    NSNumber *inputWidth;	// 96 = 0x60
    NSNumber *inputSharpness;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000055c9c
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;	// IMP=0x0000000000056029
- (id)_kernel;	// IMP=0x0000000000055c7c

@end

