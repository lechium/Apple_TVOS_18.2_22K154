//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class GamesPlayedSummaryList, NSDate, NSNumber, NSSet, NSString;

@interface GameSummary : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x002000000017712d

// Remaining properties
@property(copy, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSSet *compatiblePlatforms; // @dynamic compatiblePlatforms;
@property(copy, nonatomic) NSNumber *isArcade; // @dynamic isArcade;
@property(retain, nonatomic) GamesPlayedSummaryList *list; // @dynamic list;
@property(copy, nonatomic) NSDate *playedAt; // @dynamic playedAt;

@end

