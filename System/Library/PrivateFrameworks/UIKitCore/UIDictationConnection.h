//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject
{
    _Bool _receivedMultilingualResultsCommand;	// 8 = 0x8
    _Bool _offlineOnly;	// 9 = 0x9
    _Bool _ignoreSpeechRecognitionResults;	// 10 = 0xa
    _Bool _lowConfidenceAboutLanguageDetection;	// 11 = 0xb
    unsigned int _charBeforeInsertionPointOnDictationStart;	// 12 = 0xc
    unsigned int _charAfterInsertionPointOnDictationStart;	// 16 = 0x10
    id <UIDictationConnectionDelegate> _delegate;	// 24 = 0x18
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;	// 32 = 0x20
    AFDictationOptions *_dictationOptions;	// 40 = 0x28
    AFDictationConnection *_connection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 56 = 0x38
    NSString *_lastUsedPrimaryLanguage;	// 64 = 0x40
    NSString *_lastUsedDetectedLanguage;	// 72 = 0x48
    NSMutableArray *_lastUsedTopLanguages;	// 80 = 0x50
    NSMutableDictionary *_lastReceivedPartials;	// 88 = 0x58
}

+ (_Bool)hasSpeechRecognitionPauseAckPhrases:(id)arg1;	// IMP=0x0010000000d64703
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000d6452a
+ (void)_updateFromGlobalOptions:(id)arg1;	// IMP=0x0010000000d60ee6
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0010000000d60ecf
+ (_Bool)dictationRestricted;	// IMP=0x0010000000d60dac
+ (void)cacheSupportedDictationLanguages;	// IMP=0x0010000000d607b2
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000d605d8
+ (_Bool)isDictationAvailable;	// IMP=0x0010000000d60577
+ (id)analytics;	// IMP=0x0010000000d5ffd3
- (void).cxx_destruct;	// IMP=0x0000000000d68028
@property(retain, nonatomic) NSMutableDictionary *lastReceivedPartials; // @synthesize lastReceivedPartials=_lastReceivedPartials;
@property(nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // @synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart;
@property(nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // @synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(retain, nonatomic) NSMutableArray *lastUsedTopLanguages; // @synthesize lastUsedTopLanguages=_lastUsedTopLanguages;
@property(copy, nonatomic) NSString *lastUsedDetectedLanguage; // @synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage;
@property(copy, nonatomic) NSString *lastUsedPrimaryLanguage; // @synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(nonatomic) _Bool ignoreSpeechRecognitionResults; // @synthesize ignoreSpeechRecognitionResults=_ignoreSpeechRecognitionResults;
@property(nonatomic) _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property(retain, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(nonatomic) _Bool receivedMultilingualResultsCommand; // @synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand;
@property(nonatomic) __weak id <UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;
@property(nonatomic) __weak id <UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)euclidPhoneticString:(id)arg1 maxResultsCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d67e34
- (void)preheatEuclidModelWithLanguageCode:(id)arg1 clientID:(id)arg2;	// IMP=0x0000000000d67da9
- (void)dictationConnection:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 nluResult:(id)arg3;	// IMP=0x0000000000d67b56
- (void)dictationConnection:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x0000000000d679bd
- (void)dictationConnectionDidPauseRecognition:(id)arg1;	// IMP=0x0000000000d6790e
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0000000000d67864
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;	// IMP=0x0000000000d67823
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0000000000d677b8
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;	// IMP=0x0000000000d66769
- (void)dictationConnection:(id)arg1 didRecognizePartialPackage:(id)arg2 nluResult:(id)arg3 languageModel:(id)arg4;	// IMP=0x0000000000d665d2
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000d6618e
- (id)dictationSerializedResultWithPhrases:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000d65d5d
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x0000000000d65566
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x0000000000d654fb
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x0000000000d654ba
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x0000000000d6521b
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x0000000000d650dd
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;	// IMP=0x0000000000d65070
- (void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;	// IMP=0x0000000000d65003
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;	// IMP=0x0000000000d64fc2
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;	// IMP=0x0000000000d64f81
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;	// IMP=0x0000000000d64f37
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;	// IMP=0x0000000000d6492b
- (_Bool)isSecureInput;	// IMP=0x0000000000d646fa
- (void)preheat;	// IMP=0x0000000000d644ed
- (void)synthesizeDidRecognizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;	// IMP=0x0000000000d6444a
- (void)synthesizeDidRecognizeTokens:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000d643bc
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;	// IMP=0x0000000000d6400e
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000d63975
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000d636f6
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000d63477
- (void)cancelSpeech;	// IMP=0x0000000000d630c4
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(_Bool)arg4;	// IMP=0x0000000000d62e48
- (void)_startWithOptions:(id)arg1;	// IMP=0x0000000000d62369
- (id)_initializeWithOptions:(id)arg1;	// IMP=0x0000000000d62300
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000d621e0
- (void)start;	// IMP=0x0000000000d620a2
- (id)_createConnectionOptions;	// IMP=0x0000000000d61f4a
- (id)_speechOptions:(id)arg1;	// IMP=0x0000000000d61d68
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;	// IMP=0x0000000000d61d44
- (id)_dictationOptions:(id)arg1;	// IMP=0x0000000000d614cb
- (id)languageDetectionUserContext;	// IMP=0x0000000000d61034
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d60d10
- (_Bool)supportNewVoiceEditingCommandSPI;	// IMP=0x0000000000d60cca
- (void)updateVoiceCommandContextWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3 disambiguationActive:(id)arg4 cursorInVisibleText:(id)arg5 favorCommandSuppression:(id)arg6 abortCommandSuppression:(id)arg7 undoEvent:(id)arg8;	// IMP=0x0000000000d60b7e
- (void)updateVoiceCommandContextWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3 disambiguationActive:(id)arg4 cursorInVisibleText:(id)arg5 favorCommandSuppression:(id)arg6 abortCommandSuppression:(id)arg7;	// IMP=0x0000000000d60a28
- (void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x0000000000d609b3
- (void)resumeSpeechRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;	// IMP=0x0000000000d60916
- (void)pauseSpeechRecognition;	// IMP=0x0000000000d60843
- (void)endSession;	// IMP=0x0000000000d60806
- (float)averagePower;	// IMP=0x0000000000d60588
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x0000000000d603be
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000d60202
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;	// IMP=0x0000000000d60153
- (void)cancelAvailabilityMonitoring;	// IMP=0x0000000000d60116
- (void)beginAvailabilityMonitoring;	// IMP=0x0000000000d600d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

