//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMActionSetBuilder, HMHome, HMTriggerPolicy, NSArray, NSDate, NSDateComponents, NSString, NSTimeZone, NSUUID;

__attribute__((visibility("hidden")))
@interface _HMTimerTriggerBuilder
{
    NSDate *_fireDate;	// 24 = 0x18
    NSTimeZone *_timeZone;	// 32 = 0x20
    NSDateComponents *_recurrence;	// 40 = 0x28
    NSString *_significantEvent;	// 48 = 0x30
    NSDateComponents *_significantEventOffset;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00100000000dee00
- (void).cxx_destruct;	// IMP=0x00000000000ded8b
- (void)updateSignificantEventOffset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000deb7c
- (void)_setSignificantEventOffset:(id)arg1;	// IMP=0x00000000000deaff
@property(copy, nonatomic) NSDateComponents *significantEventOffset;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de7bd
@property(copy, nonatomic) NSString *significantEvent;
- (void)updateRecurrence:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de4c4
@property(copy, nonatomic) NSDateComponents *recurrence;
- (void)updateTimeZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000de1de
@property(copy, nonatomic) NSTimeZone *timeZone;
- (void)updateFireDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dde8c
@property(copy, nonatomic) NSDate *fireDate;
@property(readonly, copy, nonatomic) NSDate *fireDateIfSet;
- (Class)class;	// IMP=0x00000000000ddd0f
- (id)recurrenceCalendar;	// IMP=0x00000000000dee5a

// Remaining properties
@property(copy, nonatomic) NSArray *actionSets;
@property(readonly, copy, nonatomic) NSString *configuredName;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMHome *home;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool nameIsConfigured;
@property(retain, nonatomic) HMTriggerPolicy *policy;
@property(nonatomic) unsigned long long recurrenceDays;
@property(copy, nonatomic) NSArray *recurrences;
@property(readonly) Class superclass;
@property(readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;

@end

