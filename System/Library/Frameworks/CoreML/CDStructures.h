//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct IRProgram;

struct IndirectArgumentBufferCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
};

struct MTLTargetDeviceArch {
    unsigned long long _field1;
    unsigned int _field2;
    char *_field3;
};

struct Path {
    struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> m_components;
};

struct _KDBoundingBox {
    struct vector<_KDInterval, std::allocator<_KDInterval>> _intervals;
    unsigned long long _numDimensions;
};

struct _KDInterval;

struct _MLModelInputArchiver;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __shared_weak_count;

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct e5rt_async_event;

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct mutex {
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } __m_;
};

struct net;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<MIL::IRProgram> {
    struct IRProgram *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct unique_ptr<_MLModelInputArchiver, std::default_delete<_MLModelInputArchiver>> {
    struct __compressed_pair<_MLModelInputArchiver *, std::default_delete<_MLModelInputArchiver>> {
        struct _MLModelInputArchiver *__value_;
    } __ptr_;
};

struct unique_ptr<e5rt_async_event, MLE5ObjectDeleter<e5rt_async_event>> {
    struct __compressed_pair<e5rt_async_event *, MLE5ObjectDeleter<e5rt_async_event>> {
        struct e5rt_async_event *__value_;
    } __ptr_;
};

struct vector<_KDInterval, std::allocator<_KDInterval>> {
    struct _KDInterval *__begin_;
    struct _KDInterval *__end_;
    struct __compressed_pair<_KDInterval *, std::allocator<_KDInterval>> {
        struct _KDInterval *__value_;
    } __end_cap_;
};

struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
};

struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
};

struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<unsigned long, float>*, std::allocator<std::pair<unsigned long, float>>> {
        void *_field1;
    } _field3;
};

struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>*, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<unsigned long, std::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
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
    unsigned int _field25;
    unsigned int _field26;
    float _field27;
    float _field28;
    unsigned int _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
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
    unsigned int _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned int _field62;
    unsigned int _field63;
    unsigned long long _field64;
} CDStruct_e1c34685;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
} CDStruct_32a7f38a;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

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
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct {
    _Bool _field1;
    unsigned long long _field2;
    struct *_field3;
} CDStruct_dbc1e4aa;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct shared_ptr<Espresso::net> {
    struct net *__ptr_;
    struct __shared_weak_count *__cntrl_;
} shared_ptr_d082c67d;

typedef struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_8ca568ff;

typedef struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
} vector_cd3186ef;

typedef struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> {
    void *_field1;
    void *_field2;
    struct __compressed_pair<std::pair<unsigned long, float>*, std::allocator<std::pair<unsigned long, float>>> {
        void *_field1;
    } _field3;
} vector_7105b4ee;

typedef struct vector<unsigned long, std::allocator<unsigned long>> {
    unsigned long long *__begin_;
    unsigned long long *__end_;
    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> {
        unsigned long long *__value_;
    } __end_cap_;
} vector_2056c7c2;

