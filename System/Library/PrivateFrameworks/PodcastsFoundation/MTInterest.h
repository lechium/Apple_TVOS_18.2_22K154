//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class MTCategory, MTChannel, MTPodcast, NSData, NSDate;

@interface MTInterest : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000178af0

// Remaining properties
@property(nonatomic) unsigned long long adamID; // @dynamic adamID;
@property(nonatomic, retain) MTCategory *category; // @dynamic category;
@property(nonatomic, retain) MTChannel *channel; // @dynamic channel;
@property(nonatomic) double interestValue; // @dynamic interestValue;
@property(nonatomic, copy) NSDate *lastUpdatedDate; // @dynamic lastUpdatedDate;
@property(nonatomic, retain) MTPodcast *podcast; // @dynamic podcast;
@property(nonatomic, copy) NSData *unknownSyncProperties; // @dynamic unknownSyncProperties;

@end

