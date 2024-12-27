//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSDictionary, NSString, PPQuickTypeQuery;

@protocol PPQuickTypeServerProtocol <PPFeedbackAccepting>
- (void)hibernateWithCompletion:(void (^)(void))arg1;
- (void)warmUpWithCompletion:(void (^)(void))arg1;
- (void)recentQuickTypeItemsForRecipients:(NSArray *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)quickTypeItemsWithLanguageModelingTokens:(NSDictionary *)arg1 localeIdentifier:(NSString *)arg2 recipients:(NSArray *)arg3 bundleIdentifier:(NSString *)arg4 limit:(unsigned long long)arg5 completion:(void (^)(NSArray *, PPQuickTypeExplanationSet *))arg6;
- (void)quickTypeItemsWithQuery:(PPQuickTypeQuery *)arg1 limit:(unsigned long long)arg2 completion:(void (^)(NSArray *, PPQuickTypeExplanationSet *))arg3;
@end

