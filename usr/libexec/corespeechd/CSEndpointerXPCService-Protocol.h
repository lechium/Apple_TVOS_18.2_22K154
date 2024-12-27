//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@protocol CSEndpointerXPCService
- (void)setEndpointerOperationMode:(long long)arg1;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;
- (void)getEndPointAnalyzerTypeWithReply:(void (^)(NSError *, unsigned long long))arg1;
- (void)getPostVoiceTriggerSilenceWithReply:(void (^)(NSError *, double))arg1;
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(void (^)(_Bool, NSArray *))arg2;
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)getEndpointerModelVersionWithReply:(void (^)(NSError *, NSString *))arg1;
- (void)processASRFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(NSArray *)arg4 silencePosterior:(double)arg5 taskName:(NSString *)arg6 processedAudioDurationInMilliseconds:(long long)arg7 acousticEndpointerScore:(double)arg8 fromServer:(_Bool)arg9;
- (void)setActiveChannel:(unsigned long long)arg1;
- (void)setupConnection;
@end

