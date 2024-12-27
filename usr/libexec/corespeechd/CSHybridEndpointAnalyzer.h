//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSASRFeatures, CSAsset, CSAudioRecordContext, MISSING_TYPE, NSDate, NSMutableArray, NSString, OSDAnalyzer, OSDFeatures, _EAREndpointer;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSHybridEndpointAnalyzer : NSObject
{
    _Bool _saveSamplesSeenInReset;	// 8 = 0x8
    _Bool _canProcessCurrentRequest;	// 9 = 0x9
    _Bool _isAnchorTimeBuffered;	// 10 = 0xa
    _Bool _isRequestTimeout;	// 11 = 0xb
    _Bool _didAddAudio;	// 12 = 0xc
    _Bool _epResult;	// 13 = 0xd
    _Bool _didReceiveASRFeatures;	// 14 = 0xe
    _Bool _useDefaultASRFeaturesOnClientLag;	// 15 = 0xf
    _Bool _didCommunicateEndpoint;	// 16 = 0x10
    _Bool _didNotifyTwoShot;	// 17 = 0x11
    _Bool _speechEndpointDetected;	// 18 = 0x12
    _Bool _didTimestampFirstAudioPacket;	// 19 = 0x13
    _Bool _recordingDidStop;	// 20 = 0x14
    _Bool _didDetectSpeech;	// 21 = 0x15
    float _lastEndpointPosterior;	// 24 = 0x18
    id <CSEndpointAnalyzerDelegate> _delegate;	// 32 = 0x20
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;	// 40 = 0x28
    unsigned long long _activeChannel;	// 48 = 0x30
    NSString *_mhId;	// 56 = 0x38
    long long _endpointStyle;	// 64 = 0x40
    double _startWaitTime;	// 72 = 0x48
    double _endWaitTime;	// 80 = 0x50
    double _interspeechWaitTime;	// 88 = 0x58
    double _delay;	// 96 = 0x60
    double _automaticEndpointingSuspensionEndTime;	// 104 = 0x68
    double _minimumDurationForEndpointer;	// 112 = 0x70
    CSAsset *_currentAsset;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_apQueue;	// 128 = 0x80
    unsigned long long _numSamplesProcessed;	// 136 = 0x88
    unsigned long long _numSamplesProcessedBeforeAnchorTime;	// 144 = 0x90
    unsigned long long _anchorMachAbsTime;	// 152 = 0x98
    OSDAnalyzer *_osdAnalyzer;	// 160 = 0xa0
    OSDFeatures *_osdFeaturesAtEndpoint;	// 168 = 0xa8
    _EAREndpointer *_hybridClassifier;	// 176 = 0xb0
    NSString *_endpointerModelVersion;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_asrFeaturesQueue;	// 192 = 0xc0
    CSASRFeatures *_lastKnownASRFeatures;	// 200 = 0xc8
    MISSING_TYPE *_lastKnownOSDFeatures;	// 208 = 0xd0
    NSMutableArray *_asrFeatureLatencies;	// 216 = 0xd8
    double _lastKnownASRFeatureLatency;	// 224 = 0xe0
    double _asrFeaturesWarmupLatency;	// 232 = 0xe8
    NSDate *_lastASRFeatureTimestamp;	// 240 = 0xf0
    double _clientLagThresholdMs;	// 248 = 0xf8
    double _clampedASRFeatureLatencyMsForClientLag;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;	// 264 = 0x108
    double _lastReportedEndpointTimeMs;	// 272 = 0x110
    double _processedAudioInSeconds;	// 280 = 0x118
    NSObject<OS_dispatch_queue> *_stateSerialQueue;	// 288 = 0x120
    unsigned long long _currentRequestSampleRate;	// 296 = 0x128
    double _vtExtraAudioAtStartInMs;	// 304 = 0x130
    unsigned long long _vtEndInSampleCount;	// 312 = 0x138
    double _hepAudioOriginInMs;	// 320 = 0x140
    double _twoShotSilenceThresholdInMs;	// 328 = 0x148
    CSAudioRecordContext *_recordContext;	// 336 = 0x150
    NSDate *_firstAudioPacketTimestamp;	// 344 = 0x158
    double _firstAudioSampleSensorTimestamp;	// 352 = 0x160
    NSObject<OS_dispatch_queue> *_osdQueue;	// 360 = 0x168
    double _postVoiceTriggerSilence;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x00200000000696c0
@property(nonatomic) double postVoiceTriggerSilence; // @synthesize postVoiceTriggerSilence=_postVoiceTriggerSilence;
@property(nonatomic) _Bool didDetectSpeech; // @synthesize didDetectSpeech=_didDetectSpeech;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // @synthesize osdQueue=_osdQueue;
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) _Bool speechEndpointDetected; // @synthesize speechEndpointDetected=_speechEndpointDetected;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(nonatomic) _Bool didNotifyTwoShot; // @synthesize didNotifyTwoShot=_didNotifyTwoShot;
@property(nonatomic) double twoShotSilenceThresholdInMs; // @synthesize twoShotSilenceThresholdInMs=_twoShotSilenceThresholdInMs;
@property(nonatomic) double hepAudioOriginInMs; // @synthesize hepAudioOriginInMs=_hepAudioOriginInMs;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(nonatomic) _Bool didCommunicateEndpoint; // @synthesize didCommunicateEndpoint=_didCommunicateEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) float lastEndpointPosterior; // @synthesize lastEndpointPosterior=_lastEndpointPosterior;
@property(nonatomic) double processedAudioInSeconds; // @synthesize processedAudioInSeconds=_processedAudioInSeconds;
@property(nonatomic) double lastReportedEndpointTimeMs; // @synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // @synthesize hybridClassifierQueue=_hybridClassifierQueue;
@property(nonatomic) _Bool useDefaultASRFeaturesOnClientLag; // @synthesize useDefaultASRFeaturesOnClientLag=_useDefaultASRFeaturesOnClientLag;
@property(nonatomic) double clampedASRFeatureLatencyMsForClientLag; // @synthesize clampedASRFeatureLatencyMsForClientLag=_clampedASRFeatureLatencyMsForClientLag;
@property(nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property(nonatomic) _Bool didReceiveASRFeatures; // @synthesize didReceiveASRFeatures=_didReceiveASRFeatures;
@property(retain, nonatomic) NSDate *lastASRFeatureTimestamp; // @synthesize lastASRFeatureTimestamp=_lastASRFeatureTimestamp;
@property(nonatomic) double asrFeaturesWarmupLatency; // @synthesize asrFeaturesWarmupLatency=_asrFeaturesWarmupLatency;
@property(nonatomic) _Bool epResult; // @synthesize epResult=_epResult;
@property(nonatomic) double lastKnownASRFeatureLatency; // @synthesize lastKnownASRFeatureLatency=_lastKnownASRFeatureLatency;
@property(retain, nonatomic) NSMutableArray *asrFeatureLatencies; // @synthesize asrFeatureLatencies=_asrFeatureLatencies;
@property(retain, nonatomic) OSDFeatures *lastKnownOSDFeatures; // @synthesize lastKnownOSDFeatures=_lastKnownOSDFeatures;
@property(retain, nonatomic) CSASRFeatures *lastKnownASRFeatures; // @synthesize lastKnownASRFeatures=_lastKnownASRFeatures;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asrFeaturesQueue; // @synthesize asrFeaturesQueue=_asrFeaturesQueue;
@property(retain, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint; // @synthesize osdFeaturesAtEndpoint=_osdFeaturesAtEndpoint;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(nonatomic) _Bool didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) _Bool isRequestTimeout; // @synthesize isRequestTimeout=_isRequestTimeout;
@property(nonatomic) _Bool isAnchorTimeBuffered; // @synthesize isAnchorTimeBuffered=_isAnchorTimeBuffered;
@property(nonatomic) unsigned long long anchorMachAbsTime; // @synthesize anchorMachAbsTime=_anchorMachAbsTime;
@property(nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime; // @synthesize numSamplesProcessedBeforeAnchorTime=_numSamplesProcessedBeforeAnchorTime;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(nonatomic) _Bool canProcessCurrentRequest; // @synthesize canProcessCurrentRequest=_canProcessCurrentRequest;
@property(nonatomic) _Bool saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,V_saveSamplesSeenInReset

@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N,V_interspeechWaitTime

@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N,V_endWaitTime

@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) long long endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,&,N,V_mhId

@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> implDelegate; // @synthesize implDelegate=_implDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_multimodalEndpointerEnabled;	// IMP=0x00100000000690f2
- (_Bool)_shouldProvideTwoShotFeedbackWithRecordContext;	// IMP=0x0010000000069091
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;	// IMP=0x0010000000068dbb
- (void)_updateAssetWithCurrentLanguage;	// IMP=0x0010000000068d46
- (void)_updateAssetWithLanguage:(id)arg1;	// IMP=0x0010000000068cb6
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;	// IMP=0x0000000000068c20
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;	// IMP=0x0010000000068b63
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
- (void)reset;	// IMP=0x0010000000068b4b
- (void)_readParametersFromHEPAsset:(id)arg1;	// IMP=0x0010000000068abb
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 disableRCSelection:(_Bool)arg3;	// IMP=0x0010000000068693
- (long long)fetchCurrentEndpointerOperationMode;	// IMP=0x001000000006868b
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x0010000000068685
- (void)stopEndpointer;	// IMP=0x00100000000685ef
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x0010000000068547
- (void)terminateProcessing;	// IMP=0x00100000000684f5
- (void)preheat;	// IMP=0x00100000000684ef
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;	// IMP=0x001000000006845e
- (void)logFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000683a4
- (void)_emitEndpointDetectedEventWithEndpointTimeMs:(double)arg1 endpointBufferHostTime:(unsigned long long)arg2 endpointerFeatures:(id)arg3 endpointerDecisionLagInNs:(double)arg4 extraDelayMs:(unsigned long long)arg5 endpointScore:(double)arg6 asrFeaturesLatencies:(id)arg7;	// IMP=0x0010000000068393
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x0010000000067e2d
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067d8d
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x0010000000067bc2
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x0010000000067b19
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x0010000000067a6c
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x0010000000067863
- (void)_loadAndSetupEndpointerAssetIfNecessary;	// IMP=0x0010000000067530
- (id)_getSerialQueueWithName:(id)arg1 targetQueue:(id)arg2;	// IMP=0x00100000000674a7
- (id)init;	// IMP=0x0010000000066e26

// Remaining properties
@property(nonatomic) double bypassSamples;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

