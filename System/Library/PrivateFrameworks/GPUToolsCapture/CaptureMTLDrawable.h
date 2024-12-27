//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLDrawable;

@interface CaptureMTLDrawable : NSObject
{
    id <MTLDrawable> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009e70f
- (void)addPresentScheduledHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e6f9
- (void)presentAtTime:(double)arg1;	// IMP=0x000000000009e5fa
- (void)present;	// IMP=0x000000000009e510
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000009e50a
- (id)texture;	// IMP=0x000000000009e333
- (id)layer;	// IMP=0x000000000009e31d
- (void)dealloc;	// IMP=0x000000000009e22a
@property(readonly, copy) NSString *description;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x000000000009e1bd
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000009e1ac
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000009e047
- (unsigned long long)deviceRef;	// IMP=0x000000000009dfcf
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x000000000009df6f
@property(readonly) id <MTLDrawable> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x000000000009debd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

