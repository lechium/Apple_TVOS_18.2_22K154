//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogWorkoutMetadata, NSData, NSString;

@interface ManagedMusicTrack : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x000000000061e990

// Remaining properties
@property(nonatomic, copy) NSString *album; // @dynamic album;
@property(nonatomic, copy) NSString *artist; // @dynamic artist;
@property(nonatomic, copy) NSData *artwork; // @dynamic artwork;
@property(nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata; // @dynamic catalogWorkoutMetadata;
@property(nonatomic, copy) NSString *contentRating; // @dynamic contentRating;
@property(nonatomic) double duration; // @dynamic duration;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic) double startTime; // @dynamic startTime;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end

