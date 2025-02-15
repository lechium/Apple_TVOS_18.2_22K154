//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLTextureDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor
{
    struct MTLTextureDescriptorPrivate _private;	// 8 = 0x8
}

- (_Bool)validateWithDevice:(id)arg1;	// IMP=0x00000000000dd532
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;	// IMP=0x00000000000dd522
- (_Bool)isDrawable;	// IMP=0x00000000000dd511
- (void)setIsDrawable:(_Bool)arg1;	// IMP=0x00000000000dd500
- (void)setFramebufferOnly:(_Bool)arg1;	// IMP=0x00000000000dd4ef
- (_Bool)framebufferOnly;	// IMP=0x00000000000dd4de
- (void)setColorSpaceConversionMatrix:(unsigned long long)arg1;	// IMP=0x00000000000dd4c9
- (unsigned long long)colorSpaceConversionMatrix;	// IMP=0x00000000000dd4b4
- (void)setLossyCompressionMode:(long long)arg1;	// IMP=0x00000000000dd4a2
- (long long)lossyCompressionMode;	// IMP=0x00000000000dd490
- (void)setCompressionType:(long long)arg1;	// IMP=0x00000000000dd45d
- (long long)compressionType;	// IMP=0x00000000000dd448
- (void)setCompressionFootprint:(unsigned long long)arg1;	// IMP=0x00000000000dd433
- (unsigned long long)compressionFootprint;	// IMP=0x00000000000dd41e
- (void)setCompressionMode:(unsigned long long)arg1;	// IMP=0x00000000000dd40c
- (unsigned long long)compressionMode;	// IMP=0x00000000000dd3fa
- (_Bool)writeSwizzleEnabled;	// IMP=0x00000000000dd3e9
- (void)setWriteSwizzleEnabled:(_Bool)arg1;	// IMP=0x00000000000dd3d8
- (unsigned int)swizzleKey;	// IMP=0x00000000000dd3c7
- (void)setSwizzleKey:(unsigned int)arg1;	// IMP=0x00000000000dd3b6
- (CDStruct_a06f635e)swizzle;	// IMP=0x00000000000dd3a5
- (void)setSwizzle:(CDStruct_a06f635e)arg1;	// IMP=0x00000000000dd394
- (void)setRotation:(unsigned long long)arg1;	// IMP=0x00000000000dd382
- (unsigned long long)rotation;	// IMP=0x00000000000dd370
- (void)setTextureUsage:(unsigned long long)arg1;	// IMP=0x00000000000dd35e
- (unsigned long long)textureUsage;	// IMP=0x00000000000dd34c
- (void)setUsage:(unsigned long long)arg1;	// IMP=0x00000000000dd33a
- (unsigned long long)usage;	// IMP=0x00000000000dd328
- (void)setHazardTrackingMode:(unsigned long long)arg1;	// IMP=0x00000000000dd303
- (unsigned long long)hazardTrackingMode;	// IMP=0x00000000000dd2ec
- (void)setResourceOptions:(unsigned long long)arg1;	// IMP=0x00000000000dd280
- (unsigned long long)resourceOptions;	// IMP=0x00000000000dd26e
- (void)setStorageMode:(unsigned long long)arg1;	// IMP=0x00000000000dd23e
- (unsigned long long)storageMode;	// IMP=0x00000000000dd227
- (void)setProtectionOptions:(unsigned long long)arg1;	// IMP=0x00000000000dd212
- (unsigned long long)protectionOptions;	// IMP=0x00000000000dd1fd
- (void)setCpuCacheMode:(unsigned long long)arg1;	// IMP=0x00000000000dd1d7
- (unsigned long long)cpuCacheMode;	// IMP=0x00000000000dd1c2
- (void)setResourceIndex:(unsigned long long)arg1;	// IMP=0x00000000000dd1ad
- (unsigned long long)resourceIndex;	// IMP=0x00000000000dd198
- (void)setForceResourceIndex:(_Bool)arg1;	// IMP=0x00000000000dd184
- (_Bool)forceResourceIndex;	// IMP=0x00000000000dd170
- (void)setAllowGPUOptimizedContents:(_Bool)arg1;	// IMP=0x00000000000dd15c
- (_Bool)allowGPUOptimizedContents;	// IMP=0x00000000000dd148
- (void)setSparseSurfaceDefaultValue:(unsigned long long)arg1;	// IMP=0x00000000000dd136
- (unsigned long long)sparseSurfaceDefaultValue;	// IMP=0x00000000000dd124
- (void)setArrayLength:(unsigned long long)arg1;	// IMP=0x00000000000dd112
- (unsigned long long)arrayLength;	// IMP=0x00000000000dd100
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x00000000000dd0ee
- (unsigned long long)sampleCount;	// IMP=0x00000000000dd0dc
- (void)setMipmapLevelCount:(unsigned long long)arg1;	// IMP=0x00000000000dd0ca
- (unsigned long long)mipmapLevelCount;	// IMP=0x00000000000dd0b8
- (void)setDepth:(unsigned long long)arg1;	// IMP=0x00000000000dd0a6
- (unsigned long long)depth;	// IMP=0x00000000000dd094
- (void)setHeight:(unsigned long long)arg1;	// IMP=0x00000000000dd082
- (unsigned long long)height;	// IMP=0x00000000000dd070
- (void)setWidth:(unsigned long long)arg1;	// IMP=0x00000000000dd05e
- (unsigned long long)width;	// IMP=0x00000000000dd04c
- (void)setPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000dd026
- (unsigned long long)pixelFormat;	// IMP=0x00000000000dd014
- (void)setTextureType:(unsigned long long)arg1;	// IMP=0x00000000000dd003
- (unsigned long long)textureType;	// IMP=0x00000000000dcff2
- (id)description;	// IMP=0x00000000000dcfde
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000dcaa0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dca34
- (unsigned long long)hash;	// IMP=0x00000000000dca1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc9bd
- (id)init;	// IMP=0x00000000000dc8c7

@end

