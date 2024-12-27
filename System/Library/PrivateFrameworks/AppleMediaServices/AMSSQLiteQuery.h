//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQuery : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    AMSSQLiteQueryDescriptor *_descriptor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004c900a
- (id)_newSelectSQLWithProperties:(id)arg1;	// IMP=0x00000000004c8deb
@property(readonly) AMSSQLiteQueryDescriptor *queryDescriptor;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c89cc
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c8927
- (void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004c86e6
- (void)enumerateMemoryEntitiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004c8655
- (_Bool)deleteAllEntities;	// IMP=0x00000000004c84ae
- (_Bool)createTemporaryTableWithName:(id)arg1 properties:(id)arg2;	// IMP=0x00000000004c80cf
@property(readonly) long long countOfEntities;
- (id)copySelectSQLWithProperties:(id)arg1;	// IMP=0x00000000004c7e1e
- (id)copyEntityIdentifiers;	// IMP=0x00000000004c7d43
@property(readonly) AMSSQLiteConnection *connection;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x00000000004c7c98
- (id)initOnConnection:(id)arg1 descriptor:(id)arg2;	// IMP=0x00000000004c7bed

@end

