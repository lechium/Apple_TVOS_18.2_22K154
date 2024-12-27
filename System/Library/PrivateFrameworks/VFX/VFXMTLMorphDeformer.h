//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VFXMTLComputePipeline, VFXMTLResourceManager;
@protocol MTLBuffer;

@interface VFXMTLMorphDeformer : NSObject
{
    struct __CFXMorpher *_morpher;	// 8 = 0x8
    unsigned char _finalMeshDataKind;	// 16 = 0x10
    unsigned char _dataKindForComputeKernel;	// 17 = 0x11
    VFXMTLResourceManager *_resourceManager;	// 24 = 0x18
    _Bool _morphNormals;	// 32 = 0x20
    unsigned long long _morphKind;	// 40 = 0x28
    unsigned long long _currentFrameHash;	// 48 = 0x30
    unsigned int _lastMorpherIncrementalPassState;	// 56 = 0x38
    unsigned int _finalMeshVertexCount;	// 60 = 0x3c
    unsigned int _vertexCountForComputeKernel;	// 64 = 0x40
    unsigned int _morphTargetCount;	// 68 = 0x44
    CDStruct_a37fce9e *_morphTargets;	// 72 = 0x48
    short _morphTargetPositionDataType;	// 80 = 0x50
    short _morphTargetNormalDataType;	// 82 = 0x52
    short _basePositionDataType;	// 84 = 0x54
    short _baseNormalDataType;	// 86 = 0x56
    id <MTLBuffer> _baseBufferForComputeKernel;	// 88 = 0x58
    id <MTLBuffer> _originalToFirstDeindexedTableBuffer;	// 96 = 0x60
    id <MTLBuffer> _deindexedToFirstDeindexedTableBuffer;	// 104 = 0x68
    id <MTLBuffer> _morphTargetsVertexBuffer;	// 112 = 0x70
    id <MTLBuffer> _morphTargetsSparseIndicesBuffer;	// 120 = 0x78
    VFXMTLComputePipeline *_incrementalInitPipeline;	// 128 = 0x80
    VFXMTLComputePipeline *_incrementalAddPipeline;	// 136 = 0x88
    VFXMTLComputePipeline *_copyBaseBufferPipeline;	// 144 = 0x90
    VFXMTLComputePipeline *_blendDensePipeline;	// 152 = 0x98
    VFXMTLComputePipeline *_blendDenseIndexedPipeline;	// 160 = 0xa0
    VFXMTLComputePipeline *_blendSparsePipeline;	// 168 = 0xa8
    VFXMTLComputePipeline *_splatPipeline;	// 176 = 0xb0
}

+ (unsigned long long)requiredOutputs;	// IMP=0x001000000020870a
+ (unsigned long long)supportedOutputs;	// IMP=0x00100000002086b8
+ (unsigned long long)requiredInputs;	// IMP=0x00100000002086ad
- (unsigned long long)morphIncrementallyWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3;	// IMP=0x000000000020ad42
- (unsigned long long)morphSparseWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3;	// IMP=0x000000000020a8ba
- (unsigned long long)updateWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3 tangents:(id)arg4;	// IMP=0x000000000020a847
- (void)createSparseIndicesBufferForMorphTarget:(CDStruct_a37fce9e *)arg1 withSetupTarget:(CDStruct_2893edbc *)arg2 indicesBuffer:(char *)arg3 indicesBufferOffset:(unsigned long long)arg4 indexSize:(unsigned long long)arg5 originalToFirstDeindexedTable:(unsigned int *)arg6 computeContext:(id)arg7;	// IMP=0x000000000020a091
- (void)createVertexBufferForMorphTarget:(CDStruct_a37fce9e *)arg1 withSetupTarget:(CDStruct_2893edbc *)arg2 vertexBuffer:(char *)arg3 vertexBufferOffset:(unsigned long long)arg4 indicesBuffer:(char *)arg5 indicesBufferOffset:(unsigned long long)arg6 indexSize:(unsigned long long)arg7 originalToFirstDeindexedTable:(unsigned int *)arg8 computeContext:(id)arg9;	// IMP=0x0000000000209c25
- (void)setupMorphTargetsWithComputeContext:(id)arg1;	// IMP=0x000000000020888e
- (void)dealloc;	// IMP=0x00000000002087bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

