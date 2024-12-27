//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWSampleLogger, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _nextDeadline;	// 16 = 0x10
    _Bool _lastFaceMetadataValid;	// 24 = 0x18
    _Bool _unitTestSampling;	// 25 = 0x19
    int _currentState;	// 28 = 0x1c
    float _lastAttentionScore;	// 32 = 0x20
    float _lastFaceDetectionScore;	// 36 = 0x24
    AWSampleLogger *_sampleLogger;	// 40 = 0x28
    CDUnknownBlockType _stateChangedCallback;	// 48 = 0x30
    CDUnknownBlockType _operationEndableCallback;	// 56 = 0x38
    unsigned long long _samplingSuppressedMask;	// 64 = 0x40
    unsigned long long _lastTriggerTime;	// 72 = 0x48
    unsigned long long _lastPositiveDetectTime;	// 80 = 0x50
    unsigned long long _lastPollTimeoutTime;	// 88 = 0x58
    double _lastPitch;	// 96 = 0x60
    double _lastYaw;	// 104 = 0x68
    double _lastRoll;	// 112 = 0x70
    unsigned long long _lastOrientation;	// 120 = 0x78
    double _lastDistance;	// 128 = 0x80
    unsigned long long _lastFaceState;	// 136 = 0x88
    unsigned long long _lastMetadataType;	// 144 = 0x90
    unsigned long long _lastMotionResult;	// 152 = 0x98
    unsigned long long _lastPersonID;	// 160 = 0xa0
    NSMutableArray *_lastMotionData;	// 168 = 0xa8
    struct CGRect _lastFaceBounds;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000000184b0
@property(retain, nonatomic) NSMutableArray *lastMotionData; // @synthesize lastMotionData=_lastMotionData;
@property(readonly, nonatomic) _Bool unitTestSampling; // @synthesize unitTestSampling=_unitTestSampling;
@property(nonatomic) unsigned long long lastPersonID; // @synthesize lastPersonID=_lastPersonID;
@property(nonatomic) struct CGRect lastFaceBounds; // @synthesize lastFaceBounds=_lastFaceBounds;
@property(nonatomic) float lastFaceDetectionScore; // @synthesize lastFaceDetectionScore=_lastFaceDetectionScore;
@property(nonatomic) float lastAttentionScore; // @synthesize lastAttentionScore=_lastAttentionScore;
@property(nonatomic) unsigned long long lastMotionResult; // @synthesize lastMotionResult=_lastMotionResult;
@property(nonatomic) unsigned long long lastMetadataType; // @synthesize lastMetadataType=_lastMetadataType;
@property(nonatomic) unsigned long long lastFaceState; // @synthesize lastFaceState=_lastFaceState;
@property(nonatomic) double lastDistance; // @synthesize lastDistance=_lastDistance;
@property(nonatomic) unsigned long long lastOrientation; // @synthesize lastOrientation=_lastOrientation;
@property(nonatomic) double lastRoll; // @synthesize lastRoll=_lastRoll;
@property(nonatomic) double lastYaw; // @synthesize lastYaw=_lastYaw;
@property(nonatomic) double lastPitch; // @synthesize lastPitch=_lastPitch;
@property(nonatomic) _Bool lastFaceMetadataValid; // @synthesize lastFaceMetadataValid=_lastFaceMetadataValid;
@property(nonatomic) unsigned long long lastPollTimeoutTime; // @synthesize lastPollTimeoutTime=_lastPollTimeoutTime;
@property(nonatomic) unsigned long long lastPositiveDetectTime; // @synthesize lastPositiveDetectTime=_lastPositiveDetectTime;
@property(nonatomic) unsigned long long lastTriggerTime; // @synthesize lastTriggerTime=_lastTriggerTime;
@property(nonatomic) unsigned long long samplingSuppressedMask; // @synthesize samplingSuppressedMask=_samplingSuppressedMask;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(copy) CDUnknownBlockType operationEndableCallback; // @synthesize operationEndableCallback=_operationEndableCallback;
@property(copy) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;
@property(retain, nonatomic) AWSampleLogger *sampleLogger; // @synthesize sampleLogger=_sampleLogger;
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000181c9
- (void)setCarPlayConnected:(_Bool)arg1;	// IMP=0x00000000000181c0
- (void)setDisplayState:(_Bool)arg1;	// IMP=0x00000000000181b7
- (void)setSmartCoverClosed:(_Bool)arg1;	// IMP=0x00000000000181ae
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2 withOptions:(CDStruct_2a4d9400)arg3;	// IMP=0x00000000000181a5
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;	// IMP=0x000000000001819c
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1 ignoreDisplayState:(_Bool)arg2;	// IMP=0x0000000000018193
- (void)finishDeadlineComputationWithOptions:(CDStruct_2a4d9400)arg1;	// IMP=0x0000000000018136
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;	// IMP=0x00000000000180d2
- (void)startDeadlineComputation;	// IMP=0x00000000000180a1
- (void)setUnitTestMode;	// IMP=0x000000000001807b
- (id)description;	// IMP=0x0000000000017fe4
- (id)init;	// IMP=0x0000000000017f3f

@end

