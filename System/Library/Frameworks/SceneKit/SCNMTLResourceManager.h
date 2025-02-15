//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTKTextureLoader, NSMutableArray, SCNMTLBufferAllocator, SCNMTLLibraryManager, SCNMTLShadableKey, SCNMTLShaderBindingsGenerator;
@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNMTLResourceManager : NSObject
{
    id <MTLDevice> _device;	// 8 = 0x8
    id <MTLCommandQueue> _commandQueue;	// 16 = 0x10
    struct __C3DEngineStats *__engineStats;	// 24 = 0x18
    SCNMTLLibraryManager *_libraryManager;	// 32 = 0x20
    SCNMTLShaderBindingsGenerator *_bindingsGenerator;	// 40 = 0x28
    struct __CFDictionary *_availablePipelineStates;	// 48 = 0x30
    struct os_unfair_lock_s _availablePipelineStatesLock;	// 56 = 0x38
    SCNMTLBufferAllocator *_commonProfileBuffersAllocator;	// 64 = 0x40
    CDStruct_670bd187 _availableLightingSystemReflectionProbeTextures;	// 72 = 0x48
    CDStruct_670bd187 _availableIrradianceTextures;	// 88 = 0x58
    CDStruct_670bd187 _availableRadianceTextures;	// 104 = 0x68
    CDStruct_670bd187 _availableImages;	// 120 = 0x78
    CDStruct_670bd187 _availableImageProxy;	// 136 = 0x88
    CDStruct_670bd187 _availableSamplers;	// 152 = 0x98
    CDStruct_670bd187 _availableIESTextures;	// 168 = 0xa8
    CDStruct_670bd187 _availableBuffers;	// 184 = 0xb8
    CDStruct_670bd187 _availableMeshes;	// 200 = 0xc8
    CDStruct_670bd187 _availableMeshSources;	// 216 = 0xd8
    CDStruct_670bd187 _availableMeshElements;	// 232 = 0xe8
    CDStruct_670bd187 _availableRasterizerStates;	// 248 = 0xf8
    CDStruct_670bd187 _availableDeformerStacks;	// 264 = 0x108
    CDStruct_670bd187 _availableSkinDeformerReadOnlyBuffers;	// 280 = 0x118
    CDStruct_670bd187 _availableMorphDeformerReadOnlyBuffers;	// 296 = 0x128
    CDStruct_670bd187 _availableComputePipelines;	// 312 = 0x138
    CDStruct_670bd187 _availableComputePipelinesWithStageDescriptor;	// 328 = 0x148
    CDStruct_670bd187 _availableColorMatchingComputePipelines;	// 344 = 0x158
    CDStruct_670bd187 _availableTessellators;	// 360 = 0x168
    CDStruct_670bd187 _availableWireframeMaterials;	// 376 = 0x178
    CDStruct_670bd187 _availableOpenSubdivComputeEvaluators;	// 392 = 0x188
    CDStruct_670bd187 _availableShadables;	// 408 = 0x198
    SCNMTLShadableKey *_availableShadablesSearchKey;	// 424 = 0x1a8
    NSMutableArray *_availableStageDescriptors;	// 432 = 0x1b0
    struct os_unfair_lock_s _stageDescriptorsLock;	// 440 = 0x1b8
    id <MTLTexture> _areaLightPrecomputedDataTexture;	// 448 = 0x1c0
    id <MTLTexture> _specularDFGDiffuseHammonTexture;	// 456 = 0x1c8
    struct __C3DFXMetalProgram *_defaultProgram;	// 464 = 0x1d0
    struct __C3DFXMetalProgram *_defaultProgramForTessellation;	// 472 = 0x1d8
    struct __C3DFXMetalProgram *_isolateProgram;	// 480 = 0x1e0
    id <MTLDepthStencilState> _depthAndStencilStateWithReadWriteDepthDisabled;	// 488 = 0x1e8
    id <MTLTexture> _defaultTexture;	// 496 = 0x1f0
    id <MTLTexture> _defaultTexture3D;	// 504 = 0x1f8
    id <MTLTexture> _defaultCubeTexture;	// 512 = 0x200
    id <MTLTexture> _defaultLightingEnvironmentIrradianceTexture;	// 520 = 0x208
    id <MTLTexture> _defaultLightingEnvironmentRadianceTexture;	// 528 = 0x210
    MTKTextureLoader *_mtkTextureLoader;	// 536 = 0x218
}

+ (void)_fillVertexDescriptor:(id)arg1 withSemantic:(BOOL)arg2 inputSet:(long long)arg3 bufferIndex:(long long)arg4 vertexFormat:(unsigned long long)arg5 offset:(unsigned long long)arg6 stride:(unsigned long long)arg7;	// IMP=0x006000000007f874
+ (void)_fillVertexDescriptor:(id)arg1 withMeshSource:(struct __C3DMeshSource *)arg2 semantic:(BOOL)arg3 inputSet:(long long)arg4 bufferIndex:(long long)arg5;	// IMP=0x006000000007f57c
+ (void)unregisterManagerForDevice:(id)arg1;	// IMP=0x006000000007d027
- (void)commandBufferDidCompleteWithError:(id)arg1;	// IMP=0x000000000008305e
- (id)renderResourceForMorpher:(struct __C3DMorpher *)arg1 baseMesh:(struct __C3DMesh *)arg2 dataKind:(unsigned char)arg3 provider:(CDUnknownBlockType)arg4;	// IMP=0x0000000000080762
- (id)renderResourceForSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 dataKind:(unsigned char)arg3 provider:(CDUnknownBlockType)arg4;	// IMP=0x00000000000804a9
- (id)renderResourceForDeformerStack:(struct __C3DDeformerStack *)arg1 node:(struct __C3DNode *)arg2 dataKind:(unsigned char)arg3;	// IMP=0x00000000000803b5
- (void)__updateMutableMesh:(struct __C3DMesh *)arg1 withMetalMesh:(id)arg2;	// IMP=0x000000000007fa14
- (id)_bufferForData:(struct __CFData *)arg1 bytesPerIndex:(unsigned long long)arg2;	// IMP=0x000000000007efd9
- (id)_bufferForMTLBuffer:(void *)arg1;	// IMP=0x000000000007eed0
- (void)_geometryWillDie:(id)arg1;	// IMP=0x000000000007e8ac
- (void)_materialWillDie:(id)arg1;	// IMP=0x000000000007e632
- (void)_passWillDie:(id)arg1;	// IMP=0x000000000007e3a6
- (void)_programWillDie:(id)arg1;	// IMP=0x000000000007e11a
- (void)_removeMatchingProgram:(struct __C3DFXMetalProgram *)arg1 pass:(struct __C3DFXPass *)arg2;	// IMP=0x000000000007dfde
- (void)_rasterizerStateDidDie:(const void *)arg1;	// IMP=0x000000000007dfc5
- (void)_precomputedLightingEnvironmentWillDie:(id)arg1;	// IMP=0x000000000007df46
- (void)_imageProxyWillDie:(id)arg1;	// IMP=0x000000000007deee
- (void)_imageWillDie:(id)arg1;	// IMP=0x000000000007dd87
- (void)_deformerStackDidChange:(id)arg1;	// IMP=0x000000000007dcb8
- (void)_deformerStackWillDie:(id)arg1;	// IMP=0x000000000007dc3d
- (void)_skinWillDie:(id)arg1;	// IMP=0x000000000007dbe5
- (void)_programHashCodeWillDie:(id)arg1;	// IMP=0x000000000007db8d
- (void)_morphWillDie:(id)arg1;	// IMP=0x000000000007db35
- (void)_meshWillDie:(id)arg1;	// IMP=0x000000000007d979
- (void)_meshElementWillDie:(id)arg1;	// IMP=0x000000000007d88f
- (void)_meshSourceWillDie:(id)arg1;	// IMP=0x000000000007d803
- (void)dealloc;	// IMP=0x000000000007d55c
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000007d0aa
- (id)areaLightPrecomputedDataTexture;	// IMP=0x000000000010f1f2
- (id)specularDFGDiffuseHammonTextureWithRenderContext:(id)arg1;	// IMP=0x000000000010f0ad
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 commandBuffer:(id)arg3;	// IMP=0x000000000010efd8
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 cpuAccessible:(_Bool)arg3 commandBuffer:(id)arg4;	// IMP=0x000000000010ea4b
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(CDUnknownBlockType)arg4;	// IMP=0x000000000010e703
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 renderContext:(id)arg4;	// IMP=0x000000000010e373
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(CDUnknownBlockType)arg3;	// IMP=0x000000000010e226
- (id)radianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x000000000010e07d
- (id)irradianceTextureForPrecomputedLightingEnvironment:(id)arg1;	// IMP=0x000000000010ded4
- (id)defaultLightingEnvironmentRadianceTexture;	// IMP=0x000000000010dd4c
- (id)defaultLightingEnvironmentIrradianceTexture;	// IMP=0x000000000010dbc4
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;	// IMP=0x0000000000114f0f
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x00000000001149ca
- (id)computeEvaluatorWithContext:(struct MTLContext *)arg1 srcDesc:(const struct BufferDescriptor *)arg2 dstDesc:(const struct BufferDescriptor *)arg3 duDesc:(const struct BufferDescriptor *)arg4 dvDesc:(const struct BufferDescriptor *)arg5;	// IMP=0x000000000022e932
- (void)colorMatchBiPlanarPixelBufferWithFormatType:(unsigned int)arg1 pixelBufferYCbCrMatrix:(id)arg2 pixelBufferColorPrimaries:(id)arg3 pixelBufferTransferFunction:(id)arg4 sourceTextureY:(id)arg5 sourceTextureCbCr:(id)arg6 sourceColorSpace:(struct CGColorSpace *)arg7 destinationColorSpace:(struct CGColorSpace *)arg8 destinationTexture:(id)arg9 renderContext:(id)arg10;	// IMP=0x00000000002454ef
- (void)colorMatchSourceTexture:(id)arg1 sourceColorSpace:(struct CGColorSpace *)arg2 destinationColorSpace:(struct CGColorSpace *)arg3 destinationTexture:(id)arg4 renderContext:(id)arg5;	// IMP=0x000000000024541d
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;	// IMP=0x00000000002451f1
- (id)defaultTexture3D;	// IMP=0x0000000000244dfd
- (id)defaultCubeTexture;	// IMP=0x0000000000244bdb
- (id)defaultTexture;	// IMP=0x00000000002449b7
- (id)renderResourceForImage:(struct __C3DImage *)arg1 sampler:(struct __C3DTextureSampler *)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext *)arg4 didFallbackToDefaultTexture:(_Bool *)arg5;	// IMP=0x0000000000244560
- (id)lazyMTKTextureLoader;	// IMP=0x0000000000244510
- (id)renderResourceForImageProxy:(struct __C3DImageProxy *)arg1 sampler:(struct __C3DTextureSampler *)arg2 engineContext:(struct __C3DEngineContext *)arg3 didFallbackToDefaultTexture:(_Bool *)arg4;	// IMP=0x0000000000244390
- (id)renderResourceForEffectSlot:(struct __C3DEffectSlot *)arg1 withEngineContext:(struct __C3DEngineContext *)arg2 didFallbackToDefaultTexture:(_Bool *)arg3;	// IMP=0x00000000002442a8
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000243dc2
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x0000000000243be5
- (id)newCubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext *)arg3 needsMipmap:(_Bool)arg4;	// IMP=0x00000000002439fb
- (_Bool)_copyImage:(struct __C3DImage *)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(_Bool)arg5;	// IMP=0x000000000024301b
- (id)_textureDescriptorFromImage:(struct __C3DImage *)arg1 needsMipMap:(_Bool)arg2 textureOptions:(int)arg3;	// IMP=0x0000000000242ccb
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder *)arg3 generateMipMaps:(_Bool)arg4;	// IMP=0x0000000000242a0e
- (id)newTextureUsingMTKTextureLoaderWithData:(id)arg1 options:(id)arg2;	// IMP=0x0000000000242930
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;	// IMP=0x0000000000242852
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x0000000000242737
- (id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext *)arg2 needsMipmap:(_Bool)arg3;	// IMP=0x0000000000242686
- (_Bool)hasCommonProfilePrecompiledFunctions;	// IMP=0x00000000002f78c5
- (void)reloadPipelinesIfNeeded;	// IMP=0x00000000002f78bf
- (id)colorMatchingComputePipelineStateForBiPlanarPixelBufferWithFormatType:(unsigned int)arg1 pixelBufferYCbCrMatrix:(id)arg2 pixelBufferColorPrimaries:(id)arg3 pixelBufferTransferFunction:(id)arg4 sourceColorSpace:(struct CGColorSpace *)arg5 destinationColorSpace:(struct CGColorSpace *)arg6 renderContext:(id)arg7;	// IMP=0x00000000002f6ee0
- (id)colorMatchingComputePipelineStateForSourceColorSpace:(struct CGColorSpace *)arg1 destinationColorSpace:(struct CGColorSpace *)arg2 renderContext:(id)arg3;	// IMP=0x00000000002f6eaa
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;	// IMP=0x00000000002f6e5c
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;	// IMP=0x00000000002f6e09
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;	// IMP=0x00000000002f6df4
- (id)newComputePipelineStateWithFunctionName:(id)arg1;	// IMP=0x00000000002f6da3
- (id)getUniqueStageDescriptor:(id)arg1;	// IMP=0x00000000002f6874
- (id)computePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 stageDescriptorUpdateBlock:(CDUnknownBlockType)arg3 constants:(id)arg4 constantsHash:(id)arg5;	// IMP=0x00000000002f6495
- (id)_computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg4;	// IMP=0x00000000002f630f
- (id)computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3;	// IMP=0x00000000002f62fa
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(_Bool)arg2;	// IMP=0x00000000002f62e0
- (id)computePipelineStateForKernel:(id)arg1;	// IMP=0x00000000002f62c6
- (id)newComputePipelineStateForDesc:(CDStruct_3ade659f)arg1 library:(id)arg2;	// IMP=0x00000000002f6246
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x00000000002f6150
- (id)_newComputeDescriptorForPipelineDesc:(CDStruct_3ade659f)arg1 library:(id)arg2;	// IMP=0x00000000002f6000
- (id)newRenderPipelineStateWithDesc:(CDStruct_d34f267f)arg1;	// IMP=0x00000000002f5cef
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(CDStruct_d34f267f)arg2 pipeline:(id)arg3;	// IMP=0x00000000002f54eb
- (struct __C3DFXMetalProgram *)defaultProgramUsingTessellation:(_Bool)arg1;	// IMP=0x00000000002f54ca
- (id)renderResourceForProgramDesc:(CDStruct_e8e03628)arg1 renderPassDescriptor:(id)arg2;	// IMP=0x00000000002f4923

@end

