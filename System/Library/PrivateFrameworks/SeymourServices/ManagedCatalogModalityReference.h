//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSOrderedSet, NSSet, NSString;

@interface ManagedCatalogModalityReference : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000614140

// Remaining properties
@property(nonatomic, retain) NSSet *alternativeActivityTypes; // @dynamic alternativeActivityTypes;
@property(nonatomic, retain) NSSet *features; // @dynamic features;
@property(nonatomic, retain) NSSet *filterPropertyTypes; // @dynamic filterPropertyTypes;
@property(nonatomic, retain) NSOrderedSet *healthKitActivityTypes; // @dynamic healthKitActivityTypes;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSString *kind; // @dynamic kind;
@property(nonatomic, copy) NSString *name; // @dynamic name;

@end

