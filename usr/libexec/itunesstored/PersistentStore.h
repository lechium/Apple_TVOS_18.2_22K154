//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL, PersistentStoreConfiguration;

@interface PersistentStore : NSObject
{
    PersistentStoreConfiguration *_configuration;	// 8 = 0x8
    NSManagedObjectModel *_model;	// 16 = 0x10
    NSPersistentStoreCoordinator *_storeCoordinator;	// 24 = 0x18
    NSString *_threadContextKey;	// 32 = 0x20
    NSString *_threadCountKey;	// 40 = 0x28
}

- (id)_newLegacyManagedObjectModel;	// IMP=0x0020000000088323
- (_Bool)_loadStoreCoordinatorWithIntegrityCheck:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00100000000881a1
- (id)_baseFilePath;	// IMP=0x0010000000088161
- (id)managedObjectModel;	// IMP=0x0010000000087e43
- (_Bool)loadStoreCoordinatorWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000087685
- (_Bool)resetStore:(id *)arg1;	// IMP=0x0010000000087305
- (_Bool)performLightweightMigration:(id *)arg1;	// IMP=0x0010000000086bf0
@property(readonly) NSURL *modelFileURL;
- (void)endThreadContextSession;	// IMP=0x0010000000086a72
@property(readonly) NSURL *databaseFileURL;
@property(readonly) PersistentStoreConfiguration *configuration;
- (void)checkIntegrityWithInitializationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000086688
- (id)beginThreadContextSession;	// IMP=0x0010000000086535
- (void)dealloc;	// IMP=0x00100000000864d6
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x001000000008638d
- (id)init;	// IMP=0x0010000000086377

@end

