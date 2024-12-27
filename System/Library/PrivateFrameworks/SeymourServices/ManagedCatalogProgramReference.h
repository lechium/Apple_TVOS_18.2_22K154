//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSOrderedSet, NSString;

@interface ManagedCatalogProgramReference : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000614fd0

// Remaining properties
@property(nonatomic, copy) NSString *contentRating; // @dynamic contentRating;
@property(nonatomic, retain) NSOrderedSet *contributorIdentifierss; // @dynamic contributorIdentifierss;
@property(nonatomic, copy) NSString *dateReleased; // @dynamic dateReleased;
@property(nonatomic, retain) NSOrderedSet *equipmentIdentifierss; // @dynamic equipmentIdentifierss;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, retain) NSOrderedSet *modalityIdentifierss; // @dynamic modalityIdentifierss;
@property(nonatomic, retain) NSOrderedSet *musicGenreIdentifierss; // @dynamic musicGenreIdentifierss;
@property(nonatomic, retain) NSOrderedSet *themeIdentifierss; // @dynamic themeIdentifierss;
@property(nonatomic, retain) NSOrderedSet *trainerIdentifierss; // @dynamic trainerIdentifierss;
@property(nonatomic, retain) NSOrderedSet *workoutIdentifierss; // @dynamic workoutIdentifierss;

@end

