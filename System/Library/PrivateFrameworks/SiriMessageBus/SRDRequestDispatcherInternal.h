//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface SRDRequestDispatcherInternal : NSObject
{
    MISSING_TYPE *isMUXEnabled;	// 8 = 0x8
    MISSING_TYPE *afPreferences;	// 16 = 0x10
    MISSING_TYPE *rdmbQueue;	// 24 = 0x18
    MISSING_TYPE *broker;	// 32 = 0x20
    MISSING_TYPE *messagePublisher;	// 40 = 0x28
    MISSING_TYPE *sessionsManager;	// 48 = 0x30
    MISSING_TYPE *aceCommandDispatcher;	// 56 = 0x38
    MISSING_TYPE *serviceHelper;	// 64 = 0x40
    MISSING_TYPE *instrumentationUtil;	// 72 = 0x48
    MISSING_TYPE *assetLogger;	// 80 = 0x50
    MISSING_TYPE *sessionUserId;	// 6 = 0x6
    MISSING_TYPE *siriInputLocale;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *serverFallbackDisablingUtils;	// 1818784869 = 0x6c687465
    MISSING_TYPE *featureChecker;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *activeUserSessionObserver;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000032eb9
- (id)init;	// IMP=0x0000000000032e84
- (void)postMUXTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 voiceIdConfidenceScores:(id)arg4;	// IMP=0x0000000000031841
- (void)postMUXTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 sharedUserIdToSpeechRecognitionDict:(id)arg4 voiceIdConfidenceScores:(id)arg5;	// IMP=0x0000000000031199
- (void)sendMultiUserInfoWithDeviceAssistantId:(id)arg1 multiUserInfo:(id)arg2 isRMVEnabled:(_Bool)arg3;	// IMP=0x000000000002fe4c
- (void)announceNotificationHandlingStateUpdatedWithAssistantId:(id)arg1 toState:(long long)arg2;	// IMP=0x000000000002f2ed
- (void)updateVoiceCommandContextWithAssistantId:(id)arg1 requestId:(id)arg2 prefixText:(id)arg3 postfixText:(id)arg4 selectedText:(id)arg5 disambiguationActive:(id)arg6 cursorInVisibleText:(id)arg7 favorCommandSuppression:(id)arg8 abortCommandSuppression:(id)arg9 undoEvent:(id)arg10;	// IMP=0x000000000002e77a
- (void)resumeDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2 prefixText:(id)arg3 postfixText:(id)arg4 selectedText:(id)arg5;	// IMP=0x000000000002dd9d
- (void)pauseDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x000000000002d4c0
- (void)endDictationSessionWithAssistantId:(id)arg1;	// IMP=0x000000000002d178
- (void)startUnderstandingDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;	// IMP=0x000000000002c55b
- (void)startUnderstandingDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(_Bool)arg3;	// IMP=0x000000000002bcf8
- (void)startSpeechDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;	// IMP=0x000000000002b3df
- (void)startSpeechDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 recognitionOnDevice:(_Bool)arg3;	// IMP=0x000000000002abd1
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5 requestContextData:(id)arg6;	// IMP=0x0000000000029584
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5 requestContextData:(id)arg6;	// IMP=0x00000000000286e5
- (void)startMultiUserTestRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 expectedSelectedSharedUserId:(id)arg5 voiceIdConfidenceScores:(id)arg6 requestContextData:(id)arg7;	// IMP=0x000000000002675c
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 requestContextData:(id)arg5;	// IMP=0x00000000000260ad
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 requestContextData:(id)arg5;	// IMP=0x0000000000024297
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;	// IMP=0x000000000002318e
- (void)postTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3;	// IMP=0x000000000002283e
- (void)postTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 recognitionSausage:(id)arg4;	// IMP=0x0000000000021c0b
- (void)startTestSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 enableASR:(_Bool)arg3 inputOrigin:(id)arg4 location:(id)arg5 jitContext:(id)arg6 overrideModelPath:(id)arg7 requestContextData:(id)arg8;	// IMP=0x0000000000020f0a
- (void)startLocalRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 requestContextData:(id)arg4;	// IMP=0x000000000001ff3f
- (void)endSessionWithAssistantId:(id)arg1 withDelay:(_Bool)arg2;	// IMP=0x000000000001ed65
- (void)startSessionWithConfiguration:(id)arg1;	// IMP=0x000000000001e1b3
- (void)prewarmWithAssistantId:(id)arg1 languageCode:(id)arg2 prewarmOptions:(unsigned long long)arg3 sharedUserId:(id)arg4;	// IMP=0x000000000001d9a9
- (_Bool)sessionExistsForAssistantId:(id)arg1;	// IMP=0x000000000001d58d
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 location:(id)arg4 asrOnServer:(_Bool)arg5 requestContextData:(id)arg6;	// IMP=0x000000000001c1fc
- (void)requestCompletedWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x000000000001b561
- (void)cancelRequestWithAssistantId:(id)arg1 requestId:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000001ace1
- (void)handleCommand:(id)arg1 executionContextInfo:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a756
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000000001a224
- (id)commandsForDomain:(id)arg1;	// IMP=0x0000000000019dbb
- (id)domains;	// IMP=0x00000000000199b8
- (id)initWithRequestDispatcherServiceHelper:(id)arg1 bridgeConnectionListeners:(id)arg2;	// IMP=0x00000000000170e1

@end

