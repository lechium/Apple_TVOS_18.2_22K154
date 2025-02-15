//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSPersistentStoreCoordinator, NSString, NSURL, VSOptional;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPersistentContainer : NSObject
{
    _Bool _didSetupPersistence;	// 8 = 0x8
    _Bool _skipMigration;	// 9 = 0x9
    NSOperationQueue *_migrationQueue;	// 16 = 0x10
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 24 = 0x18
    VSOptional *_viewContext;	// 32 = 0x20
    NSString *_persistentStoreType;	// 40 = 0x28
    NSURL *_persistentStoreURL;	// 48 = 0x30
    NSURL *_subscriptionsPropertyListURL;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000005eadd
@property(copy, nonatomic) NSURL *subscriptionsPropertyListURL; // @synthesize subscriptionsPropertyListURL=_subscriptionsPropertyListURL;
@property(copy, nonatomic) NSURL *persistentStoreURL; // @synthesize persistentStoreURL=_persistentStoreURL;
@property(copy, nonatomic) NSString *persistentStoreType; // @synthesize persistentStoreType=_persistentStoreType;
@property(nonatomic) _Bool skipMigration; // @synthesize skipMigration=_skipMigration;
@property(retain, nonatomic) VSOptional *viewContext; // @synthesize viewContext=_viewContext;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(nonatomic) _Bool didSetupPersistence; // @synthesize didSetupPersistence=_didSetupPersistence;
@property(retain, nonatomic) NSOperationQueue *migrationQueue; // @synthesize migrationQueue=_migrationQueue;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000000005ea24
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005ea10
- (void)_performBlock:(CDUnknownBlockType)arg1 andWait:(_Bool)arg2;	// IMP=0x000000000005e68f
- (_Bool)_setupPersistenceIfNeeded:(id *)arg1;	// IMP=0x000000000005dbbe
- (void)_removePersistentStore;	// IMP=0x000000000005daa5
- (id)init;	// IMP=0x000000000005d74f

@end

