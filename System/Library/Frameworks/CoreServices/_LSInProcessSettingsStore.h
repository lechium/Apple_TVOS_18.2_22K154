//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSSettingsStore.h"

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LSInProcessSettingsStore : LSSettingsStore
{
    NSObject<OS_dispatch_source> *_dbCloseTimer;	// 24 = 0x18
    struct sqlite3 *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_internalQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000eb90a
@property(readonly) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
- (unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)arg1;	// IMP=0x00000000000eb731
- (void)_internalQueue_loadDatabase;	// IMP=0x00000000000eb56b
- (unsigned char)userElectionForExtensionKey:(id)arg1;	// IMP=0x00000000000eb3d4
- (void)dealloc;	// IMP=0x00000000000eb351
- (void)_internalQueue_purgeDatabase;	// IMP=0x00000000000eb2b5
- (id)init;	// IMP=0x00000000000eb129

@end

