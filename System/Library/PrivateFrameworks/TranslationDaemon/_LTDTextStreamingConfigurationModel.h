//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTDTextStreamingConfigurationModel : NSObject
{
    double _minTimeBetweenTranslations;	// 8 = 0x8
    double _maxTimeBetweenTranslations;	// 16 = 0x10
    double _userIdleTime;	// 24 = 0x18
    long long _maxPartialTranslationAttempts;	// 32 = 0x20
    long long _minNumberOfCharactersForTranslation;	// 40 = 0x28
}

@property(readonly, nonatomic) long long minNumberOfCharactersForTranslation; // @synthesize minNumberOfCharactersForTranslation=_minNumberOfCharactersForTranslation;
@property(readonly, nonatomic) long long maxPartialTranslationAttempts; // @synthesize maxPartialTranslationAttempts=_maxPartialTranslationAttempts;
@property(readonly, nonatomic) double userIdleTime; // @synthesize userIdleTime=_userIdleTime;
@property(readonly, nonatomic) double maxTimeBetweenTranslations; // @synthesize maxTimeBetweenTranslations=_maxTimeBetweenTranslations;
@property(readonly, nonatomic) double minTimeBetweenTranslations; // @synthesize minTimeBetweenTranslations=_minTimeBetweenTranslations;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000003015e

@end

