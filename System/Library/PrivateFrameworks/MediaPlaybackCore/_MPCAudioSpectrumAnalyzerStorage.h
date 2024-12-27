//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MPCAudioSpectrumAnalyzerStorage : NSObject
{
    float *_intermediateBuffer;	// 8 = 0x8
    struct DSPSplitComplex _fftBuffer;	// 16 = 0x10
    struct OpaqueFFTSetup *_fftSetup;	// 32 = 0x20
    _Bool _processing;	// 40 = 0x28
    float _sampleRate;	// 44 = 0x2c
    long long _maxNumberOfFrames;	// 48 = 0x30
    long long _halfN;	// 56 = 0x38
    long long _log2N;	// 64 = 0x40
}

@property(nonatomic) long long log2N; // @synthesize log2N=_log2N;
@property(nonatomic) long long halfN; // @synthesize halfN=_halfN;
@property(nonatomic) long long maxNumberOfFrames; // @synthesize maxNumberOfFrames=_maxNumberOfFrames;
@property(nonatomic) float sampleRate; // @synthesize sampleRate=_sampleRate;
- (void)analyzeAudioData:(void *)arg1 numberFrames:(unsigned int)arg2 observers:(id)arg3;	// IMP=0x0000000000106e69
- (void)analyzeFrequencies:(struct AudioBufferList *)arg1 numberFrames:(unsigned long long)arg2 observers:(id)arg3;	// IMP=0x0000000000106d92
- (void)_freeBuffers;	// IMP=0x0000000000106d56
- (void)_destroyFFTSetup;	// IMP=0x0000000000106d30
- (void)_prepareBuffers;	// IMP=0x0000000000106cdb
- (void)dealloc;	// IMP=0x0000000000106c88
- (id)initWithMaximumNumberOfFrames:(long long)arg1 sampleRate:(float)arg2;	// IMP=0x0000000000106be9

@end

