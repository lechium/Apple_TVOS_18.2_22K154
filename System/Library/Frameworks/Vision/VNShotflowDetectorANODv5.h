//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNShotflowDetectorANODv5
{
    float _petFaceThreshold;	// 48 = 0x30
    float _faceBodyDistanceThreshold;	// 52 = 0x34
}

+ (id)filterThresholdsArrayForFilterThresholds:(id)arg1 error:(id *)arg2;	// IMP=0x006000000026e296
+ (id)defaultFilterThresholds;	// IMP=0x006000000026e266
+ (Class)VNShotflowNetworkClass;	// IMP=0x006000000026e255
+ (id)supportedLabelKeys;	// IMP=0x006000000026e1f2
@property(nonatomic) float faceBodyDistanceThreshold; // @synthesize faceBodyDistanceThreshold=_faceBodyDistanceThreshold;
@property(nonatomic) float petFaceThreshold; // @synthesize petFaceThreshold=_petFaceThreshold;
- (id)groupFaceBody:(id)arg1;	// IMP=0x000000000026efa5
- (id)analyzePetFaces:(id)arg1;	// IMP=0x000000000026ec38
- (id)nmsBoxes:(id)arg1 usingThresholds:(id)arg2;	// IMP=0x000000000026e8dc
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x000000000026e807
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 filterThresholds:(id)arg4;	// IMP=0x000000000026e62c
- (id)initWithNetwork:(id)arg1;	// IMP=0x000000000026e5bb

@end

