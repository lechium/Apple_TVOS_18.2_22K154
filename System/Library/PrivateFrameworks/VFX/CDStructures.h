//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSMapTable, RGCachedComputeCommandEncoder, VFXMTLMesh, VFXMTLMeshElement, VFXMTLRenderPipeline, VFXMTLShadable;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAudio3DPoint {
    float _field1;
    float _field2;
    float _field3;
};

struct BufferDescriptor {
    int _field1;
    int _field2;
    int _field3;
};

struct CFXColor4 {
    union {
        float _field1[4];
        struct {
            float _field1;
            float _field2;
            float _field3;
            float _field4;
        } _field2;
    } _field1;
};

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct Cache {
    struct __CFXRasterizerStates *rasterizerStates;
    struct __CFXMesh *mesh;
    VFXMTLMesh *metalMesh;
    struct __CFXMeshElement *meshElement;
    VFXMTLMeshElement *metalMeshElement;
    struct __CFXFXProgram *program;
    struct __CFXMaterial *material;
    struct __CFXGeometry *geometry;
    VFXMTLShadable *metalShadable;
    struct __CFXCommonProfile *commonProfile;
    struct __CFXBlendStates *blendStates;
    unsigned char colorBufferWriteMask;
    struct __CFXNode *node;
    struct __CFXNode *pointOfView;
    struct __CFXDeformerStack *deformers;
    CDStruct_14d5dc5e viewTransform;
    CDStruct_14d5dc5e proj;
    unsigned long long vertexDescriptorHash;
    unsigned char tessellationPipelineStateHash;
    VFXMTLRenderPipeline *renderPipeline;
};

struct Info {
    CDStruct_798fd7c0 clusterBuffer;
    id clusterTexture;
    id lightIndicesTexture;
    CDStruct_798fd7c0 cellSize__clusterScale__cellPixelSize__omniLightsRange__spotLightsRange__probeLightsRange__lightsBuffer;
    unsigned int lightsBufferLightCount;
    id shadowTexture;
    id iesOrGoboTextures[8];
    id samplerStates[8];
    id areaBuffer;
    unsigned long long areaBufferOffset;
    unsigned long long areaBufferOffsets[8];
};

struct MTLComputeEvaluator {
    id _field1;
    id _field2;
    id _field3;
    int _field4;
};

struct MTLContext {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
};

struct MTLResourceID {
    unsigned long long _field1;
};

struct VFXMTLBlitCommandEncoder {
    id _encoder;
    id _commandBuffer;
};

struct VFXMTLBufferPool;

struct VFXMTLClusterSystem {
    VFXMTLRenderPipeline *clustersCount__tileSize__selectedDebugClusterIndex___debugClusterTilesPipeline;
    VFXMTLRenderPipeline *_debugLightIndicesBufferPipeline;
    VFXMTLRenderPipeline *_debugClusterSlicesPipeline;
    struct __CFXFXProgram *_debugProgram[7];
    struct __CFXMesh *_debugShapes[7];
};

struct VFXMTLComputeCommandEncoder {
    RGCachedComputeCommandEncoder *_encoder;
    id _commandBuffer;
    struct VFXMTLBufferPool *_bufferPool;
    unsigned int _features;
};

struct VFXMTLRenderCommandEncoder {
    unsigned int _field1;
    unsigned char _field2;
    id _field3;
    id _field4;
    struct VFXMTLBufferPool *_field5;
    _Bool _field6;
};

struct VFXWorldBuffer {
    struct float4x4 viewTransform;
    struct float4x4 inverseViewTransform;
    struct float4x4 projectionTransform;
    struct float4x4 viewProjectionTransform;
    struct float4x4 viewToCubeTransform;
    struct float4x4 lastFrameViewProjectionTransform;
    float ambientLightingColor__fogColor__fogParameters__inverseResolution__time;
    float sinTime;
    float cosTime;
    float random01;
    float motionBlurIntensity;
    float environmentIntensity;
    struct float4x4 environmentTransform;
    struct float4x4 inverseProjectionTransform;
    struct float4x4 inverseViewProjectionTransform;
    struct float4x4 nearFar__viewportSize__inverseTransposeViewTransform;
    unsigned int clusterScale__frame;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFArray;

struct __CFData;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned long long _field1;
    _Atomic unsigned long long _field2;
};

struct __CFSet;

struct __CFString;

struct __CFXBlendStates;

struct __CFXDeformerStack;

struct __CFXEngineContext;

struct __CFXEngineNotificationQueue {
    struct __CFRuntimeBase _field1;
    struct __CFDictionary *_field2;
    struct __CFDictionary *_field3;
    struct os_unfair_lock_s _field4;
    double _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
    void *_field9;
};

struct __CFXEnginePipeline;

struct __CFXEngineStats {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    double _field25;
    double _field26;
    double _field27;
    double _field28;
    double _field29;
    double _field30;
    double _field31;
    double _field32;
    double _field33;
    double _field34;
    double _field35;
    double _field36;
    double _field37;
    double _field38;
    double _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    unsigned int _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    double _field57;
    unsigned int _field58;
    double _field59;
    unsigned int _field60;
    double _field61;
    double _field62;
    double _field63;
    double _field64;
    double _field65[60];
    unsigned int _field66;
    double _field67;
    double _field68;
};

struct __CFXEntity {
    struct __CFRuntimeBase _field1;
    void *_field2;
    struct __CFString *_field3;
    struct __CFString *_field4;
    struct __CFDictionary *_field5;
    struct __CFXWorld *_field6;
    long long _field7;
};

struct __CFXFXPass {
    struct __CFRuntimeBase _field1;
    struct __CFString *_field2;
    int _field3;
    int _field4;
    _Bool _field5;
    struct __CFXFXRenderGraph *_field6;
    struct __CFString *_field7;
    struct __CFString *_field8;
    struct __CFString *_field9;
    struct __CFString *_field10;
    _Bool _field11;
    struct __CFXFXProgram *_field12;
    struct __CFXMaterial *_field13;
    struct __CFXBlendStates *_field14;
    struct __CFXRasterizerStates *_field15;
    struct CFXColor4 _field16;
    unsigned char _field17;
    unsigned int _field18;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    struct __CFXRendererElement *_field19;
    unsigned long long _field20;
    unsigned long long _field21;
    struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
        void *_field9;
    } _field22;
    struct {
        CDStruct_ace98575 _field1[8];
        CDStruct_ace98575 _field2;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
    } _field23;
    struct CGPoint _field24;
    float _field25[9];
    CDStruct_183601bc *_field26;
    unsigned int _field27;
    struct __CFXNode *_field28;
    struct __CFXNode *_field29;
    struct __CFArray *_field30;
    struct __CFXNode *_field31;
    unsigned char _field32;
    struct __CFString *_field33;
    struct __CFString *_field34;
    struct __CFString *_field35;
    struct __CFXFXPassInput **_field36;
    long long _field37;
    long long _field38;
    struct __CFDictionary *_field39;
    CDUnknownBlockType _field40;
    CDUnknownBlockType _field41;
    struct __CFDictionary *_field42;
    void *_field43;
};

struct __CFXFXPassInput;

struct __CFXFXPassInstance {
    struct __CFXFXPass *_field1;
    long long _field2;
    struct __CFXFXPassInstance *_field3;
    unsigned char _field4;
    unsigned char _field5;
    _Bool _field6;
    unsigned char _field7;
    unsigned char _field8;
    struct __CFXArray *_field9[16];
    struct __CFXCullingContext {
        struct __CFXEnginePipeline *_field1;
        CDStruct_07f64e32 _field2[16];
        CDStruct_14d5dc5e _field3[16];
        CDStruct_14d5dc5e _field4[16];
        CDStruct_14d5dc5e _field5[16];
        CDStruct_14d5dc5e _field6[16];
        CDStruct_07f64e32 _field7[16];
        CDStruct_14d5dc5e _field8[16];
        CDStruct_14d5dc5e _field9[16];
        CDStruct_14d5dc5e _field10[16];
        CDStruct_14d5dc5e _field11[16];
        MISSING_TYPE *_field12[16];
        CDStruct_14d5dc5e _field13[16];
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
        unsigned char _field17;
        _Bool _field18;
        struct __CFXFXPass *_field19;
        void *_field20;
        struct __CFXNode *_field21;
        struct __CFXNode *_field22;
        struct __CFXNode *_field23;
        _Bool _field24;
        _Bool _field25;
        _Bool _field26;
        _Bool _field27;
        _Bool _field28;
        _Bool _field29;
        _Bool _field30;
        unsigned char _field31;
        unsigned long long _field32;
        unsigned long long _field33;
        void *_field34;
        struct __CFXWorld *_field35;
        struct __CFXEngineContext *_field36;
        double _field37;
        double _field38;
        CDStruct_183601bc _field39;
        CDStruct_14d5dc5e _field40;
        CDStruct_14d5dc5e _field41;
        struct {
            CDStruct_183601bc *_field1;
            unsigned int _field2;
            unsigned int _field3;
        } _field42[16];
        _Bool _field43;
        CDUnknownFunctionPointerType _field44;
    } _field10;
    struct __CFXNode *_field11;
    unsigned short _field12;
    unsigned int _field13;
};

struct __CFXFXProgram {
    struct __CFXEntity _field1;
    unsigned int :1;
    unsigned int :1;
    struct __CFXFXProgramDelegate *_field2;
    struct __CFString *_field3[2];
    struct __CFString *_field4;
    struct __CFString *_field5;
    struct __CFDictionary *_field6;
    struct __CFSet *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    void *_field10;
    unsigned long long _field11;
    unsigned int _field12;
};

struct __CFXFXRenderGraph;

struct __CFXGeometry {
    struct __CFXEntity _field1;
    struct __CFXMesh *_field2;
    struct __CFXMaterial *_field3;
    struct __CFArray *_field4;
    struct __CFSet *_field5;
    struct __CFArray *_field6;
    CDStruct_183601bc *_field7;
    unsigned int :1;
    CDUnknownFunctionPointerType _field8;
    struct {
        unsigned char _field1;
        _Bool _field2;
        struct {
            _Bool _field1;
            unsigned char _field2;
            unsigned char _field3;
            unsigned char _field4;
        } _field3;
        struct __CFXMeshElement *_field4;
        struct __CFXMeshSource *_field5;
        struct __CFXMesh *_field6;
        void *_field7;
        void *_field8;
    } _field9;
    CDStruct_9b587744 _field10;
    unsigned char _field11;
};

struct __CFXImageProxy {
    struct __CFRuntimeBase _field1;
    struct {
        CDUnknownFunctionPointerType _field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
    } _field2;
    void *_field3;
    unsigned char _field4;
};

struct __CFXMaterial;

struct __CFXMaterialProperty {
    struct __CFRuntimeBase _field1;
    union {
        struct __CFXImage *_field1;
        struct __CFXImageProxy *_field2;
        struct __CFXTexture *_field3;
        void *_field4;
        void *_field5;
        struct CFXColor4 _field6;
        void *_field7;
    } _field2;
    void *_field3;
    long long _field4;
    void *_field5;
    unsigned int :8;
    unsigned int :1;
    unsigned int :4;
    char _field6;
    struct __CFXTextureSampler *_field7;
    CDStruct_183601bc *_field8;
    float _field9;
    int _field10;
    void *_field11;
};

struct __CFXMesh;

struct __CFXMeshElement {
    struct __CFXEntity _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct __CFXMeshElement *_field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned char _field7;
    struct {
        char _field1;
        struct __CFData *_field2;
        unsigned int _field3;
        unsigned int *_field4;
        CDStruct_183601bc *_field5;
        unsigned short _field6;
        unsigned char _field7;
        _Bool _field8;
    } _field8;
    void *_field9;
    float _field10;
    float _field11;
    float _field12;
    void *_field13;
    struct __CFXMeshSource *_field14;
    MISSING_TYPE *_field15[2];
    CDStruct_183601bc *_field16;
    unsigned int _field17;
};

struct __CFXMeshSource {
    struct __CFXGenericSource {
        struct __CFXEntity _field1;
        struct __CFXSourceAccessor *_field2;
        union {
            struct __CFData *_field1;
            void *_field2;
            void *_field3;
        } _field3;
        long long _field4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field1;
    unsigned short _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct __CFXModelTarget {
    struct __CFRuntimeBase _field1;
    void *_field2;
    void *_field3;
    short _field4;
    char _field5;
    unsigned char _field6;
    unsigned char _field7;
    _Bool _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
};

struct __CFXMorpher {
    struct __CFXEntity _field1;
    struct __CFXGeometry *_field2;
    struct __CFXMorph *_field3;
    unsigned int _field4;
    unsigned int _field5;
    float *_field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct __CFXNode {
    struct __CFXEntity _field1;
    struct __CFXNode *_field2;
    struct __CFXNode *_field3;
    struct __CFXNode *_field4;
    int _field5;
    struct {
        CDStruct_14d5dc5e _field1;
        union _field2;
    } _field6;
    CDStruct_183601bc *_field7;
    _Bool _field8;
    float _field9;
    unsigned long long _field10;
    int _field11;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    struct {
        CDStruct_d65e47c4 _field1;
        unsigned int _field2;
    } _field12;
    CDStruct_183601bc *_field13;
    struct __CFXGeometry *_field14;
    struct __CFXDeformerStack *_field15;
    float _field16;
    CDStruct_183601bc _field17;
};

struct __CFXRasterizerStates;

struct __CFXRendererElement {
    unsigned int _field1;
    struct __CFXNode *_field2;
    union {
        struct __CFXRendererElementAttributes {
            struct __CFXGeometry *_field1;
            struct __CFXMesh *_field2;
            struct __CFXMaterial *_field3;
            struct __CFXFXRenderGraph *_field4;
            void *_field5;
        } _field1;
        struct __CFXRendererElementHandler {
            CDStruct_183601bc _field1;
            CDUnknownBlockType _field2;
        } _field2;
    } _field3;
    CDStruct_57e43c6a _field4;
    int _field5;
    unsigned int _field6;
    unsigned int :3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :3;
    unsigned int :1;
    unsigned int :3;
    unsigned int :1;
    unsigned int :1;
};

struct __CFXTextureSampler {
    struct __CFRuntimeBase _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    float _field8;
    unsigned char _field9;
    int _field10;
    unsigned long long _field11;
};

struct __CFXWorld;

struct __zFlags {
    unsigned int providerSuppliesContents:1;
    unsigned int providerSuppliesStreams:1;
    unsigned int providerSuppliesProperties:1;
    unsigned int noContentsCaching:1;
    unsigned int fileOpen:1;
    unsigned int reserved:27;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
};

struct btCollisionShape {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    void *_field3;
};

struct float2x3 {
    MISSING_TYPE *columns[2];
};

struct float4x4 {
    MISSING_TYPE *columns[4];
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*>>> {
    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>**, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*>>> {
        void **__value_;
        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<unsigned long long, VFXMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, VFXMTLLightSetData>>> {
    struct __hash_table<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>>> {
        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>>> {
            struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, void *>*> {
                void *__next_;
            } __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, VFXMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> {
            float __value_;
        } __p3_;
    } __table_;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    CDUnknownBlockType _field4;
    _Bool _field5;
    _Bool _field6;
    _Bool _field7;
    id _field8;
} CDStruct_845c4289;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
} CDStruct_157d85a6;

typedef struct {
    _Bool _field1;
    _Bool _field2;
    _Bool _field3;
    _Bool _field4;
} CDStruct_8024420c;

typedef struct {
    _Bool _field1;
    _Bool _field2;
} CDStruct_3d581f42;

typedef struct {
    _Bool isActive;
    unsigned long long bufferAttributeFormat;
    unsigned long long bufferAttributeOffset;
    unsigned long long bufferLayoutStride;
} CDStruct_8602b176;

typedef struct {
    _Bool _field1;
} CDStruct_b31ca263;

typedef struct {
    unsigned char renderSliceIndex;
    unsigned char eyeCount;
    unsigned char viewMapping;
    unsigned char multiVertexOutputStreamGenerator;
    _Bool isMainPass;
} CDStruct_c218849e;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
} CDStruct_a06f635e;

typedef struct {
    unsigned char format;
    unsigned char sampleCount;
    unsigned char textureUsage;
    unsigned int renderToTexture:1;
    unsigned int forceTextureRect:1;
    unsigned int viewportDependant:1;
    unsigned int renderToIOSurface:1;
    unsigned int mipmapped:1;
    unsigned int textureCube:1;
    unsigned char padding[4];
} CDStruct_ace98575;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned short _field1;
    unsigned short _field2;
} CDStruct_d65e47c4;

typedef struct {
    MISSING_TYPE *_field1[2];
} CDStruct_a7a0fb92;

typedef struct {
    MISSING_TYPE *_field1[3];
} CDStruct_d80e62f2;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    MISSING_TYPE *screenResolution__worldPlanes[6];
} CDStruct_4c2781bd;

typedef struct {
    unsigned char _field1[8];
} CDStruct_57e43c6a;

typedef struct {
    unsigned long long colorFormat[8];
    unsigned long long depthFormat;
    unsigned long long stencilFormat;
    unsigned char sampleCount;
} CDStruct_8f3d16ac;

typedef struct {
    char *memory;
    id buffer;
    unsigned long long offset;
} CDStruct_798fd7c0;

typedef struct {
    unsigned int :2;
    unsigned int :2;
    unsigned int :2;
    unsigned int :1;
} CDStruct_9fd556a9;

typedef struct {
    char vertexIndex;
    char fragmentIndex;
} CDStruct_21854d8c;

typedef struct {
    double originX;
    double originY;
    double width;
    double height;
    double znear;
    double zfar;
} CDStruct_4b2885c7;

typedef struct {
    float _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
} CDStruct_a37fce9e;

typedef struct {
    float edgeTessellationFactor;
    float insideTessellationFactor;
} CDStruct_6e663ddf;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    id _field2;
    CDStruct_183601bc *_field3;
    unsigned int _field4;
    _Bool _field5;
} CDStruct_0b08fa6a;

typedef struct {
    NSMapTable *registry;
    struct os_unfair_lock_s lock;
} CDStruct_670bd187;

typedef struct {
    unsigned int _field1;
    struct __CFXMesh *_field2;
    struct __CFXMeshSource *_field3;
    struct __CFXMeshSource *_field4;
    unsigned long long _field5;
} CDStruct_2893edbc;

typedef struct {
    CDStruct_183601bc _field1[6];
} CDStruct_07f64e32;

typedef struct {
    struct __CFXEnginePipeline *_field1;
    struct __CFXEngineContext *_field2;
    struct __CFXFXPassInstance *_field3;
    void *_field4;
    unsigned long long _field5;
    struct __CFXNode *_field6;
    _Bool _field7;
    _Bool _field8;
    _Bool _field9;
    _Bool _field10;
} CDStruct_e0207beb;

typedef struct {
    struct __CFXFXProgram *_field1;
    struct __CFXMaterial *_field2;
    struct __CFXGeometry *_field3;
    struct __CFXFXPass *_field4;
    struct __CFXFXPass *_field5;
    id _field6;
    struct __CFXBlendStates *_field7;
    struct __CFXNode *_field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    id _field14;
    struct {
        unsigned char _field1;
        CDUnknownBlockType _field2;
    } _field15;
    unsigned long long _field16;
} CDStruct_5ad7ba6b;

typedef struct {
    struct __CFXFXProgram *_field1;
    struct __CFXMaterial *_field2;
    struct __CFXGeometry *_field3;
    struct __CFXNode *_field4;
    struct __CFXMesh *_field5;
    struct __CFXMeshElement *_field6;
    CDStruct_57e43c6a _field7;
    struct __CFXFXPass *_field8;
    unsigned int *_field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    unsigned int :3;
} CDStruct_8b09f293;

typedef struct {
    struct __CFXMesh *_field1;
    id _field2;
    struct __CFXMeshElement *_field3;
    id _field4;
    unsigned int _field5;
    id _field6;
    unsigned char _field7;
} CDStruct_531ae8f1;

typedef struct {
    struct __vfx_counters *_field1;
} CDStruct_97a62ed9;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

typedef struct {
    CDStruct_14d5dc5e modelViewTransform;
    CDStruct_14d5dc5e modelViewProjectionTransform;
    CDStruct_14d5dc5e projectionTransform;
} CDStruct_c6fc9200;

typedef struct {
    unsigned char type;
    float tessellationFactorScale;
    unsigned int tessellationPartitionMode;
    unsigned char tessellationSmoothingMode;
    union {
        CDStruct_6e663ddf uniform;
        struct {
            float projectedEdgeLength;
        } screenSpaceAdaptive;
        struct {
            float maximumEdgeLength;
        } constrainedEdgeLength;
        struct {
            unsigned char tessellationLevel;
            unsigned int allowSingleCreasePatch:1;
            unsigned int useScreenSpaceTessellation:1;
        } subdivisionSurface;
    } parameters;
} CDStruct_9b587744;

typedef struct {
    CDStruct_5ad7ba6b _field1;
    id _field2;
    CDStruct_8f3d16ac _field3;
    struct __CFXBlendStates *_field4;
    unsigned long long _field5[8];
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    CDUnknownBlockType _field10;
    unsigned char _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
} CDStruct_f7ef3f19;

