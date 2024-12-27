//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSLocale, NSNumberFormatter, NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarTimeFormat : NSObject
{
    _Bool _wantsDoubleDigitHours;	// 8 = 0x8
    _Bool _forceDoubleDigitHours;	// 9 = 0x9
    _Bool _hasLeadingLiteral;	// 10 = 0xa
    _Bool _hasTrailingLiteral;	// 11 = 0xb
    _Bool _displaysTimeZone;	// 12 = 0xc
    NSString *_timeFormat;	// 16 = 0x10
    NSString *_hourFormat;	// 24 = 0x18
    NSString *_AMSymbol;	// 32 = 0x20
    NSString *_PMSymbol;	// 40 = 0x28
    long long _clock;	// 48 = 0x30
    long long _clockLayout;	// 56 = 0x38
    NSNumberFormatter *_hourFormatter;	// 64 = 0x40
    NSNumberFormatter *_minuteFormatter;	// 72 = 0x48
    NSString *_extendedHoursFormat;	// 80 = 0x50
    NSNumberFormatter *_strictHourFormatter;	// 88 = 0x58
    NSDate *_timeZoneReferenceDate;	// 96 = 0x60
    NSTimeZone *_timeZone;	// 104 = 0x68
    NSLocale *_locale;	// 112 = 0x70
}

+ (id)formatWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(_Bool)arg3;	// IMP=0x0010000000a17f1d
+ (id)formatWithCalendar:(id)arg1 locale:(id)arg2;	// IMP=0x0010000000a17f08
- (void).cxx_destruct;	// IMP=0x0000000000a1a5cb
@property(readonly, nonatomic) _Bool displaysTimeZone; // @synthesize displaysTimeZone=_displaysTimeZone;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) NSDate *timeZoneReferenceDate; // @synthesize timeZoneReferenceDate=_timeZoneReferenceDate;
@property(readonly, nonatomic) NSNumberFormatter *strictHourFormatter; // @synthesize strictHourFormatter=_strictHourFormatter;
@property(readonly, nonatomic) NSString *extendedHoursFormat; // @synthesize extendedHoursFormat=_extendedHoursFormat;
@property(readonly, nonatomic) NSNumberFormatter *minuteFormatter; // @synthesize minuteFormatter=_minuteFormatter;
@property(readonly, nonatomic) NSNumberFormatter *hourFormatter; // @synthesize hourFormatter=_hourFormatter;
@property(readonly, nonatomic) _Bool hasTrailingLiteral; // @synthesize hasTrailingLiteral=_hasTrailingLiteral;
@property(readonly, nonatomic) _Bool hasLeadingLiteral; // @synthesize hasLeadingLiteral=_hasLeadingLiteral;
@property(readonly, nonatomic) long long clockLayout; // @synthesize clockLayout=_clockLayout;
@property(readonly, nonatomic) long long clock; // @synthesize clock=_clock;
@property(readonly, nonatomic) _Bool forceDoubleDigitHours; // @synthesize forceDoubleDigitHours=_forceDoubleDigitHours;
@property(readonly, nonatomic) _Bool wantsDoubleDigitHours; // @synthesize wantsDoubleDigitHours=_wantsDoubleDigitHours;
@property(readonly, nonatomic) NSString *PMSymbol; // @synthesize PMSymbol=_PMSymbol;
@property(readonly, nonatomic) NSString *AMSymbol; // @synthesize AMSymbol=_AMSymbol;
@property(readonly, nonatomic) NSString *hourFormat; // @synthesize hourFormat=_hourFormat;
@property(readonly, nonatomic) NSString *timeFormat; // @synthesize timeFormat=_timeFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a1a2c4
- (id)withTimeZone:(id)arg1;	// IMP=0x0000000000a1a218
- (id)withDisplaysTimeZone:(_Bool)arg1;	// IMP=0x0000000000a1a1d1
- (id)withForceDoubleDigitHours:(_Bool)arg1;	// IMP=0x0000000000a1a0c6
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 isPM:(_Bool)arg3;	// IMP=0x0000000000a1a0b1
- (id)localizedTimeStringWithHours:(unsigned long long)arg1 minutes:(unsigned long long)arg2 isPM:(_Bool)arg3 ranges:(CDStruct_a33ff3ce *)arg4;	// IMP=0x0000000000a19464
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 followsSystemHourCycle:(_Bool)arg3 forceDoubleDigitHours:(_Bool)arg4 displaysTimeZone:(_Bool)arg5;	// IMP=0x0000000000a17fd4
- (id)initWithCalendar:(id)arg1 locale:(id)arg2 forceDoubleDigitHours:(_Bool)arg3 displaysTimeZone:(_Bool)arg4;	// IMP=0x0000000000a17fac

@end

