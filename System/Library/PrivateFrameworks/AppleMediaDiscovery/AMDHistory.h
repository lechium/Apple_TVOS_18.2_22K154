//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AMDHistory : NSManagedObject
{
}

+ (id)fetchRequest;	// IMP=0x00800000000f5340

// Remaining properties
@property(nonatomic) short day; // @dynamic day;
@property(nonatomic) short domain; // @dynamic domain;
@property(retain, nonatomic) NSData *results; // @dynamic results;
@property(copy, nonatomic) NSString *useCaseId; // @dynamic useCaseId;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

