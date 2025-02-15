//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLPersistenceManager, NSManagedObjectContext;

@interface CLStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    CLPersistenceManager *_persistenceManager;	// 16 = 0x10
}

@property(readonly, nonatomic) CLPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (int)countRecordsWithEntityName:(id)arg1 predicates:(id)arg2;	// IMP=0x001000000058ab5f
- (id)fetchRecordsWithEntityName:(id)arg1 byAndPredicates:(id)arg2;	// IMP=0x001000000058a745
- (_Bool)deleteRecordsWithEntityName:(id)arg1 byAndPredicates:(id)arg2;	// IMP=0x001000000058a505
- (_Bool)commitChangesToStore;	// IMP=0x001000000058a3b0
- (id)initWithDefaultPersistenceManager:(_Bool)arg1;	// IMP=0x001000000058a31e
- (id)initWithPersistenceManager:(id)arg1;	// IMP=0x001000000058a25e

@end

