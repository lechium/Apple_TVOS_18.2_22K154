//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface ManagedSessionScores : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000622cb0

// Remaining properties
@property(nonatomic) long long activityType; // @dynamic activityType;
@property(nonatomic, copy) NSData *scores; // @dynamic scores;
@property(nonatomic, copy) NSString *sessionIdentifier; // @dynamic sessionIdentifier;
@property(nonatomic) int workoutDuration; // @dynamic workoutDuration;
@property(nonatomic, copy) NSString *workoutIdentifier; // @dynamic workoutIdentifier;

@end

