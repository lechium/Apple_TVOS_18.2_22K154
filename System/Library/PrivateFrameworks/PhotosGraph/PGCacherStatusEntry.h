//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PGCacherStatusEntry : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000c5510

// Remaining properties
@property(nonatomic, copy) NSString *category; // @dynamic category;
@property(nonatomic, copy) NSDate *lastFailedFetchedDate; // @dynamic lastFailedFetchedDate;
@property(nonatomic, copy) NSDate *lastSuccessfulFetchedDate; // @dynamic lastSuccessfulFetchedDate;

@end

