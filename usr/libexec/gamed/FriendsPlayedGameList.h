//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class GKGameCacheObject, NSDate, NSSet;

@interface FriendsPlayedGameList : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000001770ad

// Remaining properties
@property(retain, nonatomic) NSSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;

@end

