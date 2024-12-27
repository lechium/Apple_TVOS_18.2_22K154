//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLStageInputOutputDescriptor.h"

@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor
{
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;	// 8 = 0x8
    MTLAttributeDescriptorArrayInternal *_attributeArray;	// 16 = 0x10
    unsigned long long _indexBufferIndex;	// 24 = 0x18
    unsigned long long _indexType;	// 32 = 0x20
}

+ (id)vertexDescriptor;	// IMP=0x006000000000beb8
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2 renderPipelineDescriptor:(id)arg3;	// IMP=0x000000000000c7ec
- (id)newSerializedDescriptor;	// IMP=0x000000000000c33d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c146
- (unsigned long long)hash;	// IMP=0x000000000000bffd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000bed1
- (void)reset;	// IMP=0x000000000000be05
- (id)description;	// IMP=0x000000000000bdf1
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000000b6b7
- (void)dealloc;	// IMP=0x000000000000b65f
- (void)setIndexBufferIndex:(unsigned long long)arg1;	// IMP=0x000000000000b64e
- (unsigned long long)indexBufferIndex;	// IMP=0x000000000000b63d
- (void)setIndexType:(unsigned long long)arg1;	// IMP=0x000000000000b62c
- (unsigned long long)indexType;	// IMP=0x000000000000b61b
- (id)attributes;	// IMP=0x000000000000b60a
- (id)layouts;	// IMP=0x000000000000b5f9
- (id)init;	// IMP=0x000000000000b58f

@end

