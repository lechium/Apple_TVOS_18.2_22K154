//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject
{
}

+ (_Bool)isYearlessComponents:(id)arg1;	// IMP=0x00800000000152b8
+ (id)dateByNormalizingToGMT:(id)arg1;	// IMP=0x0080000000015199
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;	// IMP=0x0080000000014edd
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x0080000000014e70
+ (id)yearlessComponentsFromDate:(id)arg1;	// IMP=0x0080000000014df3
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;	// IMP=0x0080000000014d1b
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;	// IMP=0x0080000000014c7c
+ (id)gregorianCalendarGMT;	// IMP=0x0080000000014bbc
+ (id)currentCalendarGMT;	// IMP=0x0080000000014afd
+ (void)localeDidChange:(id)arg1;	// IMP=0x0080000000014ac8
+ (void)initialize;	// IMP=0x0080000000014a26

@end

