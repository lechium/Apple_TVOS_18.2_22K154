//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB, NSArray, NSMutableDictionary, NSMutableOrderedSet;
@protocol GEOPDPlaceCacheManifestInfoProviding, GEOPDPlaceCacheSchedulingDelegate, OS_dispatch_source;

@interface GEOPDPlaceCache : NSObject
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    id <GEOPDPlaceCacheSchedulingDelegate> _schedulingDelegate;	// 16 = 0x10
    id <GEOPDPlaceCacheManifestInfoProviding> _manifestInfoProvider;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_cleanupTimer;	// 32 = 0x20
    NSMutableDictionary *_accessTimesDict;	// 40 = 0x28
    NSMutableOrderedSet *_recentlySeenPlaceHashes;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000011b6e
@property(readonly, nonatomic) NSArray *serviceVersions;
- (void)cancelCleanupBlockSchedule;	// IMP=0x0010000000011a18
- (void)runCleanupBlock:(CDUnknownBlockType)arg1 inSecondsFromNow:(long long)arg2;	// IMP=0x001000000001182d
- (long long)currentTime;	// IMP=0x001000000001180e
- (id)internalSerialQueue;	// IMP=0x00100000000117f8
- (void)iterateAllHandleKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011756
- (void)iterateAllPhoneKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000116b4
- (void)iterateAllBasemapIdKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011612
- (void)iterateAllMUIDKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011570
- (void)iterateAllKeysWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011556
- (void)_iterateAllKeysFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011291
- (void)iterateHandlePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000111ef
- (void)iteratePhonePlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000001114d
- (void)iterateBasemapIdPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000110ab
- (void)iterateMUIDPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011009
- (void)iterateAllPlacesWithBlock:(CDUnknownBlockType)arg1 finishedBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010fef
- (void)_iterateAllPlacesFilteringCacheKeyWithPredicate:(id)arg1 entryBlock:(CDUnknownBlockType)arg2 finishedBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000010ca5
- (void)close;	// IMP=0x0010000000010c38
- (void)_evictPlaceWithHash:(id)arg1;	// IMP=0x00100000000109b6
- (void)periodicCleanupAndAccessTimeUpdate;	// IMP=0x0010000000010399
- (void)scheduleCleanup;	// IMP=0x001000000001028f
- (void)enqueueAccessTimeUpdateForCacheKey:(id)arg1 accessTime:(long long)arg2;	// IMP=0x001000000001010e
- (void)evictAllEntries;	// IMP=0x001000000000ff5f
- (void)deletePhoneNumberMapping;	// IMP=0x001000000000fdcf
- (unsigned long long)_shrinkBySize:(unsigned long long)arg1;	// IMP=0x001000000000fbea
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;	// IMP=0x001000000000fa9a
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f81a
- (unsigned long long)_calculateFreeableSpace;	// IMP=0x001000000000f6f2
- (unsigned long long)calculateFreeableSpaceSync;	// IMP=0x001000000000f5b1
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f3e1
- (id)lookupIdentifierByPhoneNumber:(id)arg1;	// IMP=0x001000000000ee64
- (void)lookupPlaceByHandle:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000ea63
- (void)lookupPlaceByIdentifier:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e3ec
- (void)lookupPlaceByPhoneNumber:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000dfd5
- (void)lookupPlaceByRequest:(id)arg1 allowExpired:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000daba
- (void)_lookupPlaceByRequestKey:(id)arg1 allowExpiredPlace:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d48a
- (void)storePlace:(id)arg1 forRequest:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ce40
- (void)storePlace:(id)arg1 forRequest:(id)arg2;	// IMP=0x001000000000cd6f
- (void)trackPlace:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c89c
- (void)trackPlace:(id)arg1;	// IMP=0x001000000000c7e6
- (id)_cacheKeyForHandle:(id)arg1;	// IMP=0x001000000000c72b
- (id)_cacheKeysForPlace:(id)arg1 request:(id)arg2;	// IMP=0x001000000000c378
- (void)_storePlace:(id)arg1 withHash:(id)arg2 forRequestKeys:(id)arg3;	// IMP=0x001000000000b69a
- (_Bool)_meetsManifestVersionPolicyForPlace:(id)arg1;	// IMP=0x001000000000b3d6
- (_Bool)_deleteAndResetDB:(id)arg1;	// IMP=0x001000000000b1b7
- (_Bool)_validateDBLocaleAndResetIfNecessary;	// IMP=0x000000000000adf7
- (void)_localeChanged:(id)arg1;	// IMP=0x001000000000ac49
- (void)dealloc;	// IMP=0x001000000000abd4
- (id)initWithCacheFilePath:(id)arg1 schedulingDelegate:(id)arg2 manifestInfoProvider:(id)arg3;	// IMP=0x001000000000a75f

@end

