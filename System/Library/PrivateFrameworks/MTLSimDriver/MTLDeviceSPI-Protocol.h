//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MTLSimDriver/MTLDevice-Protocol.h>

@class MTLAccelerationStructureAllocationDescriptor, MTLAccelerationStructureDescriptor, MTLArchitecture, MTLBinaryArchiveDescriptor, MTLBufferDescriptor, MTLCommandQueueDescriptor, MTLComputePipelineDescriptor, MTLDynamicLibraryDescriptorSPI, MTLFunction, MTLFunctionDescriptor, MTLGPUBVHBuilder, MTLIndirectCommandBufferDescriptor, MTLIntersectionFunctionTableDescriptor, MTLMeshRenderPipelineDescriptor, MTLRasterizationRateMapDescriptor, MTLRenderPipelineDescriptor, MTLStitchedLibraryDescriptor, MTLStitchedLibraryDescriptorSPI, MTLStructType, MTLTargetDeviceArchitecture, MTLTextureDescriptor, MTLTileRenderPipelineDescriptor, MTLVisibleFunctionTableDescriptor, NSArray, NSData, NSDictionary, NSMutableDictionary, NSObject, NSString, NSURL, _MTLIndirectArgumentBufferLayout;
@protocol MTLAccelerationStructure, MTLArgumentEncoder, MTLBinaryArchive, MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDeadlineProfile, MTLDeserializationContext, MTLDevice, MTLDeviceSPI, MTLDynamicLibrary, MTLEvent, MTLFunction, MTLIndirectArgumentEncoder, MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder, MTLIntersectionFunctionTable, MTLLateEvalEvent, MTLLibrary, MTLPipelineLibrarySPI, MTLRasterizationRateMap, MTLRenderPipelineState, MTLResourceGroupSPI, MTLSharedEvent, MTLTexture, MTLTextureLayout, MTLVisibleFunctionTable, OS_dispatch_data;

@protocol MTLDeviceSPI <MTLDevice>
@property(readonly) _Bool requiresBFloat16Emulation;
@property(readonly) unsigned long long maxAccelerationStructureTraversalDepth;
@property(copy, nonatomic) NSDictionary *pluginData;
@property(readonly) unsigned long long latestSupportedGenericBVHVersion;
@property(readonly) _Bool requiresRaytracingEmulation;
@property(readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported;
@property(readonly) unsigned long long maxRasterizationRateLayerCount;
@property(readonly, getter=isLargeMRTSupported) _Bool largeMRTSupported;
@property(readonly, getter=isFixedLinePointFillDepthGradientSupported) _Bool FixedLinePointFillDepthGradientSupported;
@property(readonly, getter=isAnisoSampleFixSupported) _Bool AnisoSampleFixSupported;
@property(readonly) long long defaultTextureWriteRoundingMode;
@property(readonly, getter=isRTZRoundingSupported) _Bool RTZRoundingSupported;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities;
@property(readonly) unsigned long long dedicatedMemorySize;
@property(readonly) unsigned long long sharedMemorySize;
@property(readonly) _Bool supportPriorityBand;
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(readonly) unsigned long long maxAccelerationStructureLevels;
@property(readonly) unsigned long long maxPredicatedNestingDepth;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxVertexAmplificationCount;
@property(readonly) unsigned long long maxVertexAmplificationFactor;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long minTilePixels;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTileBuffers;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) const CDStruct_e1c34685 *limits;
@property(readonly) unsigned long long simulatorHostFeatureProfile;
@property(readonly) unsigned long long featureProfile;
@property(nonatomic) _Bool metalAssertionsEnabled;
@property(readonly) unsigned long long doubleFPConfig;
@property(readonly) unsigned long long singleFPConfig;
@property(readonly) unsigned long long halfFPConfig;
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
@property(readonly, getter=isBCTextureCompressionSupported) _Bool BCTextureCompressionSupported;
@property(nonatomic) unsigned long long commandBufferErrorOptions;
@property(getter=areWritableHeapsEnabled, setter=setWritableHeapsEnabled:) _Bool writableHeapsEnabled;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
@property(readonly) unsigned long long deviceCreationFlags;
@property(readonly) unsigned long long bufferRobustnessSupport;
@property(readonly, nonatomic) _Bool supportsDeviceCoherency;
@property(readonly, nonatomic) _Bool supportsExtendedSamplerLODBiasRange;
@property(readonly, nonatomic) _Bool supportsRayTracingPerComponentMotionInterpolation;
@property(readonly, nonatomic) _Bool supportsRayTracingDirectIntersectionResultAccess;
@property(readonly, nonatomic) _Bool supportsRayTracingMatrixLayout;
@property(readonly, nonatomic) _Bool supportsExplicitVisibilityGroups;
@property(readonly, nonatomic) _Bool supportsRayTracingICBs;
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsConditionalLoadStore;
@property(readonly, nonatomic) _Bool supportsPerPlaneCompression;
@property(readonly, nonatomic) _Bool supportsColorSpaceConversionMatrixSelection;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsBfloat16Buffers;
@property(readonly, nonatomic) _Bool supportsMeshRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsMeshShadersInICB;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromMesh;
@property(readonly, nonatomic) _Bool supportsMeshShaders;
@property(readonly, nonatomic) _Bool supportsLossyCompression;
@property(readonly, nonatomic) _Bool supportsAtomicUlongVoidMinMax;
@property(readonly, nonatomic) _Bool supportsSparseDepthAttachments;
@property(readonly, nonatomic) _Bool supportsBfloat16Format;
@property(readonly, nonatomic) _Bool supportsSIMDShuffleAndFill;
@property(readonly, nonatomic) _Bool supportsQuadReduction;
@property(readonly, nonatomic) _Bool supportsInterchangeTiled;
@property(readonly, nonatomic) _Bool supportsSIMDGroupMatrix;
@property(readonly, nonatomic) _Bool supportsComputeCompressedTextureWrite;
@property(readonly, nonatomic) _Bool supportsDevicePartitioning;
@property(readonly, nonatomic) _Bool supportsForkJoin;
@property(readonly, nonatomic) _Bool supportsBufferBoundsChecking;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsPQ;
@property(readonly, nonatomic) _Bool supportsAnisoSampleFix;
@property(readonly, nonatomic) _Bool supportsRTZRounding;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsShaderBarycentricCoordinates;
@property(readonly, nonatomic) _Bool supportsRayTracingCurves;
@property(readonly, nonatomic) _Bool supportsRayTracingGPUTableUpdateBuffers;
@property(readonly, nonatomic) _Bool supportsRayTracingIndirectInstanceAccelerationStructureBuild;
@property(readonly, nonatomic) _Bool supportsRayTracingMultiLevelInstancing;
@property(readonly, nonatomic) _Bool supportsRayTracingAccelerationStructureCPUDeserialization;
@property(readonly, nonatomic) _Bool supportsRayTracingBuffersFromTables;
@property(readonly, nonatomic) _Bool supportsRayTracingTraversalMetrics;
@property(readonly, nonatomic) _Bool supportsRayTracingPerPrimitiveData;
@property(readonly, nonatomic) _Bool supportsHeapAccelerationStructureAllocation;
@property(readonly, nonatomic) _Bool supportsRayTracingExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsPrimitiveMotionBlur;
@property(readonly, nonatomic) _Bool supportsRaytracingFromRender;
@property(readonly, nonatomic) _Bool supportsSharedFunctionTables;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromRender;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsFunctionPointers;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsSparseHeaps;
@property(readonly, nonatomic) _Bool supportsSparseTextures;
@property(readonly, nonatomic) _Bool supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats;
@property(readonly, nonatomic) _Bool supportsVariableRateRasterization;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsHeapWithAddressRanges;
@property(readonly, nonatomic) _Bool supportsBufferWithAddressRanges;
@property(readonly, nonatomic) _Bool supportsResourceDetachBacking;
@property(readonly, nonatomic) _Bool supportsExtendedVertexFormats;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsDynamicAttributeStride;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsResourceHeaps;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsSetThreadgroupPackingDisabled;
@property(readonly, nonatomic) _Bool supportsFillTexture;
@property(readonly, nonatomic) _Bool supportsDeadlineProfile;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsFixedLinePointFillDepthGradient;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsVertexAmplification;
@property(readonly, nonatomic) _Bool supportsQueryTextureLOD;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supportsGlobalVariableBindingInDylibs;
@property(readonly, nonatomic) _Bool supportsGlobalVariableBindings;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsBGR10A2;
@property(readonly, nonatomic) _Bool supportsRGBA10A2Gamma;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsPartialRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;
- (_Bool)setCompilerProcessesCount:(int)arg1;
- (struct MTLCompilerConnectionManager *)getCompilerConnectionManager:(int)arg1;
- (id <MTLDeadlineProfile>)newProfileWithExecutionSize:(unsigned long long)arg1;
- (void)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(id <MTLRenderPipelineState>, MTLRenderPipelineReflection *, NSError *))arg3;
- (void)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithMeshDescriptor:(MTLMeshRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (id <MTLIntersectionFunctionTable>)newIntersectionFunctionTableWithDescriptor:(MTLIntersectionFunctionTableDescriptor *)arg1;
- (id <MTLVisibleFunctionTable>)newVisibleFunctionTableWithDescriptor:(MTLVisibleFunctionTableDescriptor *)arg1;
- (id <MTLBinaryArchive>)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(NSURL *)arg2 error:(id *)arg3;
- (_Bool)validateDynamicLibraryURL:(NSURL *)arg1 error:(id *)arg2;
- (_Bool)validateDynamicLibrary:(id <MTLLibrary>)arg1 state:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)loadDynamicLibrariesForFunction:(MTLFunction *)arg1 insertLibraries:(NSArray *)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (NSArray *)loadDynamicLibrariesForFunction:(MTLFunction *)arg1 insertLibraries:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)loadDynamicLibrariesForComputeDescriptor:(MTLComputePipelineDescriptor *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (NSArray *)loadDynamicLibrariesForComputeDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibraryFromURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id <MTLDynamicLibrary>)newDynamicLibraryWithURL:(NSURL *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibraryWithDescriptor:(MTLDynamicLibraryDescriptorSPI *)arg1 error:(id *)arg2;
- (_Bool)validateDynamicLibraryDescriptor:(MTLDynamicLibraryDescriptorSPI *)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibrary:(id <MTLLibrary>)arg1 error:(id *)arg2;
- (id <MTLDynamicLibrary>)newDynamicLibrary:(id <MTLLibrary>)arg1 computeDescriptor:(MTLComputePipelineDescriptor *)arg2 error:(id *)arg3;
- (id <MTLBinaryArchive>)newBinaryArchiveWithDescriptor:(MTLBinaryArchiveDescriptor *)arg1 error:(id *)arg2;
- (void)deserializeInstanceAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBytes:(const void *)arg2 primitiveAccelerationStructures:(NSArray *)arg3 withDescriptor:(MTLAccelerationStructureDescriptor *)arg4;
- (void)deserializePrimitiveAccelerationStructure:(id <MTLAccelerationStructure>)arg1 fromBytes:(const void *)arg2 withDescriptor:(MTLAccelerationStructureDescriptor *)arg3;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1 withDescriptor:(MTLAccelerationStructureAllocationDescriptor *)arg2;
- (id <MTLAccelerationStructure>)deserializeInstanceAccelerationStructureFromBytes:(void *)arg1 primitiveAccelerationStructures:(NSArray *)arg2 withDescriptor:(MTLAccelerationStructureDescriptor *)arg3;
- (id <MTLAccelerationStructure>)deserializePrimitiveAccelerationStructureFromBytes:(void *)arg1 withDescriptor:(MTLAccelerationStructureDescriptor *)arg2;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 resourceIndex:(unsigned long long)arg3;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2;
- (_Bool)isCompatibleWithAccelerationStructure:(CDStruct_c0454aff)arg1;
- (id <MTLAccelerationStructure>)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;
- (id <MTLRasterizationRateMap>)newRasterizationRateMapWithDescriptor:(MTLRasterizationRateMapDescriptor *)arg1;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;
- (id <MTLSharedEvent>)newSharedEventWithOptions:(long long)arg1;
- (id <MTLEvent>)newEventWithOptions:(long long)arg1;
- (id <MTLSharedEvent>)newSharedEventWithMachPort:(unsigned int)arg1;
- (id <MTLIndirectComputeCommandEncoder>)newIndirectComputeCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLIndirectRenderCommandEncoder>)newIndirectRenderCommandEncoderWithBuffer:(id <MTLBuffer>)arg1;
- (id <MTLBuffer>)newIndirectCommandBufferWithDescriptor:(MTLIndirectCommandBufferDescriptor *)arg1 maxCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (_Bool)supportsTextureWriteRoundingMode:(long long)arg1;
- (id <MTLArgumentEncoder>)newArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (_MTLIndirectArgumentBufferLayout *)newIndirectArgumentBufferLayoutWithStructType:(MTLStructType *)arg1;
- (id <MTLCommandQueue>)newCommandQueueWithDescriptor:(MTLCommandQueueDescriptor *)arg1;
- (_Bool)supportsSampleCount:(unsigned long long)arg1;
- (_Bool)copyShaderCacheToPath:(NSString *)arg1;
- (CDStruct_c0454aff)pipelineCacheStats;
- (CDStruct_c0454aff)libraryCacheStats;
- (void)unloadShaderCaches;
- (id <MTLBuffer>)newBufferWithIOSurface:(struct __IOSurface *)arg1;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id <MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;
- (id <MTLDevice>)_deviceWrapper;
- (void)_setDeviceWrapper:(id <MTLDeviceSPI>)arg1;
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;
- (MTLArchitecture *)getMostCompatibleArchitecture:(NSArray *)arg1;
- (NSString *)productName;
- (NSString *)familyName;
- (NSString *)vendorName;
- (_Bool)isVendorSliceCompatibleWithDeploymentTarget:(unsigned int)arg1 platform:(unsigned int)arg2 sdkVersion:(unsigned int)arg3 compilerPluginVersion:(unsigned int)arg4;
- (void)allowLibrariesFromOtherPlatforms;
- (NSString *)reportLeaks;

@optional
@property(readonly, getter=isClampToHalfBorderSupported) _Bool ClampToHalfBorderSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,GisClampToHalfBorderSupported

@property(readonly, getter=isCustomBorderColorSupported) _Bool CustomBorderColorSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,GisCustomBorderColorSupported

@property(readonly, getter=isRGB10A2GammaSupported) _Bool RGB10A2GammaSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,GisRGB10A2GammaSupported

@property(readonly) unsigned long long sparseTexturesSupport;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R

@property(readonly, getter=isQuadDataSharingSupported) _Bool quadDataSharingSupported;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,GisQuadDataSharingSupported

@property _Bool shaderDebugInfoCaching;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?

- (void)deserializeCompileTimeStats:(NSObject<OS_dispatch_data> *)arg1 addToDictionary:(NSMutableDictionary *)arg2;
- (id <MTLResourceGroupSPI>)newResourceGroupFromResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)compileVisibleFunction:(id <MTLFunction>)arg1 withDescriptor:(MTLFunctionDescriptor *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)compileVisibleFunction:(id <MTLFunction>)arg1 withDescriptor:(MTLFunctionDescriptor *)arg2 error:(id *)arg3;
- (void)compileVisibleFunction:(id <MTLFunction>)arg1 withDescriptor:(MTLFunctionDescriptor *)arg2 destinationBinaryArchive:(id <MTLBinaryArchive>)arg3 error:(id *)arg4;
- (CDStruct_da2e99ad)tileSizeWithSparsePageSize:(long long)arg1 textureType:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithLayout:(_MTLIndirectArgumentBufferLayout *)arg1;
- (id <MTLTextureLayout>)newTextureLayoutWithDescriptor:(MTLTextureDescriptor *)arg1 isHeapOrBufferBacked:(_Bool)arg2;
- (id <MTLTexture>)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(MTLTextureDescriptor *)arg3 deallocator:(void (^)(void *, unsigned long long))arg4;
- (MTLStructType *)newStructTypeWithSerializedData:(NSObject<OS_dispatch_data> *)arg1;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1 version:(unsigned int)arg2;
- (NSObject<OS_dispatch_data> *)serializeStructType:(MTLStructType *)arg1;
- (MTLTileRenderPipelineDescriptor *)newTileRenderPipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (MTLComputePipelineDescriptor *)newComputePipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (MTLRenderPipelineDescriptor *)newRenderPipelineDescriptorWithSerializedData:(NSObject<OS_dispatch_data> *)arg1 deserializationContext:(id <MTLDeserializationContext>)arg2;
- (NSObject<OS_dispatch_data> *)serializeTileRenderPipelineDescriptor:(MTLTileRenderPipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeComputePipelineDescriptor:(MTLComputePipelineDescriptor *)arg1;
- (NSObject<OS_dispatch_data> *)serializeRenderPipelineDescriptor:(MTLRenderPipelineDescriptor *)arg1;
- (NSData *)endCollectingPipelineDescriptors;
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(NSString *)arg1;
- (void)startCollectingPipelineDescriptors;
- (id <MTLPipelineLibrarySPI>)newPipelineLibraryWithFilePath:(NSString *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithCIFiltersForComputePipeline:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithCIFilters:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (NSString *)newDagStringWithGraphs:(NSArray *)arg1;
- (id <MTLLibrary>)newLibraryWithDescriptorSPI:(MTLStitchedLibraryDescriptorSPI *)arg1 error:(id *)arg2;
- (void)newLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 completionHandler:(void (^)(id <MTLLibrary>, NSError *))arg2;
- (id <MTLLibrary>)newLibraryWithDescriptor:(MTLStitchedLibraryDescriptor *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithStitchedDescriptorSPI:(MTLStitchedLibraryDescriptorSPI *)arg1 error:(id *)arg2;
- (id <MTLLibrary>)newLibraryWithGraphsSPI:(NSArray *)arg1 functions:(NSArray *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithGraphs:(NSArray *)arg1 functions:(NSArray *)arg2 error:(id *)arg3;
- (id <MTLLibrary>)newLibraryWithDAG:(NSString *)arg1 functions:(NSArray *)arg2 error:(id *)arg3;
- (id <MTLComputePipelineState>)newComputePipelineStateWithImageFilterFunctionsSPI:(NSArray *)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;
- (id <MTLIndirectArgumentEncoder>)newIndirectArgumentEncoderWithArguments:(NSArray *)arg1;
- (void)setRawBVHBuilderPtr:(MTLGPUBVHBuilder *)arg1;
- (MTLGPUBVHBuilder *)getRawBVHBuilderPtr;
- (struct os_unfair_lock_s *)getBVHBuilderLock;
- (void *)getShaderCacheKeys;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (id <MTLFunction>)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id <MTLFunction>)newFunctionWithGLESIR:(void *)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (id <MTLFunction>)newFunctionWithGLESIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (id <MTLFunction>)newFunctionWithGLCoreIR:(void *)arg1 inputsDescription:(NSObject<OS_dispatch_data> *)arg2 functionType:(unsigned long long)arg3;
- (id <MTLFunction>)newFunctionWithGLCoreIR:(void *)arg1 functionType:(unsigned long long)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLRenderPipelineState>, NSError *))arg2;
- (id <MTLRenderPipelineState>)newRenderPipelineStateWithTileDescriptor:(MTLTileRenderPipelineDescriptor *)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 completionHandler:(void (^)(id <MTLComputePipelineState>, NSError *))arg2;
- (id <MTLComputePipelineState>)newComputePipelineStateWithDescriptor:(MTLComputePipelineDescriptor *)arg1 error:(id *)arg2;
- (void)unmapShaderSampleBuffer;
- (_Bool)mapShaderSampleBufferWithBuffer:(CDStruct_32a7f38a *)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (id <MTLLateEvalEvent>)newLateEvalEvent;
- (id <MTLBuffer>)newBufferWithDescriptor:(MTLBufferDescriptor *)arg1;
- (id <MTLBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(void (^)(void *, unsigned long long))arg5;
- (id <MTLBuffer>)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;
- (id <MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;
- (_Bool)reserveGPUAddressRange:(struct _NSRange)arg1;
- (void)reserveResourceIndicesForResourceType:(unsigned long long)arg1 indices:(unsigned long long *)arg2 indexCount:(unsigned long long)arg3;
- (unsigned long long)resourcePatchingTypeForResourceType:(unsigned long long)arg1;
- (void)setupMPSFunctionTable:(struct MPSFunctionTable *)arg1;
- (void)setIndirectArgumentBufferDecodingData:(NSObject<OS_dispatch_data> *)arg1;
- (NSObject<OS_dispatch_data> *)indirectArgumentBufferDecodingData;
- (_Bool)supportsPrimitiveType:(unsigned long long)arg1;
@end

