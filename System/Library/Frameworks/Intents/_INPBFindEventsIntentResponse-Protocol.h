//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCalendarEvent;

@protocol _INPBFindEventsIntentResponse <NSObject>
+ (Class)eventsType;
@property(readonly, nonatomic) unsigned long long eventsCount;
@property(copy, nonatomic) NSArray *events;
- (_INPBCalendarEvent *)eventsAtIndex:(unsigned long long)arg1;
- (void)addEvents:(_INPBCalendarEvent *)arg1;
- (void)clearEvents;
@end

