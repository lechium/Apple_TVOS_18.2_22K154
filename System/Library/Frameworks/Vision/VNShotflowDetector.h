//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNShotflowNetwork;

__attribute__((visibility("hidden")))
@interface VNShotflowDetector : NSObject
{
    float _nmsThreshold;	// 8 = 0x8
    VNShotflowNetwork *_network;	// 16 = 0x10
    float _osfsThreshold;	// 24 = 0x18
    float _osfsSizeRatio;	// 28 = 0x1c
    float _olmcsThreshold;	// 32 = 0x20
    int _olmcsMergeCountDelta;	// 36 = 0x24
    float _smartThreshold;	// 40 = 0x28
    float _smartDistanceFactor;	// 44 = 0x2c
}

+ (struct CGSize)getSuggestedImageSize:(struct CGSize)arg1;	// IMP=0x004000000026a112
+ (float)networkThreshold;	// IMP=0x004000000026a104
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2;	// IMP=0x004000000026a058
+ (id)processingDeviceDetectorWithEspressoNetwork:(CDStruct_2bc666a5)arg1 espressoPlan:(void *)arg2 networkThreshold:(float)arg3;	// IMP=0x0040000000269fb1
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4;	// IMP=0x0040000000269ed4
+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5;	// IMP=0x0040000000269e04
+ (id)supportedLabelKeys;	// IMP=0x0040000000269d04
+ (float)inputImageAspectRatio;	// IMP=0x0040000000269cd9
+ (float)inputImageMaxDimension;	// IMP=0x0040000000269cae
+ (float)inputImageMinDimension;	// IMP=0x0040000000269c83
+ (struct CGSize)inputImageSize;	// IMP=0x0040000000269c58
+ (id)modelName;	// IMP=0x0040000000269c2d
+ (id)inputLayerName;	// IMP=0x0040000000269c02
- (void).cxx_destruct;	// IMP=0x0000000000269b4d
@property(nonatomic) float smartDistanceFactor; // @synthesize smartDistanceFactor=_smartDistanceFactor;
@property(nonatomic) float smartThreshold; // @synthesize smartThreshold=_smartThreshold;
@property(nonatomic) int olmcsMergeCountDelta; // @synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta;
@property(nonatomic) float olmcsThreshold; // @synthesize olmcsThreshold=_olmcsThreshold;
@property(nonatomic) float osfsSizeRatio; // @synthesize osfsSizeRatio=_osfsSizeRatio;
@property(nonatomic) float osfsThreshold; // @synthesize osfsThreshold=_osfsThreshold;
@property(nonatomic) float nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
- (id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000002697d1
- (id)detectAndProcessObjects:(const struct vImage_Buffer *)arg1 filterThresholds:(id)arg2 inputIsBGR:(_Bool)arg3;	// IMP=0x00000000002696df
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 filterThresholds:(id)arg4;	// IMP=0x00000000002691e5
- (id)detect:(const struct vImage_Buffer *)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x00000000002691b4
- (id)filterBoxes:(id)arg1 usingThresholds:(id)arg2;	// IMP=0x0000000000268fcb
- (id)sortBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x0000000000268e15
- (id)nmsBoxes:(id)arg1 usingThresholds:(id)arg2;	// IMP=0x0000000000268de6
- (id)smartMergeBoxes:(id)arg1;	// IMP=0x0000000000268200
- (id)mergeBoxes:(id)arg1;	// IMP=0x0000000000267b8f
- (id)overlappingLowMergeCountSuppression:(id)arg1;	// IMP=0x0000000000267837
- (id)overlappingSmallFacesSuppression:(id)arg1;	// IMP=0x000000000026750e
@property(nonatomic) float threshold;
- (id)initWithNetwork:(id)arg1;	// IMP=0x0000000000267431

@end

