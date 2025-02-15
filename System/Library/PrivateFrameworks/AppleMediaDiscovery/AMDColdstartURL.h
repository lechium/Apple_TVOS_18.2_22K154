//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMDColdstartURL : NSManagedObject
{
}

+ (id)deleteWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000058750
+ (id)deleteAllColdstartUrls:(id *)arg1;	// IMP=0x0080000000058230
+ (void)saveColdstartURL:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000057c20
+ (void)deleteColdstartURLs:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000057540
+ (id)fetchAll:(id *)arg1;	// IMP=0x0080000000056f40
+ (id)getCurrentURLInfoByModelId;	// IMP=0x0080000000056bd0
+ (id)getColdstartURLForModel:(id)arg1 error:(id *)arg2;	// IMP=0x00800000000563d0
+ (id)fetchRequest;	// IMP=0x00800000000f5280

// Remaining properties
@property(copy, nonatomic) NSString *modelId; // @dynamic modelId;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

