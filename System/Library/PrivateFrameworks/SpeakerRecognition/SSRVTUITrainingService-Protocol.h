//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol SSRVTUITrainingService <NSObject>
- (void)prepareWithCompletion:(void (^)(_Bool))arg1;
- (void)didDetectForceEndPoint;
- (void)setLocaleIdentifier:(NSString *)arg1;
- (void)stopRMS;
- (void)startRMS;
- (void)reset;

@optional
- (void)getAudioSessionID:(void (^)(unsigned int))arg1;
- (void)audioSourceWithCompletion:(void (^)(unsigned long long))arg1;
- (void)voiceProfileWithCompletion:(void (^)(SSRVoiceProfile *))arg1;
- (void)cancelTrainingViaXPCForID:(long long)arg1;
- (void)playSoundEffectWithAudioTone:(int)arg1;
- (void)trainUtteranceViaXPC:(long long)arg1 shouldUseASR:(_Bool)arg2 mhUUID:(NSUUID *)arg3 completionWithResult:(void (^)(CSVTUITrainingResult *, _Bool, id *))arg4;
- (void)trainUtteranceViaXPC:(long long)arg1 shouldUseASR:(_Bool)arg2 completion:(void (^)(long long, int, _Bool, id *))arg3;
- (void)cleanupViaXPCWithCompletion:(void (^)(void))arg1;
- (void)setupWithLocaleID:(NSString *)arg1 appDomain:(NSString *)arg2 siriSharedUserId:(NSString *)arg3;
@end

