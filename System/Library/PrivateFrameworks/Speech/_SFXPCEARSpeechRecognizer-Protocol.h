//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSNumber, NSString, NSXPCListenerEndpoint, _SFAnalysisContextCodingObject, _SFAnalysisOptions, _SFAnalyzerClientInfo, _SFSpeechRecognizerSupportedFeatures;

@protocol _SFXPCEARSpeechRecognizer
- (oneway void)setSelectedText:(NSString *)arg1;
- (oneway void)setRightContext:(NSString *)arg1;
- (oneway void)setLeftContextText:(NSString *)arg1;
- (oneway void)setClientInfo:(_SFAnalyzerClientInfo *)arg1;
- (oneway void)speechProfileCodepathIdsWithReply:(void (^)(NSSet *))arg1;
- (oneway void)modelLoadTimeWithReply:(void (^)(double))arg1;
- (oneway void)isSpeechProfileUsedWithReply:(void (^)(_Bool))arg1;
- (oneway void)requestEagerResult:(NSArray *)arg1;
- (oneway void)updateVoiceCommandContextWithPrefixText:(NSString *)arg1 postfixText:(NSString *)arg2 selectedText:(NSString *)arg3 disambiguationActive:(NSNumber *)arg4 cursorInVisibleText:(NSNumber *)arg5 favorCommandSuppression:(NSNumber *)arg6 abortCommandSuppression:(NSNumber *)arg7 undoEvent:(NSNumber *)arg8;
- (oneway void)resumeRecognitionWithLeftContext:(NSString *)arg1 rightContext:(NSString *)arg2 selectedText:(NSString *)arg3;
- (oneway void)pauseRecognition;
- (oneway void)recognitionMetricsWithReply:(void (^)(EARRecognitionMetrics *))arg1;
- (oneway void)recognitionUtterenceStatisticsWithReply:(void (^)(NSDictionary *))arg1;
- (oneway void)recognitionStatisticsWithReply:(void (^)(NSDictionary *))arg1;
- (oneway void)modelInfoWithReply:(void (^)(EARSpeechModelInfo *))arg1;
- (oneway void)rightContextWithReply:(void (^)(NSString *))arg1;
- (oneway void)updateJitProfileData:(NSData *)arg1;
- (oneway void)updateUserProfileData:(NSData *)arg1;
- (oneway void)setUserProfileData:(NSData *)arg1;
- (oneway void)setExtraLmList:(NSArray *)arg1 sandboxExtensions:(NSArray *)arg2;
- (oneway void)runRecognitionWithResultStream:(NSXPCListenerEndpoint *)arg1 language:(NSString *)arg2 task:(NSString *)arg3 samplingRate:(unsigned long long)arg4 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg5;
- (oneway void)prepareForReuseWithNewSupportedFeatures:(_SFSpeechRecognizerSupportedFeatures *)arg1 clientInfo:(_SFAnalyzerClientInfo *)arg2 analysisContext:(_SFAnalysisContextCodingObject *)arg3 analysisOptions:(_SFAnalysisOptions *)arg4;
- (oneway void)hello;
@end

