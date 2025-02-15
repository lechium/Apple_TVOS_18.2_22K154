//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC3VFX23VFXSceneLightParameters : NSObject
{
    MISSING_TYPE *type;	// 8 = 0x8
    MISSING_TYPE *intensity;	// 16 = 0x10
    MISSING_TYPE *color;	// 32 = 0x20
    MISSING_TYPE *orientation;	// 64 = 0x40
    MISSING_TYPE *position;	// 96 = 0x60
    MISSING_TYPE *attenuationRadius;	// 116 = 0x74
    MISSING_TYPE *zNear;	// 124 = 0x7c
    MISSING_TYPE *zFar;	// 132 = 0x84
    MISSING_TYPE *orthoScale;	// 140 = 0x8c
    MISSING_TYPE *outerAngle;	// 148 = 0x94
    MISSING_TYPE *innerAngle;	// 156 = 0x9c
    MISSING_TYPE *extents;	// 168 = 0xa8
    MISSING_TYPE *doubleSided;	// 177 = 0xb1
    MISSING_TYPE *url;	// 548480 = 0x85e80
    MISSING_TYPE *texture;	// 12717760 = 0xc20ec0
    MISSING_TYPE *ibl;	// 0 = 0x0
    MISSING_TYPE *textureTag;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000002c91a0
- (id)init;	// IMP=0x00000000002c9140
- (void)setIBLParametersWithTag:(id)arg1;	// IMP=0x00000000002c90b0
- (void)setIBLParametersWithEntity:(long long)arg1;	// IMP=0x00000000002c9050
- (void)setIBLParametersWithUrl:(id)arg1 texture:(id)arg2;	// IMP=0x00000000002c8f30
- (void)setAreaLightParametersWithExtents:(_Bool)arg1 doubleSided: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002c8ea0
- (void)setPointLightParametersWithZNear:(float)arg1 zFar:(float)arg2;	// IMP=0x00000000002c8e40
- (void)setSpotLightParametersWithOuterAngle:(float)arg1 innerAngle:(float)arg2 zNear:(float)arg3 zFar:(float)arg4;	// IMP=0x00000000002c8dc0
- (void)setDirectionalParametersWithScale:(float)arg1 zNear:(float)arg2 zFar:(float)arg3;	// IMP=0x00000000002c8d20
- (void)setAttenuationRadius:(float)arg1;	// IMP=0x00000000002c8cb0
- (void)setPosition: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002c8c70
- (void)setOrientation: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002c8c30
- (void)setIntensity:(float)arg1;	// IMP=0x00000000002c8bf0
- (id)initWithType:(long long)arg1 intensity:(float)arg2 color: /* Error: Ran out of types for this method. */;	// IMP=0x00000000002c8bd0
- (id)initWithType:(long long)arg1;	// IMP=0x00000000002c89c0

@end

