//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKDayIndex)
+ (id)hk_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x00600000000b2623
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00600000000ffc10
+ (id)hk_componentsWithDays:(long long)arg1;	// IMP=0x00600000000ffbdf
+ (id)hk_oneWeek;	// IMP=0x00600000000ffba7
+ (id)hk_oneDay;	// IMP=0x00600000000ffb90
+ (id)hk_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x00600000002963e4
- (id)hk_dayIndexDateDescription;	// IMP=0x00100000000b288d
- (long long)hk_dayIndex;	// IMP=0x00100000000b2778
- (long long)hk_indexForDate:(id)arg1 anchorDate:(id)arg2;	// IMP=0x00100000001009d5
- (id)hk_dateIntervalForDate:(id)arg1 anchorDate:(id)arg2 outIndex:(long long *)arg3;	// IMP=0x0010000000100602
- (long long)hk_ageWithCurrentDate:(id)arg1;	// IMP=0x001000000010053a
- (id)hk_negativeComponents;	// IMP=0x0010000000100521
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;	// IMP=0x00100000001003de
- (id)hk_populatedCalendarGregorianCalendarDefault;	// IMP=0x001000000000ada5
- (long long)hk_maxComponentValue;	// IMP=0x00100000001001b4
- (id)_hk_dateComponentsMultipliedByCount:(long long)arg1;	// IMP=0x00100000000ffeee
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000ffe09
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000ffcd1
- (double)hk_approximateDuration;	// IMP=0x00100000000ffc46
- (id)hk_dateOptionalDescription;	// IMP=0x0010000000296514
- (id)hk_minuteNumber;	// IMP=0x00100000002964a4
- (id)hk_hourNumber;	// IMP=0x0010000000296434
@end

