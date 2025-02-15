//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLTextureLayout;

@interface CaptureMTLTextureLayout : NSObject
{
    id <MTLTextureLayout> _baseObject;	// 8 = 0x8
    struct GTTraceContext *_traceContext;	// 16 = 0x10
    struct GTTraceStream *_traceStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d224c
- (void)initializeTextureMemory:(void *)arg1;	// IMP=0x00000000000d2236
- (void)finalizeTextureMemory:(void *)arg1;	// IMP=0x00000000000d2220
- (void)dealloc;	// IMP=0x00000000000d212d
- (void)copyFromTextureMemory:(const void *)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(CDStruct_4c83c94d)arg4 toLinearBytes:(void *)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;	// IMP=0x00000000000d2117
- (void)copyFromLinearBytes:(const void *)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void *)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(CDStruct_4c83c94d)arg8;	// IMP=0x00000000000d2101
@property(readonly) CDStruct_492b6082 watermark;
@property(readonly) unsigned long long size;
@property(readonly) CDStruct_14f26992 copyGranularity;
@property(readonly) unsigned long long alignment;
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000000d202d
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000000d201c
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000d1f5b
@property(readonly) unsigned long long streamReference;
@property(readonly) struct GTTraceStream *traceStream;
@property(readonly) struct GTTraceContext *traceContext;
- (void)touch;	// IMP=0x00000000000d1efb
- (id)originalObject;	// IMP=0x00000000000d1eed
@property(readonly) id <MTLTextureLayout> baseObject;
- (id)initWithBaseObject:(id)arg1 captureContext:(struct GTTraceContext *)arg2;	// IMP=0x00000000000d1e3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

