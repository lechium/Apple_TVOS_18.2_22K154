//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, NSString;

@interface ManagedPlaylist : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000006205f0

// Remaining properties
@property(nonatomic, copy) NSDate *dateCreated; // @dynamic dateCreated;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, retain) NSSet *items; // @dynamic items;
@property(nonatomic, copy) NSString *name; // @dynamic name;

@end

