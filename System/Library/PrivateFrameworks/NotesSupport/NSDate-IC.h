//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (IC)
- (unsigned long long)ic_numberOfDaysFromDate:(id)arg1;	// IMP=0x003000000002907f
- (_Bool)ic_isWithinSameYear:(id)arg1;	// IMP=0x0030000000028ffa
- (_Bool)ic_isWithinSameMonth:(id)arg1;	// IMP=0x0030000000028f75
- (_Bool)ic_isWithinInclusiveDayIntervalBeginning:(id)arg1 ending:(id)arg2;	// IMP=0x0030000000028e8b
- (_Bool)ic_isLaterThanUnitsAgo:(unsigned long long)arg1 value:(unsigned long long)arg2;	// IMP=0x0030000000028dd4
- (_Bool)ic_isLaterThanDate:(id)arg1;	// IMP=0x0030000000028dba
- (_Bool)ic_isEarlierThanDate:(id)arg1;	// IMP=0x0030000000028da0
- (_Bool)ic_isSameDayAsDate:(id)arg1;	// IMP=0x0030000000028d21
@property(readonly, nonatomic) NSDate *ic_truncated;
- (id)ic_briefFormattedDate:(_Bool)arg1 locale:(id)arg2;	// IMP=0x00300000000286af
@property(readonly, nonatomic) NSString *ic_briefFormattedDateForAccessibility;
- (id)ic_briefFormattedDateForSiriLocale:(id)arg1 forAccessibility:(_Bool)arg2;	// IMP=0x003000000002862a
@property(readonly, nonatomic) NSString *ic_briefFormattedDate;
- (id)ic_shortFormattedDateForAccessibility:(_Bool)arg1;	// IMP=0x003000000002833f
@property(readonly, nonatomic) NSString *ic_shortFormattedDateForAccessibility;
@property(readonly, nonatomic) NSString *ic_shortFormattedDate;
@property(readonly, nonatomic) NSString *ic_iso8601Date;
@property(readonly, nonatomic) NSDate *ic_endOfDay;
@property(readonly, nonatomic) NSDate *ic_startOfDay;
@property(readonly, nonatomic) NSString *ic_localDateWithSeconds;
@property(readonly, nonatomic) _Bool ic_isYesterday;
@property(readonly, nonatomic) _Bool ic_isToday;
@end

