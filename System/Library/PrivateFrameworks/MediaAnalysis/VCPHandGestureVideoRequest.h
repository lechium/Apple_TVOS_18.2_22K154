//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, VCPHandGestureClassifier, VCPHandPoseImageRequest;
@protocol OS_dispatch_queue;

@interface VCPHandGestureVideoRequest
{
    VCPHandPoseImageRequest *_poseImageRequest;	// 64 = 0x40
    VCPHandGestureClassifier *_handGestureClassifier;	// 72 = 0x48
    CDStruct_1b6d18a9 _previousTime;	// 80 = 0x50
    float _minTimeInterval;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000010c577
- (void)processBuffer:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000010c290
- (void)updateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000010c007
- (_Bool)updateWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010bfea
- (id)processBuffer:(struct __CVBuffer *)arg1 timestamp:(CDStruct_1b6d18a9)arg2 withOptions:(id)arg3 error:(id *)arg4;	// IMP=0x000000000010ac61
- (id)initWithOptions:(id)arg1;	// IMP=0x000000000010a8f6

@end

