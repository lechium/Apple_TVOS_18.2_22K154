//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GLKMeshBufferAllocator, NSMutableOrderedSet, NSString;
@protocol MDLMeshBufferAllocator;

__attribute__((visibility("hidden")))
@interface GLKMeshBufferZone : NSObject
{
    NSMutableOrderedSet *_buffers;	// 8 = 0x8
    _Bool _destroyInvoked;	// 16 = 0x10
    GLKMeshBufferAllocator *_allocator;	// 24 = 0x18
    unsigned int _glBufferName;	// 32 = 0x20
    unsigned long long _capacity;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000007f73
@property(readonly, nonatomic) unsigned int glBufferName; // @synthesize glBufferName=_glBufferName;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) id <MDLMeshBufferAllocator> allocator; // @synthesize allocator=_allocator;
- (void)dealloc;	// IMP=0x0000000000007f17
- (void)destroyBuffer:(id)arg1;	// IMP=0x0000000000007de8
- (id)newBufferWithLength:(unsigned long long)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000007ae5
- (id)initWithCapacity:(unsigned long long)arg1 allocator:(id)arg2;	// IMP=0x0000000000007a20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

