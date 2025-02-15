//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CaptureMTLDevice, NSString;
@protocol MTLDevice, MTLSamplerState, MTLSamplerStateSPI;

@interface CaptureMTLSamplerState : NSObject
{
    id <MTLSamplerStateSPI> _baseObject;	// 8 = 0x8
    CaptureMTLDevice *_captureDevice;	// 16 = 0x10
    struct GTTraceContext *_traceContext;	// 24 = 0x18
    struct GTTraceStream *_traceStream;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c90a7
- (id)_quicklookData;	// IMP=0x00000000000c9096
- (void)dealloc;	// IMP=0x00000000000c8fa3
@property(readonly) unsigned long long uniqueIdentifier;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

@property(readonly, nonatomic) unsigned long long resourceIndex;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long pixelFormat;
@property(readonly) NSString *label;
@property(readonly) struct MTLResourceID gpuResourceID;
@property(readonly) unsigned long long gpuHandle;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

@property(readonly, nonatomic) unsigned long long gpuAddress;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly) id <MTLDevice> device;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000c8ea4
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000c8e93
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000c8dd2
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000c8d72
- (id)originalObject;	// IMP=0x00000000000c8d64
@property(readonly) id <MTLSamplerState> baseObject;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;	// IMP=0x00000000000c8c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

