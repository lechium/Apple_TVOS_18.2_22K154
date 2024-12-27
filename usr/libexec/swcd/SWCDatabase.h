//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSURL, SWCDomainCache, _SWCGeneration;
@protocol OS_dispatch_source;

@interface SWCDatabase : NSObject
{
    NSMutableOrderedSet *_entries;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_saveTimer;	// 24 = 0x18
    SWCDomainCache *_domainCache;	// 32 = 0x20
    unsigned int _shared:1;	// 40 = 0x28
    _SWCGeneration *_settingsGeneration;	// 48 = 0x30
    NSNumber *_launchServicesDatabaseGeneration;	// 56 = 0x38
    NSData *_enterpriseState;	// 64 = 0x40
}

+ (id)queue;	// IMP=0x0020000000010fff
+ (id)loadContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000010cf4
+ (id)new;	// IMP=0x0010000000010cc6
+ (id)sharedDatabase;	// IMP=0x0010000000010c16
+ (id)_archivedDataFromStorage:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000145cb
+ (id)_storageFromArchivedData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000144f2
- (void).cxx_destruct;	// IMP=0x0020000000013222
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(readonly) _SWCGeneration *settingsGeneration; // @synthesize settingsGeneration=_settingsGeneration;
- (void)scheduleNextSave;	// IMP=0x00100000000131b6
- (_Bool)saveReturningError:(id *)arg1;	// IMP=0x0010000000012e84
- (void)cleanOldSettings;	// IMP=0x0010000000012a6b
- (void)enumerateSettingsDictionariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012a55
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x0010000000012999
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2;	// IMP=0x001000000001255a
- (void)setSettingsDictionary:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x00100000000124a5
- (id)settingsDictionaryForServiceSpecifier:(id)arg1;	// IMP=0x001000000001248f
- (void)updateEntriesForDomain:(id)arg1 canonicalEntries:(id)arg2;	// IMP=0x0010000000012125
- (void)removeAllEntries;	// IMP=0x0010000000011f79
- (_Bool)removeEntries:(id)arg1;	// IMP=0x0010000000011ee5
- (_Bool)addEntries:(id)arg1;	// IMP=0x0010000000011e60
- (id)entryMatchingServiceSpecifier:(id)arg1;	// IMP=0x0010000000011d77
- (id)entryMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3;	// IMP=0x0010000000011a25
- (void)enumerateEntriesMatchingServiceSpecifierWithExactDomain:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011947
- (void)enumerateEntriesMatchingService:(id)arg1 exactDomain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011841
- (void)enumerateEntriesMatchingServiceSpecifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011752
- (void)enumerateEntriesMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011723
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000115a1
- (void)enumerateEntries:(id)arg1 matchingServiceSpecifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000114b3
- (void)enumerateEntries:(id)arg1 matchingService:(id)arg2 domain:(id)arg3 appID:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000011115
- (_Bool)mayContainEntryMatchingServiceSpecifier:(id)arg1;	// IMP=0x001000000001110d
- (id)entry:(id)arg1;	// IMP=0x0010000000011080
@property(readonly) NSURL *storageURL;
- (void)receiveSIGTERMSignal;	// IMP=0x0010000000010ec6
- (id)init;	// IMP=0x0010000000010ccf
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x0010000000014966
- (void)_scheduleSave;	// IMP=0x0010000000014689
- (id)_storageForArchiving;	// IMP=0x00100000000143d1
- (void)_removeSettingsForKeysNoSave:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x001000000001429a
- (id)_initShared;	// IMP=0x0010000000013dd3
- (_Bool)_deleteStorageItemReturningError:(id *)arg1;	// IMP=0x0010000000014ed2
- (_Bool)_updateStorageItemWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014e54
- (id)_dataFromStorageReturningError:(id *)arg1;	// IMP=0x0010000000014dd5
- (id)_dataURLReturningError:(id *)arg1;	// IMP=0x0010000000014d1c

@end

