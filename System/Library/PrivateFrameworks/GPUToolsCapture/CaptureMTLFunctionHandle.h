//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLComputePipelineState, CaptureMTLDevice, CaptureMTLFunction, CaptureMTLRenderPipelineState, NSString;
@protocol MTLDevice, MTLFunctionHandle, MTLFunctionHandleSPI;

@interface CaptureMTLFunctionHandle : NSObject
{
    id <MTLFunctionHandleSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    CaptureMTLComputePipelineState *_computePipelineState;	// 24 = 0x18
    CaptureMTLRenderPipelineState *_renderPipelineState;	// 32 = 0x20
    CaptureMTLFunction *_captureFunction;	// 40 = 0x28
    struct GTTraceContext *_traceContext;	// 48 = 0x30
    struct GTTraceStream *_traceStream;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000cceae
- (void)dealloc;	// IMP=0x00000000000ccdbb
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000ccd64
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000ccd53
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000ccc92
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000ccc32
- (id)originalObject;	// IMP=0x00000000000ccc24
@property(readonly) NSString *name;
@property(readonly) unsigned long long functionType;
@property(readonly) id <MTLDevice> device;
@property(readonly) id <MTLFunctionHandle> baseObject;
- (id)initWithBaseObject:(id)arg1 captureRenderPipelineState:(id)arg2 captureFunction:(id)arg3;	// IMP=0x00000000000ccaac
- (id)initWithBaseObject:(id)arg1 captureComputePipelineState:(id)arg2 captureFunction:(id)arg3;	// IMP=0x00000000000cc97c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

