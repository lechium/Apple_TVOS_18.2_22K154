//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TranslationDaemon/NSObject-Protocol.h>

@class NSArray, NSError, NSLocale, NSString, SISchemaUUID, _LTLocalePair, _LTSELFLoggingTranslateAppContext;

@protocol _LTDSELFLoggingEndpoint <NSObject>
+ (void)frameworkRequestResponseReceivedWithFrameworkRequestId:(SISchemaUUID *)arg1 requestRoute:(long long)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4 numberOfSentences:(unsigned long long)arg5;
+ (void)frameworkRequestSentWithFrameworkRequestId:(SISchemaUUID *)arg1 qssSessionId:(NSString *)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5 mtId:(SISchemaUUID *)arg6 sessionId:(SISchemaUUID *)arg7;
+ (void)languageIdentificationCompletedWithInputSource:(long long)arg1 topLocale:(NSLocale *)arg2 lowConfidenceLocales:(NSArray *)arg3 mtId:(SISchemaUUID *)arg4 sessionId:(SISchemaUUID *)arg5;
+ (void)translationTTSPlayed:(long long)arg1 isAutoplayTranslation:(_Bool)arg2 ttsPlaybackSpeed:(long long)arg3 audioChannel:(long long)arg4 mtId:(SISchemaUUID *)arg5 sessionId:(SISchemaUUID *)arg6;
+ (void)appBackgroundedWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)userTimeoutWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)userPressedNextButtonWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)userDismissedTextBoxWithPayload:(NSString *)arg1 localePair:(_LTLocalePair *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)cancelWithExists:(_Bool)arg1 reason:(NSString *)arg2 qssSessionId:(SISchemaUUID *)arg3 mtId:(SISchemaUUID *)arg4 sessionId:(SISchemaUUID *)arg5;
+ (void)endWithError:(NSError *)arg1 qssSessionId:(SISchemaUUID *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)endSuccessfullyWithExists:(_Bool)arg1 qssSessionId:(SISchemaUUID *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)startTier1WithLinkId:(SISchemaUUID *)arg1 appBundleId:(NSString *)arg2 mtId:(SISchemaUUID *)arg3 sessionId:(SISchemaUUID *)arg4;
+ (void)startWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 interfaceMode:(long long)arg4 explicitLanguageFilterEnabled:(_Bool)arg5 onDevice:(_Bool)arg6 mtId:(SISchemaUUID *)arg7 sessionId:(SISchemaUUID *)arg8 translateAppContext:(_LTSELFLoggingTranslateAppContext *)arg9;
@end

