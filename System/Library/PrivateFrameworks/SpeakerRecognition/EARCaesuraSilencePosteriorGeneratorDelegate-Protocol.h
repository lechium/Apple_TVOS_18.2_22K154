//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class EARCaesuraSilencePosteriorGenerator, EARClientSilenceFeatures;

@protocol EARCaesuraSilencePosteriorGeneratorDelegate <NSObject>
- (void)clientSilenceFeaturesAvailable:(EARClientSilenceFeatures *)arg1;

@optional
- (void)silencePosteriorGeneratorProcessorIsFinished:(EARCaesuraSilencePosteriorGenerator *)arg1;
- (void)silenceDurationEstimateAvailable:(float *)arg1 numEstimates:(unsigned long long)arg2 clientProcessedAudioMs:(float)arg3;
@end

