//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSLocale.h>

@class NSString;

@interface NSLocale (LTLocaleIdentifier)
+ (id)lt_defaultTargetForSource:(id)arg1 systemLocale:(id)arg2 availableLocales:(id)arg3 targetMap:(id)arg4;	// IMP=0x002000000003d971
+ (id)lt_fallbackForLocale:(id)arg1;	// IMP=0x002000000003d807
+ (id)lt_bestMatchForPreferredLocales:(id)arg1 fromSupportedLocales:(id)arg2;	// IMP=0x002000000003d42d
+ (id)lt_preferredLocales;	// IMP=0x002000000003d3b3
+ (id)lt_localeWithLTIdentifier:(id)arg1;	// IMP=0x002000000003d143
@property(readonly, nonatomic) NSString *lt_nlLanguageCode;
- (_Bool)_ltEqual:(id)arg1;	// IMP=0x001000000003d2bf
- (id)_vsLocaleIdentifier;	// IMP=0x001000000003d261
- (id)_ltCsLocaleIdentifier;	// IMP=0x001000000003d203
- (id)_ltLocaleIdentifier;	// IMP=0x001000000003d1a5
@end

