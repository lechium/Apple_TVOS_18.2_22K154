//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFSpeechInfoPackage, AFSpeechPackage, CSAudioRecordContext, NSArray, NSDictionary, NSError, NSString;

@protocol CSAttSiriSpeechRecognitionReceiver <NSObject>

@optional
- (void)didReceiveStopRecognitionRequest:(NSString *)arg1 stopReason:(unsigned long long)arg2;
- (void)didStartRecognitionRequest:(NSString *)arg1 successfully:(_Bool)arg2 isRecognitionModeClassic:(_Bool)arg3 error:(NSError *)arg4;
- (void)didSelectRecognitionModelWithModelRoot:(NSString *)arg1;
- (void)didPrepareRecognitionWithAudioContext:(CSAudioRecordContext *)arg1 requestId:(NSString *)arg2 mhId:(NSString *)arg3 voiceTriggerInfo:(NSDictionary *)arg4;
- (void)didReceiveStartRecognitionRequest:(NSString *)arg1 taskName:(NSString *)arg2 sharedUserInfo:(NSArray *)arg3;
- (void)didReceivePartialResultPackageWithRequestId:(NSString *)arg1 language:(NSString *)arg2 package:(AFSpeechPackage *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (void)didReceivePartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3 metadata:(AFSpeechInfoPackage *)arg4;
- (void)didReceivePartialResultWithRequestId:(NSString *)arg1 language:(NSString *)arg2 tokens:(NSArray *)arg3;
@end

