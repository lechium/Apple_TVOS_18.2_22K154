//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HTMLEncoding)
+ (id)_navigation_stringForPower:(double)arg1 unit:(id)arg2;	// IMP=0x008000000002dfeb
+ (long long)_navigation_abbreviatedFromatterUnitsStyleForLocale:(id)arg1;	// IMP=0x008000000002df94
+ (id)_navigation_selectInstructionWithServerStringArray:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000002dd68
+ (id)_navigation_selectInstructionWithServerString:(id)arg1 isSpoken:(_Bool)arg2 clientBlock:(CDUnknownBlockType)arg3;	// IMP=0x008000000002dcc7
+ (_Bool)_navigation_logIfContainsVariables:(id)arg1;	// IMP=0x008000000002db12
+ (void)_navigation_logMismatchBetweenServerInstruction:(id)arg1 clientInstruction:(id)arg2;	// IMP=0x008000000002d9c5
+ (id)_navigation_languageDirectionStringWithFormat:(id)arg1;	// IMP=0x008000000002d678
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2 showsCurrencySymbol:(_Bool)arg3;	// IMP=0x008000000002cf5a
+ (id)_navigation_formattedStringForPriceValueWithAmount:(id)arg1 currencyCode:(id)arg2;	// IMP=0x008000000002cf42
+ (id)_navigation_formattedStringForPriceValue:(double)arg1 currencyCode:(id)arg2;	// IMP=0x008000000002ceab
+ (id)_navigation_commaListDelimiter;	// IMP=0x008000000002ce9a
+ (id)_navigation_stringWithCountdownValue:(id)arg1 inToken:(id)arg2 options:(CDStruct_ef0b40be)arg3;	// IMP=0x008000000002c5da
+ (id)_navigation_stringWithTimeStampValues:(id)arg1 options:(CDStruct_ef0b40be)arg2;	// IMP=0x008000000002bb97
+ (id)_navigation_spokenStringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000002b8d4
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000002b895
+ (id)_navigation_spokenStringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000002b881
+ (id)_navigation_stringWithMinutes:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000002b6d7
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 andAbbreviationType:(unsigned long long)arg2;	// IMP=0x008000000002b698
+ (id)_navigation_stringWithSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000002b684
+ (id)_navigation_stringForDistance:(double)arg1 formatter:(id)arg2 locale:(id)arg3 shouldScale:(_Bool)arg4;	// IMP=0x008000000002ac9a
+ (id)_navigation_formatterForOptions:(id)arg1;	// IMP=0x008000000002aad4
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6 shouldScale:(_Bool)arg7;	// IMP=0x008000000002a81e
+ (id)_navigation_localizedStringForDistance:(double)arg1 detail:(long long)arg2 unitFormat:(long long)arg3 locale:(id)arg4 useMetric:(unsigned long long)arg5 useYards:(unsigned long long)arg6;	// IMP=0x008000000002a802
+ (id)_navigation_localizedStringForDistance:(double)arg1 context:(long long)arg2 extraDetail:(_Bool)arg3;	// IMP=0x008000000002a692
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x008000000002a63b
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 wrappedOverrideVariables:(id)arg5;	// IMP=0x008000000002a618
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x008000000002942e
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 wrappedOverrideVariables:(id)arg3;	// IMP=0x0080000000029412
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 options:(CDStruct_ef0b40be)arg3 overrideVariables:(id)arg4;	// IMP=0x008000000002930e
+ (_Bool)_replaceToken:(id)arg1 composedString:(id)arg2 replacement:(id)arg3;	// IMP=0x0080000000029136
+ (id)_navigation_replacementForFormatToken:(id)arg1 abbreviatedUnits:(_Bool)arg2 overrideVariables:(id)arg3 detail:(long long)arg4 spoken:(_Bool)arg5;	// IMP=0x00800000000290e8
+ (id)_navigation_overridenTokenForToken:(id)arg1 overrideVariables:(id)arg2;	// IMP=0x0080000000028d5a
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 useMetric:(unsigned long long)arg4;	// IMP=0x0080000000028187
+ (id)_navigation_replacementForFormatToken:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000028172
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5 allTokensExpanded:(_Bool *)arg6;	// IMP=0x008000000002806b
+ (id)_navigation_stringForServerFormattedString:(id)arg1 abbreviatedUnits:(_Bool)arg2 detail:(long long)arg3 spoken:(_Bool)arg4 overrideVariables:(id)arg5;	// IMP=0x0080000000027f68
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3 allTokensExpanded:(_Bool *)arg4;	// IMP=0x0080000000027e60
+ (id)_navigation_stringForServerFormattedString:(id)arg1 options:(CDStruct_ef0b40be)arg2 overrideVariables:(id)arg3;	// IMP=0x0080000000027d5d
+ (id)_navigation_stringForServerFormattedString:(id)arg1;	// IMP=0x0080000000027d28
+ (id)_navigation_frequencyRangeLocalizedInMixedUnitsWithMinString:(id)arg1 maxString:(id)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000027c6c
+ (id)_navigation_frequencyRangeLocalizedInHoursWithMinHours:(long long)arg1 maxHours:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000027af7
+ (id)_navigation_frequencyRangeLocalizedInMinutesWithMinMinutes:(long long)arg1 maxMinutes:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000027982
+ (id)_navigation_descriptionForFrequencyRangeWithMinFrequency:(long long)arg1 maxFrequency:(long long)arg2 estimate:(_Bool)arg3 recurring:(_Bool)arg4;	// IMP=0x0080000000027745
+ (id)_navigation_descriptionForFrequencyMinuteValue:(long long)arg1;	// IMP=0x00800000000276e1
+ (id)_frequencyDateComponents:(long long)arg1;	// IMP=0x0080000000027654
+ (id)_navigation_formattedDescriptionForLiveStatus:(long long)arg1 updatedDepartureTimeString:(id)arg2;	// IMP=0x0080000000027551
+ (id)_navigation_formattedDescriptionForFrequency:(id)arg1;	// IMP=0x0080000000027243
+ (id)_frequencyStringForComponents:(id)arg1 forRange:(_Bool)arg2 forceShort:(_Bool)arg3;	// IMP=0x0080000000026dbc
+ (_Bool)_componentsWillUseShortFormat:(id)arg1;	// IMP=0x0080000000026d67
+ (id)_navigation_stringForExpectedTravelTime:(double)arg1 dateUnitStyle:(long long)arg2;	// IMP=0x0080000000026beb
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2 delimeter:(id)arg3;	// IMP=0x0080000000026202
+ (id)_navigation_formattedStringForHourRanges:(id)arg1 timeZone:(id)arg2;	// IMP=0x008000000002616b
+ (id)_navigation_formattedStringForOperatingHours:(id)arg1 timeZone:(id)arg2;	// IMP=0x0080000000025e88
+ (id)_navigation_formatFloatForPrintedDistance:(double)arg1;	// IMP=0x0080000000025d83
+ (id)_navigation_formattedStringForFloat:(double)arg1 useIncreasedPrecision:(_Bool)arg2;	// IMP=0x0080000000025c34
+ (id)_navigation_formattedStringForFloat:(double)arg1;	// IMP=0x0080000000025c20
+ (id)_navigation_formattedStringForInteger:(long long)arg1;	// IMP=0x0080000000025aec
+ (id)_navigation_pointerDescription:(id)arg1;	// IMP=0x008000000002e66d
+ (id)_navigation_stringWithTime:(id)arg1;	// IMP=0x008000000002e64c
+ (id)_navigation_stringWithAltitudeUnits;	// IMP=0x008000000002e63f
+ (id)_navigation_stringWithAltitude:(double)arg1 accuracy:(double)arg2;	// IMP=0x008000000002e57e
+ (id)_navigation_stringWithDirection:(double)arg1 abbreviated:(_Bool)arg2;	// IMP=0x008000000002e135
+ (id)_navigation_stringWithSpeedUnits;	// IMP=0x008000000002e128
+ (id)_navigation_stringWithSpeed:(double)arg1;	// IMP=0x008000000002e0c6
- (id)_navigation_sanitizedStringForDisplayInHTML;	// IMP=0x0010000000025a2a
- (id)_navigation_stringByReplacingNewLinesWithString:(id)arg1;	// IMP=0x001000000002597f
- (id)_navigation_stringByEscapingHTML;	// IMP=0x001000000002585f
- (unsigned long long)_navigation_distanceLevenshtein:(id)arg1;	// IMP=0x001000000002dd9f
- (_Bool)_navigation_containsVariables;	// IMP=0x001000000002da95
- (id)_navigation_stripVariablesFromString;	// IMP=0x001000000002d933
- (_Bool)_navigation_isPrivate;	// IMP=0x001000000002d91a
- (id)_navigation_stringByStrippingPrivateTag;	// IMP=0x001000000002d8c1
- (id)_navigation_stringByMarkingAsPrivateText;	// IMP=0x001000000002d895
- (id)_navigation_stripTagsFromSpokenString;	// IMP=0x001000000002d7db
- (_Bool)_navigation_isCJK;	// IMP=0x001000000002d4eb
- (id)_navigation_stringByMarkingAsNormalText;	// IMP=0x001000000002d483
- (id)_navigation_stringByMarkingAsNavigationText;	// IMP=0x001000000002d280
- (id)_navigation_stringByMarkingAsAddress;	// IMP=0x001000000002d218
- (id)_navigation_stringByMakingPhonetic;	// IMP=0x001000000002d1b0
- (id)mnlpr_componentsSeparatedByGlyph;	// IMP=0x0010000000054aec
@end

