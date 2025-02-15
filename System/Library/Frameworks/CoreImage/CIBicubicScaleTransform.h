//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBicubicScaleTransform : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputAspectRatio;	// 88 = 0x58
    NSNumber *inputB;	// 96 = 0x60
    NSNumber *inputC;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00600000001f79b8
@property(retain, nonatomic) NSNumber *inputC; // @synthesize inputC;
@property(retain, nonatomic) NSNumber *inputB; // @synthesize inputB;
@property(retain, nonatomic) NSNumber *inputAspectRatio; // @synthesize inputAspectRatio;
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001f7fd5
- (_Bool)_isIdentity;	// IMP=0x00000000001f7e7e
- (struct vec2)_scale;	// IMP=0x00000000001f7e09

@end

