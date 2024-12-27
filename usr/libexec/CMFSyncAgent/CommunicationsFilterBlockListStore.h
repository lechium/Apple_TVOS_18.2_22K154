//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CMFSyncAgentDataStore;

@interface CommunicationsFilterBlockListStore : NSObject
{
    id <CMFSyncAgentDataStore> _dataStore;	// 8 = 0x8
    NSMutableArray *_cachedBlockList;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000000024e9
@property(retain, nonatomic) NSMutableArray *cachedBlockList; // @synthesize cachedBlockList=_cachedBlockList;
@property(readonly, nonatomic) id <CMFSyncAgentDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1;	// IMP=0x0010000000003e7b
- (void)_stopSharingFocusStatusWithFilterItem:(id)arg1;	// IMP=0x0010000000003cc8
- (void)_updateStore:(id)arg1 revision:(unsigned long long)arg2 updateKVS:(_Bool)arg3 updateLocal:(_Bool)arg4 itemsNeedConversion:(_Bool)arg5;	// IMP=0x00100000000037e8
- (_Bool)isItemInList:(id)arg1;	// IMP=0x00100000000036ea
- (id)_isItemInList:(id)arg1 blockList:(id)arg2;	// IMP=0x00100000000035c1
- (id)_copyItems:(_Bool)arg1;	// IMP=0x00100000000034f8
- (id)copyAllItems;	// IMP=0x00100000000034e4
- (id)copyAllItemsAsDictionaries;	// IMP=0x00100000000034cd
- (_Bool)removeItemForAllServices:(id)arg1;	// IMP=0x001000000000336e
- (_Bool)addItemForAllServices:(id)arg1;	// IMP=0x0010000000002a99
- (void)_storeDidChangeExternally;	// IMP=0x0010000000002a2f
- (void)updateDataStore;	// IMP=0x001000000000288e
- (void)synchronizeDataStore;	// IMP=0x00100000000027f3
- (void)migrateLegacyDataStoreIfNeeded;	// IMP=0x0010000000002669
- (void)clearBlockList;	// IMP=0x0010000000002642
- (void)dealloc;	// IMP=0x00100000000025f7
- (id)init;	// IMP=0x001000000000252e

@end

