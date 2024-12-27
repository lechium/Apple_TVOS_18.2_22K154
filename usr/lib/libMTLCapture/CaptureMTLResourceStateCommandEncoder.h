//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSMutableSet, NSString;
@protocol MTLDevice, MTLResourceStateCommandEncoder, MTLResourceStateCommandEncoderSPI;

@interface CaptureMTLResourceStateCommandEncoder : NSObject
{
    id <MTLResourceStateCommandEncoderSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
    struct GTTraceMemPool *_streamPool;	// 40 = 0x28
    NSMutableSet *_retainedObjects;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000065ac8
- (void)waitForFence:(id)arg1;	// IMP=0x0000000000065957
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(CDStruct_4c83c94d)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;	// IMP=0x0000000000065797
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;	// IMP=0x0000000000065573
- (void)updateFence:(id)arg1;	// IMP=0x0000000000065402
- (void)pushDebugGroup:(id)arg1;	// IMP=0x000000000006528b
- (void)popDebugGroup;	// IMP=0x00000000000651b2
- (void)insertDebugSignpost:(id)arg1;	// IMP=0x000000000006503b
- (void)endEncoding;	// IMP=0x0000000000064f62
- (void)dealloc;	// IMP=0x0000000000064e6f
- (void)copyMappingStateFromTexture:(id)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;	// IMP=0x0000000000064c2c
@property(copy) NSString *label;
@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000064a3a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000064a29
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x0000000000064968
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x0000000000064908
- (id)originalObject;	// IMP=0x00000000000648fa
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_4c83c94d *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;	// IMP=0x00000000000646fc
@property(readonly) id <MTLResourceStateCommandEncoder> baseObject;
- (id)initWithBaseObject:(id)arg1 captureCommandBuffer:(id)arg2;	// IMP=0x000000000006458f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

