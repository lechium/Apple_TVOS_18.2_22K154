//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingCompoundRequest
{
    VNCoreSceneUnderstandingCompoundRequestDetectorConfiguration *_detectorConfiguration;	// 8 = 0x8
}

+ (Class)configurationClass;	// IMP=0x0060000000404596
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;	// IMP=0x006000000040411b
+ (void)_evaluateOriginalVNClassifyCityNatureImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000404051
+ (void)_evaluateOriginalVN6Mb1ME89lyW3HpahkEygIG:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403f87
+ (void)_evaluateOriginalVN5kJNH3eYuyaLxNpZr5Z7zi:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403eb0
+ (void)_evaluateOriginalVNClassifyJunkImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403dd9
+ (void)_evaluateOriginalVNCreateImageFingerprintsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403d0f
+ (void)_evaluateOriginalVNRecognizeObjectsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403b82
+ (void)_evaluateOriginalVNGenerateObjectnessBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403aae
+ (void)_evaluateOriginalVNGenerateAttentionBasedSaliencyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004039d1
+ (void)_evaluateOriginalVNClassifyImageAestheticsRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004038fa
+ (void)_evaluateOriginalVNGenerateImageFeaturePrintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403830
+ (void)_evaluateOriginalVNCreateSceneprintRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403753
+ (void)_evaluateOriginalVNSceneClassificationRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x00600000004035e8
+ (void)_evaluateOriginalVNClassifyImageRequest:(id)arg1 configurations:(id)arg2;	// IMP=0x0060000000403432
- (void).cxx_destruct;	// IMP=0x000000000040341f
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000403188
- (_Bool)allowsCachingOfResults;	// IMP=0x0000000000403180
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;	// IMP=0x00000000004030b1
- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000040304d
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000402c64

@end

