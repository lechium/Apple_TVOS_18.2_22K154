//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveRotate : CIFilter
{
    struct float3x3 K;	// 80 = 0x50
    struct float3x3 invK;	// 128 = 0x80
    CIImage *inputImage;	// 176 = 0xb0
    NSNumber *inputFocalLength;	// 184 = 0xb8
    NSNumber *inputPitch;	// 192 = 0xc0
    NSNumber *inputYaw;	// 200 = 0xc8
    NSNumber *inputRoll;	// 208 = 0xd0
}

+ (id)customAttributes;	// IMP=0x00600000001935de
- (id).cxx_construct;	// IMP=0x0000000000194205
@property(copy, nonatomic) NSNumber *inputRoll; // @synthesize inputRoll;
@property(copy, nonatomic) NSNumber *inputYaw; // @synthesize inputYaw;
@property(copy, nonatomic) NSNumber *inputPitch; // @synthesize inputPitch;
@property(copy, nonatomic) NSNumber *inputFocalLength; // @synthesize inputFocalLength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000193d1b
@property(readonly, nonatomic) CDStruct_d80e62f2 outputTransform;
- (void)computeCameraIntrinsics;	// IMP=0x0000000000193968

@end

