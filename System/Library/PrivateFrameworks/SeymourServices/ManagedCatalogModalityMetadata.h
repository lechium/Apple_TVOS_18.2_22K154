//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class ManagedCatalogPreview, NSData, NSString;

@interface ManagedCatalogModalityMetadata : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000613c80

// Remaining properties
@property(nonatomic, copy) NSString *abridgedSummary; // @dynamic abridgedSummary;
@property(nonatomic, copy) NSData *artwork; // @dynamic artwork;
@property(nonatomic, copy) NSString *identifier; // @dynamic identifier;
@property(nonatomic, retain) ManagedCatalogPreview *preview; // @dynamic preview;
@property(nonatomic, copy) NSString *sharingURL; // @dynamic sharingURL;
@property(nonatomic, copy) NSString *summary; // @dynamic summary;

@end

