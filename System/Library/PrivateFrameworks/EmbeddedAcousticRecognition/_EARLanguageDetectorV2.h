//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, _EARLanguageDetectorV2RequestOptions;
@protocol OS_dispatch_queue, _EARLanguageDetectorV2Delegate;

@interface _EARLanguageDetectorV2 : NSObject
{
    struct shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;	// 8 = 0x8
    struct SystemConfig _sysConfig;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_lidQueue;	// 1568 = 0x620
    struct shared_ptr<quasar::RecogAudioBuffer> _audioBuffer;	// 1576 = 0x628
    NSArray *_supportedLocales;	// 1592 = 0x638
    float _englishThreshold;	// 1600 = 0x640
    _EARLanguageDetectorV2RequestOptions *_requestOptions;	// 1608 = 0x648
    id <_EARLanguageDetectorV2Delegate> _lidDelegate;	// 1616 = 0x650
}

+ (void)initialize;	// IMP=0x006000000025b7ea
- (id).cxx_construct;	// IMP=0x000000000025cbe4
- (void).cxx_destruct;	// IMP=0x000000000025cb7e
@property(nonatomic) __weak id <_EARLanguageDetectorV2Delegate> lidDelegate; // @synthesize lidDelegate=_lidDelegate;
- (void)_startComputeTask;	// IMP=0x000000000025c482
- (_Bool)shouldReportResults:(unsigned long long)arg1 reportingFrequency:(BOOL)arg2;	// IMP=0x000000000025c462
- (id)languageDetectorV2Result:(id)arg1;	// IMP=0x000000000025c0f8
- (id)earLIDScores:(void *)arg1;	// IMP=0x000000000025bfbd
- (id)startRequestWithSamplingRate:(unsigned long long)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000025bf28
- (id)startRequestWithSamplingRate:(unsigned long long)arg1 requestOptions:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000025bc5c
- (id)supportedLocales;	// IMP=0x000000000025bc4b
- (void)dealloc;	// IMP=0x000000000025bb7c
- (id)initWithConfigFile:(id)arg1;	// IMP=0x000000000025b812

@end

