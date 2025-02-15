//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SHClusterStatementRunner : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_databaseURL;	// 16 = 0x10
    NSArray *_validDatabaseKeys;	// 24 = 0x18
}

+ (id)supportedKeys;	// IMP=0x0060000000009c17
- (void).cxx_destruct;	// IMP=0x000000000000ade1
@property(readonly, nonatomic) NSArray *validDatabaseKeys; // @synthesize validDatabaseKeys=_validDatabaseKeys;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (id)supportedKeysForDatabaseAsStringWithPrefix:(id)arg1;	// IMP=0x000000000000ac20
- (id)supportedKeysForDatabaseAsString;	// IMP=0x000000000000ac07
- (id)mediaItemsAtCohesionLevel:(long long)arg1 forQueryMediaIDs:(id)arg2 filteredBySeedMediaIDs:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a5bd
- (id)mediaItemsWithQuery:(id)arg1 tokens:(id)arg2 objects:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a1f3
- (id)mediaItemsFromPropertyCollection:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a05d
- (id)mediaItemsSimilarToMediaItemValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009e97
- (id)supportedKeysForDatabase;	// IMP=0x0000000000009cd9
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0000000000009a69
- (void)dealloc;	// IMP=0x0000000000009a19

@end

