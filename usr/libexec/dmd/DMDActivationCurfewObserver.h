//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSSet, NSString;

@interface DMDActivationCurfewObserver
{
    NSString *_calendarIdentifier;	// 8 = 0x8
    NSSet *_notificationTimes;	// 16 = 0x10
    NSMutableArray *_expiredNotificationTimes;	// 24 = 0x18
    NSMutableArray *_scheduledAlarmIdentifiers;	// 32 = 0x20
    long long _startDay;	// 40 = 0x28
    long long _startHour;	// 48 = 0x30
    long long _startMinute;	// 56 = 0x38
    long long _startSecond;	// 64 = 0x40
    long long _endDay;	// 72 = 0x48
    long long _endHour;	// 80 = 0x50
    long long _endMinute;	// 88 = 0x58
    long long _endSecond;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000000ac7b
@property(nonatomic) long long endSecond; // @synthesize endSecond=_endSecond;
@property(nonatomic) long long endMinute; // @synthesize endMinute=_endMinute;
@property(nonatomic) long long endHour; // @synthesize endHour=_endHour;
@property(nonatomic) long long endDay; // @synthesize endDay=_endDay;
@property(nonatomic) long long startSecond; // @synthesize startSecond=_startSecond;
@property(nonatomic) long long startMinute; // @synthesize startMinute=_startMinute;
@property(nonatomic) long long startHour; // @synthesize startHour=_startHour;
@property(nonatomic) long long startDay; // @synthesize startDay=_startDay;
@property(retain, nonatomic) NSMutableArray *scheduledAlarmIdentifiers; // @synthesize scheduledAlarmIdentifiers=_scheduledAlarmIdentifiers;
@property(retain, nonatomic) NSMutableArray *expiredNotificationTimes; // @synthesize expiredNotificationTimes=_expiredNotificationTimes;
@property(retain, nonatomic) NSSet *notificationTimes; // @synthesize notificationTimes=_notificationTimes;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
- (id)_nextDateAfter:(id)arg1 matchingWeekday:(long long)arg2 hour:(long long)arg3 minute:(long long)arg4 second:(long long)arg5 inCalendar:(id)arg6;	// IMP=0x001000000000a9ea
- (id)_datesForNextCurfewBoundary;	// IMP=0x001000000000a4f7
- (void)_registerPredicateObserver;	// IMP=0x001000000000a02e
- (_Bool)_extractComponentsFromPredicate:(id)arg1;	// IMP=0x00100000000096e2
- (id)metadata;	// IMP=0x00100000000095b1
- (void)updateObserverRegistration;	// IMP=0x001000000000959f
- (void)invalidate;	// IMP=0x00100000000093e2
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x0010000000008e4e
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 curfewPredicate:(id)arg3;	// IMP=0x0010000000008d5d

@end

