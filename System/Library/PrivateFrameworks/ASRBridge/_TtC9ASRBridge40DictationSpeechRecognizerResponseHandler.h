//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9ASRBridge40DictationSpeechRecognizerResponseHandler
{
    MISSING_TYPE *dictationOptions;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000035650
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;	// IMP=0x0000000000033f80
- (void)localSpeechRecognizerClient:(id)arg1 receivedVoiceCommandCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;	// IMP=0x0000000000033cb0
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5 metadata:(id)arg6;	// IMP=0x0000000000033c00
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;	// IMP=0x0000000000033b70
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;	// IMP=0x0000000000033b50
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x0000000000033a90
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x0000000000033a70
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4 metadata:(id)arg5;	// IMP=0x00000000000339c0
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 speechPackage:(id)arg4 metadata:(id)arg5;	// IMP=0x0000000000033910
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;	// IMP=0x0000000000033870

@end

