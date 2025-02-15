//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCVideoHardwareDumpCollector;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterDefault
{
    struct tagHANDLE *_videoTransmitterHandle;	// 160 = 0xa0
    unsigned int _audioTimestampRate;	// 168 = 0xa8
    int _transmitterMode;	// 172 = 0xac
    _Bool _canLocalResizePIP;	// 176 = 0xb0
    _Bool _canRemoteResizePIP;	// 177 = 0xb1
    struct CGSize _remoteScreenPortraitAspectRatio;	// 184 = 0xb8
    struct CGSize _remoteScreenLandscapeAspectRatio;	// 200 = 0xc8
    struct CGSize _remoteExpectedPortraitAspectRatio;	// 216 = 0xd8
    struct CGSize _remoteExpectedLandscapeAspectRatio;	// 232 = 0xe8
    double _lastSentVideoHostTime;	// 248 = 0xf8
    VCVideoHardwareDumpCollector *_verificationContext;	// 256 = 0x100
}

+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg1 featureString:(id)arg2;	// IMP=0x001000000026c0ad
+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION *)arg1;	// IMP=0x001000000026c09d
@property(readonly) struct tagHANDLE *videoTransmitterHandle; // @synthesize videoTransmitterHandle=_videoTransmitterHandle;
- (void)setRtxEnabled:(_Bool)arg1;	// IMP=0x000000000026c28e
- (_Bool)isRtxEnabled;	// IMP=0x000000000026c27b
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000026c250
- (void)handleActiveConnectionChangeMultiway:(id)arg1;	// IMP=0x000000000026c24a
- (void)handleActiveConnectionChangeDefault:(id)arg1;	// IMP=0x000000000026c244
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x000000000026c23e
- (void)handleThermalLevelChange:(int)arg1;	// IMP=0x000000000026c238
- (_Bool)setEncodingMode:(int)arg1;	// IMP=0x000000000026c230
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x000000000026c22a
- (void)collectChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x000000000026c1dd
- (void)setIsEndToEndBasedBandwidthProbingEnabled:(_Bool)arg1;	// IMP=0x000000000026c1ca
- (void)setIsServerBasedBandwidthProbingEnabled:(_Bool)arg1;	// IMP=0x000000000026c1b7
- (void)setFECRedundancyVector:(const CDStruct_d7e2e0ee *)arg1;	// IMP=0x000000000026c1b1
- (void)setFECRatio:(double)arg1;	// IMP=0x000000000026c1ab
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;	// IMP=0x000000000026c1a5
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;	// IMP=0x000000000026c19f
- (void)setHighestActiveQualityIndex:(unsigned int)arg1;	// IMP=0x000000000026c199
- (void)setTemporalBitrateArray:(id)arg1;	// IMP=0x000000000026c193
- (void)setTargetBitrate:(unsigned int)arg1;	// IMP=0x000000000026c18d
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;	// IMP=0x000000000026c17a
- (void)generateKeyFrameWithFIRType:(int)arg1;	// IMP=0x000000000026c174
- (void)stopVideo;	// IMP=0x000000000026c097
- (void)startVideo;	// IMP=0x000000000026c091
- (void)setUpAspectRatiosFromFeatureListString:(const char *)arg1;	// IMP=0x000000000026bbbc
- (void)dealloc;	// IMP=0x000000000026bb42
- (void)setUpAspectRatios:(_Bool)arg1;	// IMP=0x000000000026b917
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000026ace4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

