//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLVertexDescriptor, NSArray;
@protocol MTLFunction, MTLRenderPipelineState;

@interface VFXMTLRenderPipeline : NSObject
{
    CDStruct_21854d8c _worldBuffer;	// 8 = 0x8
    struct __CFXWorld *_owner;	// 16 = 0x10
    struct __CFXFXProgram *_program;	// 24 = 0x18
    CDStruct_8f3d16ac _renderPassDesc;	// 32 = 0x20
    unsigned int _buffersUsageMask[2];	// 120 = 0x78
    unsigned int _texturesUsageMask[2];	// 128 = 0x80
    unsigned int _samplersUsageMask[2];	// 136 = 0x88
    id <MTLRenderPipelineState> _state;	// 144 = 0x90
    MTLVertexDescriptor *_vertexDescriptor;	// 152 = 0x98
    id <MTLFunction> _vertexFunction;	// 160 = 0xa0
    id <MTLFunction> _fragmentFunction;	// 168 = 0xa8
    NSArray *_frameBufferBindings;	// 176 = 0xb0
    NSArray *_nodeBufferBindings;	// 184 = 0xb8
    NSArray *_lightBufferBindings;	// 192 = 0xc0
    NSArray *_passBufferBindings;	// 200 = 0xc8
    NSArray *_shadableBufferBindings;	// 208 = 0xd0
}

@property(copy, nonatomic) NSArray *shadableBufferBindings; // @synthesize shadableBufferBindings=_shadableBufferBindings;
@property(copy, nonatomic) NSArray *passBufferBindings; // @synthesize passBufferBindings=_passBufferBindings;
@property(copy, nonatomic) NSArray *lightBufferBindings; // @synthesize lightBufferBindings=_lightBufferBindings;
@property(copy, nonatomic) NSArray *nodeBufferBindings; // @synthesize nodeBufferBindings=_nodeBufferBindings;
@property(copy, nonatomic) NSArray *frameBufferBindings; // @synthesize frameBufferBindings=_frameBufferBindings;
@property(retain, nonatomic) id <MTLFunction> fragmentFunction; // @synthesize fragmentFunction=_fragmentFunction;
@property(retain, nonatomic) id <MTLFunction> vertexFunction; // @synthesize vertexFunction=_vertexFunction;
@property(copy, nonatomic) MTLVertexDescriptor *vertexDescriptor; // @synthesize vertexDescriptor=_vertexDescriptor;
@property(retain, nonatomic) id <MTLRenderPipelineState> state; // @synthesize state=_state;
@property(readonly, nonatomic) unsigned int vertexBuffersUsageMask;
- (void)_computeUsageForBindings:(id)arg1 function:(id)arg2;	// IMP=0x0000000000213baf
- (_Bool)matchesRenderPassDescriptor:(id)arg1;	// IMP=0x0000000000213a4c
- (id)description;	// IMP=0x000000000021335e
- (void)dealloc;	// IMP=0x00000000002132c8
- (id)init;	// IMP=0x000000000021328e

@end

