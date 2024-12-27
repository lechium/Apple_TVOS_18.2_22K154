//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMapMergePolicy, NSMutableDictionary, NSSet, NSString;
@protocol IDSPersistentMapDelegate, IDSPersistentMapPersister, OS_dispatch_queue, OS_dispatch_source;

@interface IDSPersistentMap : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    _Bool _allowBackup;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <IDSPersistentMapDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _versionNumber;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialPersistQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_saveTimer;	// 48 = 0x30
    double _writeCoalescingDelay;	// 56 = 0x38
    double _writeCoalescingLeeway;	// 64 = 0x40
    CDUnknownBlockType _migrationBlock;	// 72 = 0x48
    id <IDSPersistentMapPersister> _persister;	// 80 = 0x50
    NSSet *_decodableClasses;	// 88 = 0x58
    NSMutableDictionary *_cachedMap;	// 96 = 0x60
    unsigned long long _mergePolicyType;	// 104 = 0x68
    IDSPersistentMapMergePolicy *_mergePolicy;	// 112 = 0x70
}

+ (id)defaultPersisterForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2;	// IMP=0x00400000000e5233
- (void).cxx_destruct;	// IMP=0x00200000000e7bad
@property(readonly, nonatomic) _Bool allowBackup; // @synthesize allowBackup=_allowBackup;
@property(retain, nonatomic) IDSPersistentMapMergePolicy *mergePolicy; // @synthesize mergePolicy=_mergePolicy;
@property(nonatomic) unsigned long long mergePolicyType; // @synthesize mergePolicyType=_mergePolicyType;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) NSMutableDictionary *cachedMap; // @synthesize cachedMap=_cachedMap;
@property(retain, nonatomic) NSSet *decodableClasses; // @synthesize decodableClasses=_decodableClasses;
@property(retain, nonatomic) id <IDSPersistentMapPersister> persister; // @synthesize persister=_persister;
@property(copy, nonatomic) CDUnknownBlockType migrationBlock; // @synthesize migrationBlock=_migrationBlock;
@property(nonatomic) double writeCoalescingLeeway; // @synthesize writeCoalescingLeeway=_writeCoalescingLeeway;
@property(nonatomic) double writeCoalescingDelay; // @synthesize writeCoalescingDelay=_writeCoalescingDelay;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialPersistQueue; // @synthesize serialPersistQueue=_serialPersistQueue;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSPersistentMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performLockedBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7a26
- (long long)_versionNumberForPersistedMap:(id)arg1;	// IMP=0x00100000000e79b9
- (id)_mapByStrippingMetadataFromMap:(id)arg1;	// IMP=0x00100000000e799d
- (id)_mapByAddingMetadataToMap:(id)arg1;	// IMP=0x00100000000e78f0
- (id)_timerIdentifierFromBaseIdentifier:(id)arg1;	// IMP=0x00100000000e78cb
- (id)_encodeMap:(id)arg1;	// IMP=0x00100000000e774e
- (id)_decodeMapData:(id)arg1;	// IMP=0x00100000000e7551
- (void)_save;	// IMP=0x00100000000e6ff9
- (void)delayedSave;	// IMP=0x00100000000e6cd6
- (void)persistImmediately;	// IMP=0x00100000000e6a10
- (_Bool)loadAndCheckStatus;	// IMP=0x00100000000e642e
- (id)copyDictionaryRepresentation;	// IMP=0x00100000000e6321
- (void)removeAllObjects;	// IMP=0x00100000000e62bb
- (id)allValues;	// IMP=0x00100000000e61a2
- (id)allKeys;	// IMP=0x00100000000e6089
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00100000000e5fff
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000000e5fed
- (void)_performCacheReadingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5f34
- (void)_performCacheModifyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5d32
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00100000000e5c77
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000e5b82
- (id)objectForKey:(id)arg1;	// IMP=0x00100000000e5a28
- (id)debugDescription;	// IMP=0x00100000000e5889
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 mergePolicy:(id)arg4 writeCoalescingDelay:(double)arg5 writeCoalescingLeeway:(double)arg6 persister:(id)arg7 migrationBlock:(CDUnknownBlockType)arg8 allowBackup:(_Bool)arg9;	// IMP=0x00100000000e557b
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 dataProtectionClass:(long long)arg4 mergePolicy:(id)arg5 migrationBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000000e547e
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 persister:(id)arg4 migrationBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e5447
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 persister:(id)arg4 migrationBlock:(CDUnknownBlockType)arg5 allowBackup:(_Bool)arg6;	// IMP=0x00100000000e540b
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 migrationBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e53eb
- (id)initMemoryOnlyWithIdentifier:(id)arg1;	// IMP=0x00100000000e53b3
- (id)init;	// IMP=0x00100000000e5337

@end

