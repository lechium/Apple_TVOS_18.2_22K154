//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAnnouncementPlan : NSObject
{
    NSMutableArray *_plannedEvents;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
    double _distance;	// 24 = 0x18
    double _speed;	// 32 = 0x20
}

+ (double)desiredTimeGapBetweenEvent:(id)arg1 andEvent:(id)arg2;	// IMP=0x0060000000017e4f
- (void).cxx_destruct;	// IMP=0x0000000000017faf
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSMutableArray *plannedEvents; // @synthesize plannedEvents=_plannedEvents;
- (void)sortEvents;	// IMP=0x0000000000017d80
- (id)nextConflict;	// IMP=0x00000000000179e2
- (id)description;	// IMP=0x00000000000177d0
- (id)initWithEvents:(id)arg1 distance:(double)arg2 speed:(double)arg3 durations:(id)arg4;	// IMP=0x000000000001748c

@end

