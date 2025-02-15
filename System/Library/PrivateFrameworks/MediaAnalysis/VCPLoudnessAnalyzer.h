//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPLoudnessAnalyzer : NSObject
{
    AVAudioPCMBuffer *_pcmBuffer;	// 8 = 0x8
    long long _framePosition;	// 16 = 0x10
    struct LkFsMeasure *_loudnessAnalyzer;	// 24 = 0x18
    struct CAStreamBasicDescription *_processFormat;	// 32 = 0x20
    float _sampleRate;	// 40 = 0x28
    struct vector<double, std::allocator<double>> _peakValues;	// 48 = 0x30
    struct vector<double, std::allocator<double>> _momentaryEnergyValues;	// 72 = 0x48
    vector_8ca568ff _loudnessSampleBuffer;	// 96 = 0x60
    NSMutableArray *_loudnessResults;	// 120 = 0x78
    unsigned int _samplesFor100ms;	// 128 = 0x80
    struct AUOutputBL *_samplesForProcessingBufferList;	// 136 = 0x88
}

- (id).cxx_construct;	// IMP=0x000000000016bb25
- (void).cxx_destruct;	// IMP=0x000000000016bac7
- (id)results;	// IMP=0x000000000016ba51
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x000000000016b565
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x000000000016b248
- (void)dealloc;	// IMP=0x000000000016b1d0
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;	// IMP=0x000000000016b063
- (id)init;	// IMP=0x000000000016afbe

@end

