//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SuddenChangeParameters, VCRateControlServerBag;

__attribute__((visibility("hidden")))
@interface VCRateControlBandwidthEstimator : NSObject
{
    unsigned int _totalBytesInProbingSequence;	// 8 = 0x8
    unsigned int _totalPacketsInProbingSequence;	// 12 = 0xc
    double _lastPacketInProbingSequenceArrivalTime;	// 16 = 0x10
    double _referencePacketArrivalTime;	// 24 = 0x18
    double _earlyProbingPacketArrivalTime;	// 32 = 0x20
    unsigned int _earlyBytesInProbingSequence;	// 40 = 0x28
    unsigned int _earlyPacketsInProbingSequence;	// 44 = 0x2c
    unsigned int _referencePacketDataSize;	// 48 = 0x30
    _Bool _isInitialized;	// 52 = 0x34
    _Bool _isFirstBWEstimationReleased;	// 53 = 0x35
    unsigned int _lastProbingSequenceTimestamp;	// 56 = 0x38
    unsigned int _lastProbingSequenceReferenceTimestamp;	// 60 = 0x3c
    double _firstDivergeTime;	// 64 = 0x40
    int _bandwidthDivergeCount;	// 72 = 0x48
    int _suddenChangeBandwidthBufferIndex;	// 76 = 0x4c
    double _suddenChangeBandwidthBuffer[30];	// 80 = 0x50
    unsigned int _overRangePacketsCount;	// 320 = 0x140
    double _totalBandwidth;	// 328 = 0x148
    SuddenChangeParameters *_suddenChangeParameters;	// 336 = 0x150
    unsigned int _minPacketsCount;	// 344 = 0x158
    double _minEstimationWindowDuration;	// 352 = 0x160
    double _maxDetectableBandwidth;	// 360 = 0x168
    unsigned int _maxOverRangePacketsCount;	// 368 = 0x170
    double _estimatedBandwidth;	// 376 = 0x178
    double _estimatedBandwidthUncapped;	// 384 = 0x180
    unsigned int _radioAccessTechnology;	// 392 = 0x188
    unsigned int _mode;	// 396 = 0x18c
    int _bandwidthEstimationState;	// 400 = 0x190
    _Bool _fastSuddenBandwidthDetectionEnabled;	// 404 = 0x194
    VCRateControlServerBag *_serverBag;	// 408 = 0x198
    unsigned int _minProbingSequenceSize;	// 416 = 0x1a0
    void *_logBWEDump;	// 424 = 0x1a8
    unsigned int _maxBitrate;	// 432 = 0x1b0
}

@property(nonatomic) double estimatedBandwidthUncapped; // @synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped;
@property(nonatomic) double estimatedBandwidth; // @synthesize estimatedBandwidth=_estimatedBandwidth;
@property(readonly, nonatomic) double lastProbingArrivalTime; // @synthesize lastProbingArrivalTime=_referencePacketArrivalTime;
@property(retain, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) _Bool fastSuddenBandwidthDetectionEnabled; // @synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled;
@property(readonly, nonatomic) int bandwidthEstimationState; // @synthesize bandwidthEstimationState=_bandwidthEstimationState;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
- (void)enableBWELogDump:(void *)arg1;	// IMP=0x00000000003e4bcd
- (void)setMaxBitrateForBandwidthEstimator:(unsigned int)arg1;	// IMP=0x00000000003e3797
- (void)dealloc;	// IMP=0x00000000003e3724
- (id)init;	// IMP=0x00000000003e3672

@end

