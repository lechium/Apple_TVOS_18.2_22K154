//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@class NSDictionary, NSLocale, NSNumber, NSURL;

@protocol TITrialManager <NSObject>
@property(copy) CDUnknownBlockType updateCallback;
- (NSNumber *)favoniusLanguagePowerOverrideForLocale:(NSLocale *)arg1;
- (void)start;
- (NSNumber *)inlineCompletionOperatingPointOverrideForLocale:(NSLocale *)arg1;
- (NSNumber *)isNegativeLearningEnabledForLocale:(NSLocale *)arg1;
- (NSURL *)inputTranscoderAssetsDirectoryURLForLocale:(NSLocale *)arg1;
- (NSDictionary *)encodedCATrialParametersForLocale:(NSLocale *)arg1;
- (NSDictionary *)encodedLMTrialParametersForLocale:(NSLocale *)arg1;
@end

