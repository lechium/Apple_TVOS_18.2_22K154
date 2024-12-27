//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreEmbeddedSpeechRecognition/NSObject-Protocol.h>

@class AFMultiUserSpeechPackage, AFSpeechInfoPackage, AFSpeechPackage, AFSpeechRecognition, CESRModelProperties, NSArray, NSDictionary, NSError;

@protocol CESRSpeechServiceDelegate <NSObject>
- (oneway void)speechServiceDidProduceEndpointFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(NSArray *)arg4 silencePosterior:(double)arg5 processedAudioDurationInMilliseconds:(long long)arg6 acousticEndpointerScore:(double)arg7;
- (oneway void)speechServiceDidFinishRecognitionWithStatistics:(NSDictionary *)arg1 error:(NSError *)arg2;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(AFSpeechRecognition *)arg1;
- (oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1;
- (oneway void)speechServiceDidSelectRecognitionModelWithModelProperties:(CESRModelProperties *)arg1;

@optional
- (oneway void)speechServiceDidRecognizeVoiceCommandCandidatePackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizeFinalResultCandidatePackage:(AFSpeechPackage *)arg1;
- (oneway void)speechServiceDidRecognizePackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizePartialPackage:(AFSpeechPackage *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizeTokens:(NSArray *)arg1 withMetadata:(AFSpeechInfoPackage *)arg2;
- (oneway void)speechServiceDidRecognizeMultiUserSpeechPackage:(AFMultiUserSpeechPackage *)arg1;
- (oneway void)speechServiceDidProduceLoggablePackage:(AFSpeechPackage *)arg1;
@end

