//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmLowLatencyNOWRD
{
    _Bool _isStable;	// 5210 = 0x145a
    unsigned short _echoedTimestamp;	// 5212 = 0x145c
    unsigned int _maxBurstyLoss;	// 5216 = 0x1460
    unsigned int _actualSendBitrate;	// 5220 = 0x1464
    unsigned int _instantBitrate;	// 5224 = 0x1468
    unsigned int _nwConnectionAvgThroughput;	// 5228 = 0x146c
    double _nwConnectionAvgDelay;	// 5232 = 0x1470
    unsigned int _nwConnectionOverDelayThresholdCount;	// 5240 = 0x1478
    unsigned int _nwConnectionMaxThroughput;	// 5244 = 0x147c
    int _nwConnectionRateTrendSuggestion;	// 5248 = 0x1480
    _Bool _shouldBlockRampUpForNWConnection;	// 5252 = 0x1484
    unsigned int _nwConnectionPacketLossPerFrame;	// 5256 = 0x1488
    unsigned short _previousTimestamp;	// 5260 = 0x148c
    unsigned short _queuingDelayTimestamp;	// 5262 = 0x148e
    unsigned int _receiveTimestamp;	// 5264 = 0x1490
    unsigned int _timestampWrapAroundCounter;	// 5268 = 0x1494
    unsigned int _newOWRDSampleCollected;	// 5272 = 0x1498
    double _previousNOWRD;	// 5280 = 0x14a0
    double _sendBitrateLimitedStartTime;	// 5288 = 0x14a8
    double _sendBitrateStartTime;	// 5296 = 0x14b0
    double _lastSendDataTime;	// 5304 = 0x14b8
    double _lastRampDownTime;	// 5312 = 0x14c0
    double _lastPositiveOWRDTime;	// 5320 = 0x14c8
    _Bool _isRampUpSettling;	// 5328 = 0x14d0
    unsigned int _fastRampDownBitrateRange;	// 5332 = 0x14d4
    double _rampUpSettleDuration;	// 5336 = 0x14d8
    double _rateChangeSystemTime;	// 5344 = 0x14e0
}

- (_Bool)setUpVTable;	// IMP=0x0000000000159feb
- (id)init;	// IMP=0x0000000000159f44

@end

