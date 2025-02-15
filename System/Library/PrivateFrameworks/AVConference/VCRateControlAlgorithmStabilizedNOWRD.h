//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCRateControlSmartBrake;

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmStabilizedNOWRD
{
    unsigned short _echoedTimestamp;	// 5210 = 0x145a
    _Bool _isStable;	// 5212 = 0x145c
    _Bool _shouldRampUpSkipNOWRDStabilization;	// 5213 = 0x145d
    _Bool _abnormalNetworkDetected;	// 5214 = 0x145e
    double _sendBitrateLimitedStartTime;	// 5216 = 0x1460
    double _inVideoBitrate;	// 5224 = 0x1468
    double _outVideoBitrate;	// 5232 = 0x1470
    double _inAudioBitrate;	// 5240 = 0x1478
    double _outAudioBitrate;	// 5248 = 0x1480
    double _basebandNotificationArrivalTime;	// 5256 = 0x1488
    double _basebandNormalizedBDCD;	// 5264 = 0x1490
    double _basebandNormalizedQueuingDelay;	// 5272 = 0x1498
    unsigned int _basebandAverageBitrate;	// 5280 = 0x14a0
    unsigned int _basebandTotalQueueDepth;	// 5284 = 0x14a4
    double _basebandExpectedQueuingDelay;	// 5288 = 0x14a8
    int _basebandRadioTechnology;	// 5296 = 0x14b0
    int _basebandAdditionalTiersForRampUp;	// 5300 = 0x14b4
    _Bool _basebandAdaptationEnabled;	// 5304 = 0x14b8
    _Bool _basebandNotificationFromNWConnection;	// 5305 = 0x14b9
    _Bool _allowRampUpBasedOnBytesInFlight;	// 5306 = 0x14ba
    unsigned int _bytesInFlight;	// 5308 = 0x14bc
    unsigned int _bytesInFlightThreshold;	// 5312 = 0x14c0
    _Bool _bytesInFlightAdaptationEnabled;	// 5316 = 0x14c4
    struct tagVCRateControlSmartBrakeOutput _smartBrakeOutput;	// 5320 = 0x14c8
    double _localRCEventTime;	// 5336 = 0x14d8
    double _lastFeedbackTime;	// 5344 = 0x14e0
    unsigned int _lastFeedbackTargetBitrate;	// 5352 = 0x14e8
    unsigned short _previousTimestamp;	// 5356 = 0x14ec
    unsigned short _queuingDelayTimestamp;	// 5358 = 0x14ee
    unsigned int _receiveTimestamp;	// 5360 = 0x14f0
    unsigned int _timestampWrapAroundCounter;	// 5364 = 0x14f4
    unsigned int _lastRateChangeCounter;	// 5368 = 0x14f8
    unsigned int _newOWRDSampleCollected;	// 5372 = 0x14fc
    _Bool _isRemoteBandwidthEstimationStable;	// 5376 = 0x1500
    struct tagVCRateControlHistoryElement _history[500];	// 5384 = 0x1508
    int _currentHistorySize;	// 25384 = 0x6328
    int _currentHistoryIndex;	// 25388 = 0x632c
    double _previousNOWRD;	// 25392 = 0x6330
    double _firstOWRDFrozenTime;	// 25400 = 0x6338
    double _rampUpFrozenDuration;	// 25408 = 0x6340
    double _extendedRampUpFrozenExitTime;	// 25416 = 0x6348
    double _stabilizationTime;	// 25424 = 0x6350
    double _rateChangeSystemTime;	// 25432 = 0x6358
    double _lastPositiveOWRDTime;	// 25440 = 0x6360
    double _lastAllowRampUpTime;	// 25448 = 0x6368
    _Bool _isRampUpSettling;	// 25456 = 0x6370
    unsigned int _fastRampDownBitrateRange;	// 25460 = 0x6374
    double _rampUpSettleDuration;	// 25464 = 0x6378
    _Bool _shouldSuppressRampDown;	// 25472 = 0x6380
    unsigned int _rampDownSuppressionBitrateThreshold;	// 25476 = 0x6384
    unsigned int _additionalTierForRampDown;	// 25480 = 0x6388
    double _basebandLTEOrGreaterRATSwitchTime;	// 25488 = 0x6390
    _Bool _isWaitingForBasebandRampDown;	// 25496 = 0x6398
    double _lastBasebandRampDownTime;	// 25504 = 0x63a0
    double _lastHighNBDCDTime;	// 25512 = 0x63a8
    unsigned int _packetReceivedVideo;	// 25520 = 0x63b0
    unsigned int _packetBurstLoss;	// 25524 = 0x63b4
    unsigned int _roundTripTimeTick;	// 25528 = 0x63b8
    double _previousRoundTripTime;	// 25536 = 0x63c0
    double _lastNetworkUnstableTime;	// 25544 = 0x63c8
    _Bool _withBTCoex;	// 25552 = 0x63d0
    VCRateControlSmartBrake *_smartBrake;	// 25560 = 0x63d8
    struct tagVCRateControlSmartBrakeInput _smartBrakeInput;	// 25568 = 0x63e0
    double _lastSmartBrakeEngageTime;	// 25592 = 0x63f8
    _Bool _isSmartBrakeCongestionTimeAboveThreshold;	// 25600 = 0x6400
}

- (unsigned int)worstRecentBurstLoss;	// IMP=0x0000000000299689
- (double)worstRecentRoundTripTime;	// IMP=0x000000000029966c
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;	// IMP=0x000000000029964c
- (_Bool)setUpVTable;	// IMP=0x0000000000296e23
- (void)dealloc;	// IMP=0x0000000000296dbe
- (id)init;	// IMP=0x0000000000296d30

@end

