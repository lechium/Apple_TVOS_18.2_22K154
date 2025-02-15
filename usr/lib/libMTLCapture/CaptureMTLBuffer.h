//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLBuffer, MTLBufferSPI><MTLResourceSPI, MTLDevice, MTLHeap;

@interface CaptureMTLBuffer : NSObject
{
    id <MTLBufferSPI><MTLResourceSPI> _baseObject;	// 8 = 0x8
    id <MTLDevice> _captureDevice;	// 16 = 0x10
    id <MTLHeap> _captureHeap;	// 24 = 0x18
    id <MTLBuffer> _captureRemoteStorageBuffer;	// 32 = 0x20
    struct GTTraceContext *_traceContext;	// 40 = 0x28
    struct GTTraceStream *_traceStream;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000031ecb
- (id)_quicklookData;	// IMP=0x0000000000031eba
- (void)waitUntilComplete;	// IMP=0x0000000000031ea4
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x0000000000031da6
- (void)removeAllDebugMarkers;	// IMP=0x0000000000031d90
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;	// IMP=0x0000000000031b5c
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;	// IMP=0x000000000003190e
- (void)makeAliasable;	// IMP=0x0000000000031807
- (_Bool)isPurgeable;	// IMP=0x0000000000031717
- (_Bool)isComplete;	// IMP=0x0000000000031701
- (_Bool)isAliasable;	// IMP=0x0000000000031611
- (_Bool)doesAliasResource:(id)arg1;	// IMP=0x00000000000315bc
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003150f
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000031462
- (void)didModifyRange:(struct _NSRange)arg1;	// IMP=0x000000000003132d
- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000003118d
- (struct __IOSurface *)_aneIOSurface;	// IMP=0x0000000000031177
@property(readonly) unsigned long long unfilteredResourceOptions;
@property(readonly) unsigned long long storageMode;
@property int responsibleProcess;
@property(readonly) unsigned long long resourceOptions;
@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(nonatomic) unsigned long long parentGPUSize;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long parentGPUAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly) unsigned long long length;
@property(copy) NSString *label;
@property(readonly) struct __IOSurface *iosurface;
@property(readonly) unsigned long long heapOffset;
@property(readonly) unsigned long long hazardTrackingMode;
@property(readonly) unsigned long long gpuAddress;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
@property(readonly) unsigned long long allocationID;
@property(readonly) unsigned long long allocatedSize;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000030d22
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000030d11
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000030c50
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000030bf0
- (id)originalObject;	// IMP=0x0000000000030be2
- (void *)contents;	// IMP=0x0000000000030b93
@property(readonly) id <MTLHeap> heap;
@property(readonly) id <MTLBuffer> baseObject;
- (void)dealloc;	// IMP=0x0000000000030a28
- (id)initWithBaseObject:(id)arg1 captureBuffer:(id)arg2;	// IMP=0x000000000003091f
- (id)initWithBaseObject:(id)arg1 captureHeap:(id)arg2;	// IMP=0x00000000000307f3
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x0000000000030715

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long protectionOptions;
@property(readonly) Class superclass;

@end

