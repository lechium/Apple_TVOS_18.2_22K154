//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedAchievementWeeklyStreak, NSSet, NSString;

@interface ManagedAchievementEnvironmentCache : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000060dff0

// Remaining properties
@property(nonatomic, copy) NSString *activePlanFirstCompletedSessionIdentifier; // @dynamic activePlanFirstCompletedSessionIdentifier;
@property(nonatomic, copy) NSString *activePlanMostRecentlyCompletedSessionIdentifier; // @dynamic activePlanMostRecentlyCompletedSessionIdentifier;
@property(nonatomic, retain) NSSet *currentBestEnergyBurnedPerModality; // @dynamic currentBestEnergyBurnedPerModality;
@property(nonatomic, retain) ManagedAchievementWeeklyStreak *currentStreak; // @dynamic currentStreak;
@property(nonatomic) int longestWeeklyStreak; // @dynamic longestWeeklyStreak;
@property(nonatomic, retain) NSSet *numberOfGuidedWorkoutsOver5MinutesPerModality; // @dynamic numberOfGuidedWorkoutsOver5MinutesPerModality;
@property(nonatomic) int numberOfWorkoutsOver5Minutes; // @dynamic numberOfWorkoutsOver5Minutes;
@property(nonatomic, retain) NSSet *numberOfWorkoutsOver5MinutesPerModality; // @dynamic numberOfWorkoutsOver5MinutesPerModality;

@end

