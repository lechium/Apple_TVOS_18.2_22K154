//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString;

@interface GamesPlayed : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00200000001770ed

// Remaining properties
@property(retain, nonatomic) NSSet *entries; // @dynamic entries;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSString *playerID; // @dynamic playerID;

@end

