//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, PlusMediaReferenceSourceAppCoreDataRecord, PlusMediaSuggestionCoreDataRecord, PlusStorefrontCoreDataRecord;

@interface PlusMediaReferenceCoreDataRecord : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x0000000000151ff0

// Remaining properties
@property(nonatomic, copy) NSString *mediaId; // @dynamic mediaId;
@property(nonatomic, retain) PlusMediaSuggestionCoreDataRecord *mediaSuggestion; // @dynamic mediaSuggestion;
@property(nonatomic, retain) PlusMediaReferenceSourceAppCoreDataRecord *sourceApp; // @dynamic sourceApp;
@property(nonatomic, retain) PlusStorefrontCoreDataRecord *storefront; // @dynamic storefront;

@end

