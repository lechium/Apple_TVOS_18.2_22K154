//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogPreview, NSSet, NSString;

@interface ManagedTrainerMetadata : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000006254f0

// Remaining properties
@property(nonatomic, copy) NSString *bio; // @dynamic bio;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, copy) NSString *informalName; // @dynamic informalName;
@property(nonatomic, retain) ManagedCatalogPreview *preview; // @dynamic preview;
@property(nonatomic, copy) NSString *sharingURL; // @dynamic sharingURL;
@property(nonatomic, retain) NSSet *socialMediaHandles; // @dynamic socialMediaHandles;

@end

