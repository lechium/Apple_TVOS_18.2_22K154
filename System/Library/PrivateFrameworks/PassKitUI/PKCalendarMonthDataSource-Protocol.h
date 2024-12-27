//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSCalendar, NSDate, NSString;

@protocol PKCalendarMonthDataSource <NSObject>
- (NSCalendar *)calendar;
- (NSString *)stringForDay:(NSDate *)arg1;
- (NSString *)stringForWeekday:(NSDate *)arg1;
- (_Bool)isDateSelected:(NSDate *)arg1;
- (_Bool)canSelectDate:(NSDate *)arg1;
- (_Bool)shouldShowDate:(NSDate *)arg1;
- (NSDate *)calendarMonthStartDate;
- (unsigned long long)numberOfDaysInWeek;
- (unsigned long long)numberOfWeeks;
@end

