//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSURL;

@interface MADManagedSpotlightEntry : NSManagedObject
{
}

+ (unsigned long long)countForMediaType:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00600000001c654e
+ (_Bool)deleteEntryWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001c62b8
+ (id)fetchEntryWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00600000001c5cb1
+ (id)fetchEntriesWithMediaType:(unsigned long long)arg1 fetchLimit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00600000001c5a10
+ (id)entryWithURL:(id)arg1 uniqueIdentifier:(id)arg2 bundleIdentifier:(id)arg3 typeIdentifier:(id)arg4 sandboxToken:(id)arg5 mediaType:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x00600000001c52b3
- (id)description;	// IMP=0x00000000001c5025

// Remaining properties
@property(nonatomic) int attemptCount; // @dynamic attemptCount;
@property(copy, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(nonatomic) int mediaType; // @dynamic mediaType;
@property(copy, nonatomic) NSDate *nextAttemptDate; // @dynamic nextAttemptDate;
@property(copy, nonatomic) NSString *sandboxToken; // @dynamic sandboxToken;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(copy, nonatomic) NSURL *url; // @dynamic url;

@end

