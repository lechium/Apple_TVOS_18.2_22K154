//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LTDSELFLoggingProduction : NSObject
{
}

+ (void)frameworkRequestResponseReceivedWithFrameworkRequestId:(id)arg1 requestRoute:(long long)arg2 mtId:(id)arg3 sessionId:(id)arg4 numberOfSentences:(unsigned long long)arg5;	// IMP=0x001000000002ef22
+ (void)frameworkRequestSentWithFrameworkRequestId:(id)arg1 qssSessionId:(id)arg2 requestType:(long long)arg3 requestRoute:(long long)arg4 requestSize:(unsigned long long)arg5 mtId:(id)arg6 sessionId:(id)arg7;	// IMP=0x001000000002ed3c
+ (void)languageIdentificationCompletedWithInputSource:(long long)arg1 topLocale:(id)arg2 lowConfidenceLocales:(id)arg3 mtId:(id)arg4 sessionId:(id)arg5;	// IMP=0x001000000002eb69
+ (void)translationTTSPlayed:(long long)arg1 isAutoplayTranslation:(_Bool)arg2 ttsPlaybackSpeed:(long long)arg3 audioChannel:(long long)arg4 mtId:(id)arg5 sessionId:(id)arg6;	// IMP=0x001000000002e9c4
+ (void)appBackgroundedWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002e7f6
+ (void)userTimeoutWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002e628
+ (void)userPressedNextButtonWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002e45a
+ (void)userDismissedTextBoxWithPayload:(id)arg1 localePair:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002e28c
+ (void)cancelWithExists:(_Bool)arg1 reason:(id)arg2 qssSessionId:(id)arg3 mtId:(id)arg4 sessionId:(id)arg5;	// IMP=0x001000000002e18b
+ (void)endWithError:(id)arg1 qssSessionId:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002e091
+ (void)endSuccessfullyWithExists:(_Bool)arg1 qssSessionId:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002dfb4
+ (void)startTier1WithLinkId:(id)arg1 appBundleId:(id)arg2 mtId:(id)arg3 sessionId:(id)arg4;	// IMP=0x001000000002dde6
+ (void)startWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 interfaceMode:(long long)arg4 explicitLanguageFilterEnabled:(_Bool)arg5 onDevice:(_Bool)arg6 mtId:(id)arg7 sessionId:(id)arg8 translateAppContext:(id)arg9;	// IMP=0x001000000002dcd8
+ (void)_sendEventWithContext:(id)arg1 mtId:(id)arg2 sessionId:(id)arg3;	// IMP=0x001000000002db5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

