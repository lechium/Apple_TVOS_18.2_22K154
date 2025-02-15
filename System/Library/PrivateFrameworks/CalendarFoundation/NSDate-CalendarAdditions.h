//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (CalendarAdditions)
+ (id)CalDateRangeStringWithStart:(id)arg1 end:(id)arg2;	// IMP=0x0060000000022efc
+ (id)nextRoundedChunkForDuration:(double)arg1;	// IMP=0x0060000000021281
+ (id)nextRoundedHour;	// IMP=0x00600000000211f7
+ (id)dateWithDatePartFromDate:(id)arg1 timePartFromDate:(id)arg2 inCalendar:(id)arg3;	// IMP=0x00600000000206d8
+ (id)dateFromISO8601String:(id)arg1 inTimeZone:(id)arg2;	// IMP=0x006000000001ea2b
+ (id)dateFromISO8601String:(id)arg1;	// IMP=0x006000000001e9a4
+ (id)CalDateForEndOfTomorrow;	// IMP=0x006000000001e8e7
+ (id)CalDateForBeginningOfTomorrow;	// IMP=0x006000000001e860
+ (id)_tomorrowComponents;	// IMP=0x006000000001e775
+ (id)CalDateForEndOfToday;	// IMP=0x006000000001e6b8
+ (id)CalDateForBeginningOfToday;	// IMP=0x0060000000008d16
+ (id)_todayComponents;	// IMP=0x0060000000008d9d
+ (id)_nowComponents;	// IMP=0x0060000000008df9
+ (id)CalDateForNow;	// IMP=0x0060000000008e85
+ (id)CalSimulatedDateForNow;	// IMP=0x006000000001e4ba
+ (id)calGMT;	// IMP=0x006000000001e136
+ (long long)daysSpannedFromStartDate:(id)arg1 toEndDate:(id)arg2 allDay:(_Bool)arg3 inCalendar:(id)arg4;	// IMP=0x00600000000089f5
- (void)_performBlockBehindDispatchSync:(CDUnknownBlockType)arg1 inTimeZone:(id)arg2;	// IMP=0x001000000001d459
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;	// IMP=0x001000000001d2ee
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;	// IMP=0x001000000000d80b
- (id)dateForEndOfDayInTimeZone:(id)arg1;	// IMP=0x001000000000d626
- (id)dateForStartOfDayInTimeZone:(id)arg1;	// IMP=0x001000000000d7ef
- (id)localizedStringForEventTimeInTimeZone:(id)arg1;	// IMP=0x0010000000022dbd
- (id)localizedStringForEventTime;	// IMP=0x0010000000022d57
- (id)localizedHourWithoutAMPM;	// IMP=0x0010000000022d3b
- (id)localizedHourMinutesWithoutAMPMInTimeZone:(id)arg1;	// IMP=0x0010000000022d1c
- (id)localizedHourMinutesWithoutAMPM;	// IMP=0x0010000000022cb6
- (id)localizedHourInTimeZone:(id)arg1;	// IMP=0x0010000000022c97
- (id)localizedHour;	// IMP=0x0010000000022c31
- (id)localizedShortTimeInTimeZone:(id)arg1;	// IMP=0x0010000000022c12
- (id)localizedShortTime;	// IMP=0x0010000000022bac
- (id)localizedTime;	// IMP=0x0010000000022b90
- (id)localizedAbbrevStandaloneMonth;	// IMP=0x0010000000022b11
- (id)localizedAbbrevMonthWithDayRangeToDate:(id)arg1;	// IMP=0x001000000002299c
- (id)localizedAbbrevWeekdayWithDayOfMonthPreferWeekdayFirstForEnglish;	// IMP=0x001000000002277e
- (struct _NSRange)rangeOfDayInLocalizedDateString:(id)arg1;	// IMP=0x00100000000225c5
- (id)localizedAbbrevWeekdayWithDayOfMonth;	// IMP=0x00100000000225a9
- (id)localizedFullWeekdayWithDayOfMonth;	// IMP=0x001000000002258d
- (id)localizedShortStandaloneWeekday;	// IMP=0x0010000000022571
- (id)localizedFullStandaloneWeekday;	// IMP=0x0010000000022555
- (id)localizedMonthWithDayWithPreferredShortening;	// IMP=0x00100000000224d5
- (id)localizedShortMonthWithDay;	// IMP=0x00100000000224b9
- (id)localizedAbbrevMonthWithDayInTimeZone:(id)arg1;	// IMP=0x001000000002249a
- (id)localizedAbbrevMonthWithDay;	// IMP=0x0010000000022434
- (id)localizedFullMonthWithDay;	// IMP=0x0010000000022418
- (id)localizedAbbrevMonthWeekdayDay;	// IMP=0x00100000000223fc
- (id)localizedFullMonthWeekdayDay;	// IMP=0x00100000000223e0
- (id)localizedFullYearMonth;	// IMP=0x00100000000223c4
- (id)localizedShortDate;	// IMP=0x00100000000223a8
- (id)localizedDayOfWeekWithAbbrevDateInTimeZone:(id)arg1;	// IMP=0x0010000000022389
- (id)localizedAbbrevDateInTimeZone:(id)arg1;	// IMP=0x001000000002236a
- (id)localizedAbbrevDate;	// IMP=0x0010000000022304
- (id)localizedLongDate;	// IMP=0x00100000000222e8
- (id)localizedFullDate;	// IMP=0x00100000000222cc
- (id)localizedShortDateAndTime;	// IMP=0x00100000000222b0
- (id)localizedFullDateAndTime;	// IMP=0x0010000000022294
- (id)localizedDayOfMonth;	// IMP=0x0010000000022278
- (id)localizedFullMonth;	// IMP=0x001000000002225c
- (id)localizedYear;	// IMP=0x0010000000022240
- (id)dateRemovingComponents:(unsigned long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000022199
- (long long)midnightOffsetMinutes:(id)arg1;	// IMP=0x001000000002212a
- (id)timeStringAlwaysIncludeMinutes:(_Bool)arg1;	// IMP=0x001000000000e24f
- (id)_stringWithUseAbbreviatedFormats:(_Bool)arg1 lowerCase:(_Bool)arg2;	// IMP=0x0010000000021bf9
- (id)localizedRelativeDateStringShortened:(_Bool)arg1 lowercase:(_Bool)arg2;	// IMP=0x0010000000021be7
- (id)localizedRelativeDateStringShortened:(_Bool)arg1;	// IMP=0x0010000000021bd3
- (id)localizedWeekNumber;	// IMP=0x0010000000021b52
- (id)localizedDateStringWithTemplate:(id)arg1;	// IMP=0x0010000000021a61
- (id)localizedWeekdayMonthDayStringShortened:(_Bool)arg1;	// IMP=0x0010000000021a38
- (id)localizedWeekdayMonthYearStringShortened:(_Bool)arg1;	// IMP=0x0010000000021a0f
- (id)localizedWeekdayMonthDayYearStringShortened:(_Bool)arg1;	// IMP=0x00100000000219e6
- (id)localizedYearMonthAndDayStringShortened:(_Bool)arg1;	// IMP=0x00100000000219bd
- (id)localizedMonthAndDayStringShortened:(_Bool)arg1;	// IMP=0x0010000000021994
- (id)localizedMonthAndYearStringShortened:(_Bool)arg1;	// IMP=0x001000000002196b
- (id)localizedMonthShortened:(_Bool)arg1;	// IMP=0x0010000000021942
- (void)printComparisonToDate:(id)arg1;	// IMP=0x00100000000213ff
- (id)dateRoundedToStartOfNextDayInCalendar:(id)arg1;	// IMP=0x0010000000021175
- (id)dateRoundedToHourOnSameDayInCalendar:(id)arg1;	// IMP=0x0010000000021056
- (id)dateRoundedDownToNearestFiveMinutesInCalendar:(id)arg1;	// IMP=0x001000000002103c
- (id)dateRoundedToNearestFifteenMinutesInCalendar:(id)arg1;	// IMP=0x0010000000020f74
- (id)CalDateRoundedDownToNearestMinuteIncrement:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020e60
- (_Bool)isTodayInCalendar:(id)arg1;	// IMP=0x0010000000020d7a
- (_Bool)isAfterOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020d60
- (_Bool)isAfterDayForDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020d46
- (_Bool)isBeforeOrSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020d2c
- (_Bool)isBeforeDayForDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020d12
- (_Bool)isEqualToDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020c31
- (_Bool)isSameYearAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020b42
- (_Bool)isSameWeekAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020a68
- (_Bool)isSameMonthAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020979
- (_Bool)isSameDayAsDate:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020967
- (long long)compareDateIgnoringTimeComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x0010000000020886
- (_Bool)isBeforeDate:(id)arg1;	// IMP=0x0010000000020864
- (_Bool)isAfterDate:(id)arg1;	// IMP=0x0010000000020842
- (id)roundToCurrentYearInCalendar:(id)arg1;	// IMP=0x0010000000020637
- (id)roundToCurrentMonthInCalendar:(id)arg1;	// IMP=0x00100000000205a8
- (id)roundToCurrentMondayInCalendar:(id)arg1;	// IMP=0x001000000002051f
- (id)roundToCurrentWeekInCalendar:(id)arg1 withFirstWeekdayIndex:(long long)arg2;	// IMP=0x001000000002049d
- (id)roundToCurrentDayInCalendar:(id)arg1;	// IMP=0x001000000002048b
- (id)subtractOneSecondIfAt0InCalendar:(id)arg1;	// IMP=0x0010000000020394
- (id)roundUpOneSecondIfAt59InCalendar:(id)arg1;	// IMP=0x001000000002029c
- (id)roundSecondsAndMinutesUpInCalendar:(id)arg1;	// IMP=0x00100000000201b0
- (id)roundSecondsAndMinutesDownInCalendar:(id)arg1;	// IMP=0x00100000000200f4
- (id)roundSecondsDownInCalendar:(id)arg1;	// IMP=0x0010000000020047
- (id)CalDateByComponentwiseAddingComponents:(id)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001fae0
- (id)CalDateByComponentwiseAddingHours:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001fa28
- (id)CalDateByComponentwiseAddingMinutes:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f970
- (id)CalDateByComponentwiseAddingSeconds:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f8b8
- (id)dateByAddingYears:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f811
- (id)dateByAddingMonths:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f76a
- (id)dateByAddingWeeks:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f6c3
- (id)dateByAddingDays:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f61c
- (id)dateByAddingHours:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f575
- (id)dateByAddingMinutes:(long long)arg1 inCalendar:(id)arg2;	// IMP=0x001000000001f4ce
- (id)dateRemovingTimeComponentsInCalendar:(id)arg1;	// IMP=0x001000000001f430
- (long long)secondInCalendar:(id)arg1;	// IMP=0x001000000001f383
- (long long)minuteInCalendar:(id)arg1;	// IMP=0x001000000001f2d6
- (long long)hourInCalendar:(id)arg1;	// IMP=0x001000000001f229
- (long long)weekdayInCalendar:(id)arg1;	// IMP=0x001000000001f17c
- (long long)dayInCalendar:(id)arg1;	// IMP=0x001000000001f0cf
- (long long)weekInCalendar:(id)arg1;	// IMP=0x001000000001f022
- (long long)monthInCalendar:(id)arg1;	// IMP=0x001000000001ef75
- (long long)yearInCalendar:(id)arg1;	// IMP=0x001000000001eec8
- (id)dateOnlyByTranslatingFrom:(id)arg1 toCalendar:(id)arg2;	// IMP=0x001000000001eda2
- (id)timeOnlyComponentsInCalendar:(id)arg1;	// IMP=0x001000000001ed16
- (id)dateOnlyComponentsInCalendar:(id)arg1;	// IMP=0x001000000001ec8a
- (id)allComponentsInCalendar:(id)arg1;	// IMP=0x001000000001ebfc
- (id)toISO8601String;	// IMP=0x001000000001eb16
- (id)dateBySubtractingCalSimulatedOffset;	// IMP=0x001000000001e641
- (id)dateByAddingCalSimulatedOffset;	// IMP=0x001000000001e5d1
- (_Bool)CalIsAfterOrSameAsDate:(id)arg1;	// IMP=0x0010000000003ee7
- (_Bool)CalIsAfterDate:(id)arg1;	// IMP=0x00100000000067a4
- (_Bool)CalIsBeforeOrSameAsDate:(id)arg1;	// IMP=0x0010000000003ec3
- (_Bool)CalIsBeforeDate:(id)arg1;	// IMP=0x001000000000643e
- (_Bool)CalIsBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000000f86d
- (id)ek_ios_dateForEndOfDayInTimeZone:(id)arg1;	// IMP=0x001000000001e42c
- (id)dateForDayInTimeZone:(id)arg1;	// IMP=0x001000000001e3d4
- (id)components:(unsigned long long)arg1 forDayInTimeZone:(id)arg2;	// IMP=0x001000000001e2fc
- (id)dateInTimeZone:(id)arg1 fromTimeZone:(id)arg2;	// IMP=0x001000000001e1a2
- (id)localizedStringWithFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x0010000000043ee4
- (id)localizedStringWithFormat:(id)arg1;	// IMP=0x0010000000043e57
@end

