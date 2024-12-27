//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSString, TIContextTokens;

@protocol TIRevisionHistoryDelegate <NSObject>
- (void)fillReversedConversationHistoryInContext:(TIContextTokens *)arg1;
- (struct TITokenID)addWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 surfaceFormPtr:(id *)arg3;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 tokenLookupMode:(unsigned int)arg3;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 contextTokens:(TIContextTokens *)arg2 tokenLookupMode:(unsigned int)arg3 surfaceFormPtr:(id *)arg4 hasCaseInsensitiveStaticVariant:(_Bool *)arg5;
- (void)registerRevisionFrom:(NSString *)arg1 to:(NSString *)arg2 contextTokens:(TIContextTokens *)arg3;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID)arg2 contextTokens:(TIContextTokens *)arg3 intended:(NSString *)arg4 intendedTokenID:(struct TITokenID)arg5 hint:(int)arg6;
- (void)softLearningRegisterDeleted:(NSString *)arg1;
- (void)softLearningRegisterAccepted:(NSString *)arg1 typed:(NSString *)arg2;
- (void)decrementLanguageModelCount:(NSString *)arg1 latinInputString:(NSString *)arg2 tokenID:(struct TITokenID)arg3 contextTokens:(TIContextTokens *)arg4;
- (void)incrementLanguageModelCount:(NSString *)arg1 latinInputString:(NSString *)arg2 tokenID:(struct TITokenID)arg3 contextTokens:(TIContextTokens *)arg4 saveToDifferentialPrivacy:(int)arg5;
- (_Bool)isStringBasedModel;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(_Bool)arg1;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
@end

