//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMTLBuffer;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMeshElement : NSObject
{
    unsigned long long _primitiveType;	// 8 = 0x8
    long long _indexCount;	// 16 = 0x10
    unsigned long long _instanceCount;	// 24 = 0x18
    long long _sharedIndexBufferOffset;	// 32 = 0x20
    SCNMTLBuffer *_indexBuffer;	// 40 = 0x28
    id <MTLBuffer> _drawIndexedPrimitivesIndirectBuffer;	// 48 = 0x30
    unsigned long long _indexType;	// 56 = 0x38
    long long _effectiveIndexOffset;	// 64 = 0x40
    long long _effectiveIndexCount;	// 72 = 0x48
    long long _drawIndexedPrimitivesIndirectBufferOffset;	// 80 = 0x50
}

- (id)description;	// IMP=0x00000000001282c1
- (void)dealloc;	// IMP=0x000000000012823b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001281ca

@end

