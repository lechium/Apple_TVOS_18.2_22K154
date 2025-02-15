//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCRedundancyControlAlgorithmVideo : NSObject
{
    unsigned int _redundancyPercentage;	// 8 = 0x8
    double _redundancyInterval;	// 16 = 0x10
    double _packetLossPercentage;	// 24 = 0x18
    double _packetLossPercentageVideo;	// 32 = 0x20
    double _plrEnvelope;	// 40 = 0x28
    _Bool _isNetworkCongested;	// 48 = 0x30
    unsigned int _maxAllowedRedundancyPercentage;	// 52 = 0x34
    unsigned int _burstyLoss[8];	// 56 = 0x38
    unsigned int _burstyLossArraySize;	// 88 = 0x58
    unsigned int _burstyLossArrayIndex;	// 92 = 0x5c
    unsigned int _redundancyMode;	// 96 = 0x60
    unsigned char _mediaControlInfoFECFeedbackVersion;	// 100 = 0x64
    _Atomic _Bool _isRedundancyStrategyResetPending;	// 101 = 0x65
    struct OpaqueVCFECFeedbackAnalyzer *_feedbackAnalyzer;	// 104 = 0x68
    float _offChannelTimeRatio;	// 112 = 0x70
    _Bool _isNWConnectionEnabled;	// 116 = 0x74
    int _freezeReason;	// 120 = 0x78
    int _state;	// 124 = 0x7c
}

@property(readonly, nonatomic) double redundancyInterval; // @synthesize redundancyInterval=_redundancyInterval;
@property(readonly, nonatomic) unsigned int redundancyPercentage; // @synthesize redundancyPercentage=_redundancyPercentage;
@property(nonatomic) _Bool isRedundancyStrategyResetPending;
- (CDStruct_d7e2e0ee)getFecLevelPerFrameSizeVector;	// IMP=0x000000000005f733
- (unsigned int)computeRedundancyWithBurstyLoss;	// IMP=0x000000000005f6eb
- (unsigned int)computeRedundancyWithLossPercentage;	// IMP=0x000000000005f370
- (void)updateBurstyLoss:(unsigned int)arg1;	// IMP=0x000000000005f2a8
- (void)processRCNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005ee8b
- (void)processRTCPPSFBStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005ee3e
- (void)processNWConnectionStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005edc9
- (void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005ed8e
- (void)reset;	// IMP=0x000000000005ecb9
- (void)checkForRedundancyFreeze:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005ec8d
- (void)stateFrozen:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005eb41
- (void)stateRunning:(struct tagVCStatisticsMessage)arg1;	// IMP=0x000000000005e9e9
- (CDStruct_9650830d)setupFeedbackAnalyzerConfig;	// IMP=0x000000000005e808
- (void)dealloc;	// IMP=0x000000000005e79e
- (id)initWithRedundancyControllerMode:(unsigned int)arg1 maxAllowedRedundancyPercentage:(unsigned int)arg2 mediaControlInfoFECFeedbackVersion:(unsigned char)arg3;	// IMP=0x000000000005e625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

