//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol TILanguageLikelihoodModeling <NSObject>
- (unsigned long long)emojiUsageCountForApp:(NSString *)arg1 lastEmojiCountUpdateTime:(double *)arg2;
- (double)lastOfflineAdaptationTimeForApp:(NSString *)arg1;
- (void)priorProbabilityForLanguages:(NSArray *)arg1 recipient:(NSString *)arg2 handler:(void (^)(NSString *, float, _Bool *))arg3;
- (NSArray *)rankedLanguagesForRecipient:(NSString *)arg1;
- (void)addEvidence:(NSString *)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(NSString *)arg4 app:(NSString *)arg5 language:(NSString *)arg6;
@end

