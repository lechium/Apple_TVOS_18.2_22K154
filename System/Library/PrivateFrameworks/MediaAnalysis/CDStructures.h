//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AUOutputBL {
    struct CAStreamBasicDescription _field1;
    char *_field2;
    struct AudioBufferList *_field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioBufferList {
    unsigned int mNumberBuffers;
    struct AudioBuffer mBuffers[1];
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioTimeStamp {
    double mSampleTime;
    unsigned long long mHostTime;
    double mRateScalar;
    unsigned long long mWordClockTime;
    struct SMPTETime mSMPTETime;
    unsigned int mFlags;
    unsigned int mReserved;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct CF<CGImage *> {
    struct CGImage *value_;
};

struct CF<CGImageDestination *> {
    struct CGImageDestination *value_;
};

struct CF<CMPhotoCompressionSession *> {
    struct CMPhotoCompressionSession *value_;
};

struct CF<CMPhotoDecompressionContainer *> {
    struct CMPhotoDecompressionContainer *value_;
};

struct CF<CMPhotoDecompressionSession *> {
    struct CMPhotoDecompressionSession *value_;
};

struct CF<OpaqueVTDecompressionSession *> {
    struct OpaqueVTDecompressionSession *value_;
};

struct CF<OpaqueVTPixelTransferSession *> {
    struct OpaqueVTPixelTransferSession *value_;
};

struct CF<__CVBuffer *> {
    struct __CVBuffer *value_;
};

struct CF<__CVPixelBufferPool *> {
    struct __CVPixelBufferPool *value_;
};

struct CF<const opaqueCMFormatDescription *> {
    struct opaqueCMFormatDescription *value_;
};

struct CF<opaqueCMSampleBuffer *> {
    struct opaqueCMSampleBuffer *value_;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGImage;

struct CGImageDestination;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct CMPhotoCompressionSession;

struct CMPhotoDecompressionContainer;

struct CMPhotoDecompressionSession;

struct DSPSplitComplex {
    float *realp;
    float *imagp;
};

struct DspLibBiquad;

struct EncodeStats {
    CDUnknownFunctionPointerType *_field1;
    _Bool *_field2;
    _Bool *_field3;
    struct MotionVector *_field4;
    struct MotionVector *_field5;
    struct MotionVector *_field6;
    struct MotionVector *_field7;
    unsigned short *_field8;
    unsigned short *_field9;
    unsigned int *_field10;
    unsigned short *_field11;
    unsigned short *_field12;
    unsigned short *_field13;
    unsigned short *_field14;
    unsigned short *_field15;
    unsigned short *_field16;
    unsigned short *_field17;
    unsigned short *_field18;
    unsigned short *_field19;
    unsigned short *_field20;
    unsigned short *_field21;
    unsigned int _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    int _field26;
    int _field27;
};

struct EncodeStatsHW {
    CDUnknownFunctionPointerType *_field1;
    _Bool *_field2;
    _Bool *_field3;
    struct MotionVector *_field4;
    struct MotionVector *_field5;
    struct MotionVector *_field6;
    struct MotionVector *_field7;
    unsigned short *_field8;
    unsigned short *_field9;
    unsigned int *_field10;
    unsigned short *_field11;
    unsigned short *_field12;
    unsigned short *_field13;
    unsigned short *_field14;
    unsigned short *_field15;
    unsigned short *_field16;
    unsigned short *_field17;
    unsigned short *_field18;
    unsigned short *_field19;
    unsigned short *_field20;
    unsigned short *_field21;
    unsigned int _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    int _field26;
    int _field27;
    int _field28;
    struct OpaqueVTCompressionSession *_field29;
    struct __CFData *_field30;
    CDStruct_1b6d18a9 _field31;
    int _field32;
    int _field33;
    _Bool _field34;
};

struct FigLivePhotoDetectedFaceV1Struct {
    long long _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    int _field6;
    short _field7;
    unsigned short _field8;
};

struct FigLivePhotoMetadata {
    unsigned int _field1;
    struct FigLivePhotoMetadataV1Struct _field2;
};

struct FigLivePhotoMetadataV1Struct {
    float _field1;
    long long _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    char _field9;
    char _field10;
    unsigned short _field11;
    unsigned int _field12;
    struct FigLivePhotoDetectedFaceV1Struct _field13[0];
};

struct Frame {
    int frame_idx_;
    CDStruct_1b6d18a9 timestamp_;
    CDStruct_1b6d18a9 duration_;
    struct Translation ave_motion_;
    struct Translation org_motion_;
    float quality_score_;
    unsigned long long distortion_;
    float distortion_norm_;
    struct Translation motion_change_;
    unsigned int compressed_bytes_;
    _Bool blur_;
    struct Translation acc_var_;
    float texture_;
    struct MotionResult motion_result_;
    float *flow_;
    float interestingness_;
    float obstruction_;
    float colorfulness_score_;
    struct Histogram histogram_;
};

struct FrameBuffer {
    int frame_count_;
    struct Frame buffer_[35];
};

struct HinkleyDetector {
    float sensitivity_;
    float threshold_;
    int min_length_;
    struct HinkleyStats stats_;
};

struct HinkleyStats {
    float upper_;
    float lower_;
    float max_;
    float min_;
};

struct Histogram {
    float extremities_;
    float overexposes_;
    int *histogram_[3];
    int *moments_hist_[2];
};

struct IrisAnalysis {
    float _field1;
    float _field2;
    int _field3;
    int _field4;
    _Bool _field5;
    struct __CFArray *_field6;
};

struct Kernel {
    float *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct LandmarkDetector {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    _Bool _field8;
    float *_field9;
    float *_field10;
    float *_field11;
    int *_field12;
    struct ZPoint *_field13;
    struct RegressionTree *_field14;
    CDUnknownFunctionPointerType _field15;
};

struct LkFsMeasure {
    unsigned int _field1;
    unsigned int _field2;
    long long _field3;
    _Bool _field4;
    unsigned int _field5;
    unsigned int _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    long long _field11;
    long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    float _field16[30][6];
    float *_field17;
    float *_field18;
    float *_field19;
    struct DspLibBiquad *_field20;
    struct DspLibBiquad *_field21;
};

struct MetaDataAnalysis {
    _Bool _field1;
    struct FrameBuffer *_field2;
    struct Translation _field3;
    struct Translation _field4;
};

struct MotionFilter {
    struct FrameBuffer *_field1;
    _Bool _field2;
    _Bool _field3;
};

struct MotionResult {
    float significant_values_[6];
    float confidence_[6];
    float fine_action_score_;
    float action_score_;
    float track_score_;
    float rotation_angle_;
    float subtle_motion_score_;
    _Bool is_stable_;
    int action_blocks_;
    float action_motion_;
    _Bool valid_mb_;
    _Bool valid_submb_;
    int support_size_;
    float residual_var_;
    float gmv_[2];
    array_bb4fff4b motion_param_;
    array_bb4fff4b motion_param_diff_;
    CDStruct_1b6d18a9 duration_;
    float scene_delta_;
    float scene_delta_ratio_;
    struct Vector<ma::Object *> objects_;
    struct Vector<ma::Object *> detect_objects_;
    struct Vector<ma::Object *> imported_objects_;
};

struct MotionVector;

struct OpaqueVTCompressionSession;

struct OpaqueVTDecompressionSession;

struct OpaqueVTPixelRotationSession;

struct OpaqueVTPixelTransferSession;

struct RegressionTree;

struct Rotator {
    struct __CVPixelBufferPool *_field1;
    int _field2;
    int _field3;
    int _field4;
    struct OpaqueVTPixelRotationSession *_field5;
};

struct SMPTETime {
    short mSubframes;
    short mSubframeDivisor;
    unsigned int mCounter;
    unsigned int mType;
    unsigned int mFlags;
    short mHours;
    short mMinutes;
    short mSeconds;
    short mFrames;
};

struct Scaler {
    struct CF<__CVPixelBufferPool *> pool_;
    int width_;
    int height_;
    unsigned int format_;
    struct CF<OpaqueVTPixelTransferSession *> transfer_session_;
};

struct SentencePieceProcessor;

struct Translation {
    float x_;
    float y_;
    float z_;
};

struct Vector<ma::Object *> {
    struct __CFArray *vector_;
};

struct ZPoint;

struct __CFArray;

struct __CVBuffer;

struct __CVPixelBufferPool;

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct array<float, 6UL> {
    float __elems_[6];
};

struct atomic<bool> {
    struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> {
        _Atomic _Bool __a_value;
    } __a_;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> {
        _Atomic int __a_value;
    } __a_;
};

struct mach_timebase_info {
    unsigned int numer;
    unsigned int denom;
};

struct opaqueCMFormatDescription;

struct opaqueCMSampleBuffer;

struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<unsigned long, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::less<unsigned long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct tplTracker_resampler_context;

struct unique_ptr<sentencepiece::SentencePieceProcessor, std::default_delete<sentencepiece::SentencePieceProcessor>> {
    struct __compressed_pair<sentencepiece::SentencePieceProcessor *, std::default_delete<sentencepiece::SentencePieceProcessor>> {
        struct SentencePieceProcessor *__value_;
    } __ptr_;
};

struct vector<VCPEspressoV2Data *, std::allocator<VCPEspressoV2Data *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<VCPEspressoV2Data *__strong *, std::allocator<VCPEspressoV2Data *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> {
    struct __CVBuffer **__begin_;
    struct __CVBuffer **__end_;
    struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> {
        struct __CVBuffer **__value_;
    } __end_cap_;
};

struct vector<dlib::matrix<float, 1, 432>, std::allocator<dlib::matrix<float, 1, 432>>> {
    void *__begin_;
    void *__end_;
    struct __compressed_pair<dlib::matrix<float, 1, 432>*, std::allocator<dlib::matrix<float, 1, 432>>> {
        void *__value_;
    } __end_cap_;
};

struct vector<double, std::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *__value_;
    } __end_cap_;
};

struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<float *, std::allocator<float *>> {
    float **__begin_;
    float **__end_;
    struct __compressed_pair<float **, std::allocator<float *>> {
        float **__value_;
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

struct vector<void *, std::allocator<void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<void **, std::allocator<void *>> {
        void **_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long countOfEligibleFaces;
    unsigned long long countOfFacesPendingToAdd;
    _Bool isClustering;
    _Bool rebuildRequired;
} CDStruct_6069b02b;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    unsigned int *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_9f2792e4;

typedef struct {
    float *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_fae3dc92;

typedef struct {
    void *data;
    void *reserved;
    unsigned long long dim[4];
    unsigned long long stride[4];
    unsigned long long width;
    unsigned long long height;
    unsigned long long channels;
    unsigned long long batch_number;
    unsigned long long sequence_length;
    unsigned long long stride_width;
    unsigned long long stride_height;
    unsigned long long stride_channels;
    unsigned long long stride_batch_number;
    unsigned long long stride_sequence_length;
    int storage_type;
} CDStruct_0a65202a;

typedef struct {
    void *plan;
    int network_index;
} CDStruct_2bc666a5;

typedef struct {
    int channels;
    int height;
    int width;
} CDStruct_d09ae902;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    CDStruct_d09ae902 featureShape[7];
    struct __CVBuffer *feature[7];
} CDStruct_80570e6e;

typedef struct {
    CDStruct_1b6d18a9 start;
    CDStruct_1b6d18a9 duration;
} CDStruct_e83c9415;

// Ambiguous groups
typedef struct {
    unsigned int version:1;
} CDStruct_f20694ce;

typedef struct array<float, 6UL> {
    float __elems_[6];
} array_bb4fff4b;

typedef struct set<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
    struct __tree<unsigned long, std::less<unsigned long>, std::allocator<unsigned long>> {
        void *_field1;
        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *>*>, std::allocator<std::__tree_node<unsigned long, void *>>> {
            struct __tree_end_node<std::__tree_node_base<void *>*> {
                void *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::less<unsigned long>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
} set_a5418947;

typedef struct vector<VCPEspressoV2Data *, std::allocator<VCPEspressoV2Data *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<VCPEspressoV2Data *__strong *, std::allocator<VCPEspressoV2Data *>> {
        id *__value_;
    } __end_cap_;
} vector_38b2178e;

typedef struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_39061748;

typedef struct vector<float *, std::allocator<float *>> {
    float **__begin_;
    float **__end_;
    struct __compressed_pair<float **, std::allocator<float *>> {
        float **__value_;
    } __end_cap_;
} vector_aebc2d99;

typedef struct vector<float, std::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::allocator<float>> {
        float *__value_;
    } __end_cap_;
} vector_8ca568ff;

typedef struct vector<void *, std::allocator<void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<void **, std::allocator<void *>> {
        void **_field1;
    } _field3;
} vector_c187b055;

