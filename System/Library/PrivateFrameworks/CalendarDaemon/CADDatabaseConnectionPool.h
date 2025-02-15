//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADDatabaseInitializationOptions, NSHashTable, NSMutableDictionary, NSString;
@protocol CADDatabaseConnectionPoolManager, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface CADDatabaseConnectionPool : NSObject
{
    id <CADDatabaseConnectionPoolManager> _manager;	// 8 = 0x8
    CADDatabaseInitializationOptions *_initOptions;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSObject<OS_dispatch_workloop> *_lowPriorityTasks;	// 32 = 0x20
    _Bool _needCheckAuxDatabaseSequenceAndRestoreGeneration;	// 40 = 0x28
    int _auxDatabaseSequence;	// 44 = 0x2c
    int _databaseRestoreGeneration;	// 48 = 0x30
    NSMutableDictionary *_pools;	// 56 = 0x38
    NSHashTable *_clients;	// 64 = 0x40
    NSHashTable *_delegates;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000003b94f
- (void)purgeConnectionsLastUsedPriorTo:(unsigned long long)arg1 stats:(CDStruct_70551160 *)arg2;	// IMP=0x000000000003b796
- (void)reportIntegrityErrors:(id)arg1;	// IMP=0x000000000003b6ec
- (unsigned long long)numberOfClients;	// IMP=0x000000000003b5e4
- (void)removeClient:(id)arg1;	// IMP=0x000000000003b590
- (void)addClient:(id)arg1;	// IMP=0x000000000003b53c
- (void)notifyDelegatesGenerationChanged;	// IMP=0x000000000003b50e
- (void)forEachDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b3b0
- (_Bool)performASAPWithConfiguration:(id)arg1 databaseID:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b013
- (void)prepareDatabase:(struct CalDatabase *)arg1 forUseWithConfiguration:(id)arg2;	// IMP=0x000000000003af4c
- (id)_pools;	// IMP=0x000000000003ac4f
- (id)createConnectionForPool:(id)arg1;	// IMP=0x000000000003ab8e
- (void)setupDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000003ab1d
- (id)_openDatabases;	// IMP=0x000000000003a580
- (void)_checkGenerationAndAuxDatabaseSequence:(_Bool *)arg1;	// IMP=0x000000000003a385
- (void)databaseChangedExternally:(id)arg1 auxDatabaseID:(int)arg2;	// IMP=0x0000000000039ff9
- (int)databaseRestoreGeneration;	// IMP=0x0000000000039fb9
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000039f65
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000039f11
- (void)addCreatedAuxDatabase:(struct CalDatabase *)arg1;	// IMP=0x0000000000039af1
- (void)performWithAllDatabasesWithConfiguration:(id)arg1 priority:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039788
- (_Bool)performWithConfiguration:(id)arg1 priority:(unsigned long long)arg2 databaseID:(int)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000000395df
- (void)dealloc;	// IMP=0x000000000003959a
- (id)initWithOptions:(id)arg1 manager:(id)arg2;	// IMP=0x000000000003948b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

