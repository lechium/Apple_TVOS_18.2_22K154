//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;

__attribute__((visibility("hidden")))
@interface _HKDateCalendarUnitKey : NSObject
{
    NSDate *_date;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    unsigned long long _calendarUnit;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000018b278
@property(readonly, nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018b24f
- (unsigned long long)hash;	// IMP=0x000000000018b10c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018ae18
- (id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3;	// IMP=0x000000000018ac79

@end

