//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSPlainAudioFileWriter, NSArray, NSDate, NSHashTable, NSMutableArray, NSString, OSDAnalyzer;
@protocol OS_dispatch_queue;

@interface CSAttSiriOSDNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _didAddAudio;	// 9 = 0x9
    _Bool _didTimestampFirstAudioPacket;	// 10 = 0xa
    CSAttSiriController *_attSiriController;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSAsset *_currentAsset;	// 56 = 0x38
    NSHashTable *_receivers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_apQueue;	// 72 = 0x48
    unsigned long long _numSamplesProcessed;	// 80 = 0x50
    unsigned long long _numOfChunksReceived;	// 88 = 0x58
    OSDAnalyzer *_osdAnalyzer;	// 96 = 0x60
    CSPlainAudioFileWriter *_audioFileWriter;	// 104 = 0x68
    unsigned long long _currentRequestSampleRate;	// 112 = 0x70
    unsigned long long _vtEndInSampleCount;	// 120 = 0x78
    NSString *_configFile;	// 128 = 0x80
    NSDate *_firstAudioPacketTimestamp;	// 136 = 0x88
    double _firstAudioSampleSensorTimestamp;	// 144 = 0x90
    unsigned long long _firstAudioStartSampleCount;	// 152 = 0x98
    double _frameDurationMs;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_queue;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_osdQueue;	// 176 = 0xb0
    unsigned long long _countOfConsecutiveBoron;	// 184 = 0xb8
    unsigned long long _lastKnownConsecutiveBoronStartSampleCount;	// 192 = 0xc0
    unsigned long long _numOfConsecutiveBoronActivationThreshold;	// 200 = 0xc8
    unsigned long long _osdMode;	// 208 = 0xd0
    CSAsset *_lipMovementVADAsset;	// 216 = 0xd8
    NSMutableArray *_lipMovementSignalDataArray;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x0020000000080733
@property(retain, nonatomic) NSMutableArray *lipMovementSignalDataArray; // @synthesize lipMovementSignalDataArray=_lipMovementSignalDataArray;
@property(retain, nonatomic) CSAsset *lipMovementVADAsset; // @synthesize lipMovementVADAsset=_lipMovementVADAsset;
@property(nonatomic) unsigned long long osdMode; // @synthesize osdMode=_osdMode;
@property(nonatomic) unsigned long long numOfConsecutiveBoronActivationThreshold; // @synthesize numOfConsecutiveBoronActivationThreshold=_numOfConsecutiveBoronActivationThreshold;
@property(nonatomic) unsigned long long lastKnownConsecutiveBoronStartSampleCount; // @synthesize lastKnownConsecutiveBoronStartSampleCount=_lastKnownConsecutiveBoronStartSampleCount;
@property(nonatomic) unsigned long long countOfConsecutiveBoron; // @synthesize countOfConsecutiveBoron=_countOfConsecutiveBoron;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // @synthesize osdQueue=_osdQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) double frameDurationMs; // @synthesize frameDurationMs=_frameDurationMs;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) unsigned long long firstAudioStartSampleCount; // @synthesize firstAudioStartSampleCount=_firstAudioStartSampleCount;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(nonatomic) _Bool didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) unsigned long long numOfChunksReceived; // @synthesize numOfChunksReceived=_numOfChunksReceived;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
- (_Bool)hadSignalsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00100000000803b5
- (void)attSiriNode:(id)arg1 faceTrackingDataUpdate:(id)arg2 atMachAbsTime:(unsigned long long)arg3;	// IMP=0x0010000000080312
- (void)attSiriNode:(id)arg1 didUpdateGazeState:(unsigned long long)arg2;	// IMP=0x001000000008030c
- (void)osdAnalyzer:(id)arg1 didUpdateVisualSpeechProbability:(double)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;	// IMP=0x0010000000080306
- (void)osdAnalyzer:(id)arg1 didDetectEndOfSpeechAt:(double)arg2;	// IMP=0x00100000000802b3
- (void)osdAnalyzer:(id)arg1 didDetectStartOfSpeechAt:(double)arg2;	// IMP=0x0010000000080260
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x00100000000800ed
- (void)endpointerAssetManagerDidUpdateAsset:(id)arg1;	// IMP=0x00100000000800e7
- (void)endpointerAssetManagerDidUpdateOSDAsset:(id)arg1;	// IMP=0x001000000008005a
- (unsigned long long)fetchLastKnownConsecutiveBoronStartSampleCount;	// IMP=0x001000000007ffce
- (unsigned long long)audioStartSampleCount;	// IMP=0x001000000007ff3f
- (void)resetForNewRequestWithRecordContext:(id)arg1 endpointerSettings:(id)arg2 voiceTriggerInfo:(id)arg3 osdMode:(unsigned long long)arg4;	// IMP=0x001000000007fdf0
- (void)resetForNewRequestWithRecordContext:(id)arg1 endpointerSettings:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x001000000007fddb
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000007fd90
- (void)checkConsecutiveBoronSignalWithAudioChunk:(id)arg1;	// IMP=0x001000000007fb42
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000007f9e0
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000007f9da
- (void)stop;	// IMP=0x001000000007f8ff
- (void)pause;	// IMP=0x001000000007f8f9
- (void)start;	// IMP=0x001000000007f8f3
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000007f863
- (void)addReceiver:(id)arg1;	// IMP=0x001000000007f7d3
- (id)_getSerialQueue:(id)arg1 targetQueue:(id)arg2;	// IMP=0x001000000007f74a
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000007f6fc
- (id)init;	// IMP=0x001000000007f2c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

