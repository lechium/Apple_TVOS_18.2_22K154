//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedAchievementEnvironmentCache, NSString;

@interface ManagedEnergyBurnedRecord : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000619ed0

// Remaining properties
@property(nonatomic, retain) ManagedAchievementEnvironmentCache *achievementEnvironmentCache; // @dynamic achievementEnvironmentCache;
@property(nonatomic) double energyBurned; // @dynamic energyBurned;
@property(nonatomic, copy) NSString *modalityIdentifier; // @dynamic modalityIdentifier;

@end

