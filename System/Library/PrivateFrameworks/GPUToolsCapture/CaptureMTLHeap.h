//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLHeapSPI;

@interface CaptureMTLHeap : NSObject
{
    id <MTLHeapSPI> _baseObject;	// 8 = 0x8
    id <MTLBuffer> _backbuffer;	// 16 = 0x10
    CaptureMTLDevice *_captureDevice;	// 24 = 0x18
    struct GTTraceContext *_traceContext;	// 32 = 0x20
    struct GTTraceStream *_traceStream;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004fea8
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;	// IMP=0x000000000004fdaa
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004faf9
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000004f875
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;	// IMP=0x000000000004f661
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000004f474
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x000000000004f287
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;	// IMP=0x000000000004f073
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004ee71
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;	// IMP=0x000000000004ec8f
- (id)newAccelerationStructureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004ea43
- (id)newAccelerationStructureWithDescriptor:(id)arg1;	// IMP=0x000000000004e814
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;	// IMP=0x000000000004e716
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000004e700
- (unsigned long long)unfilteredResourceOptions;	// IMP=0x000000000004e6ea
@property(readonly) long long type;
@property(readonly) unsigned long long storageMode;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long resourceOptions;
- (unsigned long long)protectionOptions;	// IMP=0x000000000004e67c
@property(copy) NSString *label;
@property(readonly) unsigned long long hazardTrackingMode;
- (unsigned long long)gpuAddress;	// IMP=0x000000000004e4c3
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long cpuCacheMode;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000004e448
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000004e437
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000004e376
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000004e316
- (id)originalObject;	// IMP=0x000000000004e308
- (void)dealloc;	// IMP=0x000000000004e201
@property(readonly) unsigned long long allocatedSize;
@property(readonly) unsigned long long currentAllocatedSize;
@property(readonly) unsigned long long usedSize;
@property(readonly) id <MTLBuffer> backbuffer;
@property(readonly) id <MTLHeap> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x000000000004def7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

