//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTriggerBuilder-Protocol.h>

@class HMEvent, NSArray, NSPredicate;

@protocol HMEventTriggerBuilder <HMTriggerBuilder>
@property(copy, nonatomic) NSArray *endEvents;
@property(copy, nonatomic) NSArray *events;
@property(copy, nonatomic) NSPredicate *predicate;
@property(nonatomic) _Bool executeOnce;
@property(copy, nonatomic) NSArray *recurrences;
@property(nonatomic) unsigned long long recurrenceDays;
- (void)removeEndEvent:(HMEvent *)arg1;
- (void)addEndEvent:(HMEvent *)arg1;
- (void)removeEvent:(HMEvent *)arg1;
- (void)addEvent:(HMEvent *)arg1;
@end

