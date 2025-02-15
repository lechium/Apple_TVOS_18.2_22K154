//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator, NSURL;

__attribute__((visibility("hidden")))
@interface ACDDatabaseMigrator : NSObject
{
    NSManagedObjectContext *_migrationContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_privateCoordinator;	// 16 = 0x10
    NSURL *_databaseURL;	// 24 = 0x18
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 32 = 0x20
    NSDictionary *_storeOptions;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0060000000062386
- (void).cxx_destruct;	// IMP=0x00000000000649f8
@property(readonly, copy, nonatomic) NSDictionary *storeOptions; // @synthesize storeOptions=_storeOptions;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2;	// IMP=0x000000000006442e
- (long long)_versionForModel:(id)arg1;	// IMP=0x00000000000643bd
- (id)_compatibleModelForStoreAtURL:(id)arg1;	// IMP=0x0000000000063ede
- (id)_setUpContextForMigration;	// IMP=0x0000000000063bf0
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1;	// IMP=0x00000000000639cd
- (id)_fetchAllDataclassEntitles;	// IMP=0x00000000000637ca
- (void)_migrateNameAttributeOfDataclassEntities;	// IMP=0x000000000006363e
- (void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1;	// IMP=0x00000000000632a0
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1;	// IMP=0x0000000000062e86
- (_Bool)runReturningError:(id *)arg1;	// IMP=0x0000000000062493
- (id)initForDatabaseAtURL:(id)arg1 persistentStoreCoordinator:(id)arg2 storeOptions:(id)arg3;	// IMP=0x00000000000623c9
- (id)init;	// IMP=0x000000000006239e

@end

