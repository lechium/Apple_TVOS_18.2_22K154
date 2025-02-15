//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSManagedObjectID.h"

@class NSEntityDescription;

__attribute__((visibility("hidden")))
@interface NSTemporaryObjectID : NSManagedObjectID
{
    int _cd_rc;	// 8 = 0x8
    int _counter;	// 12 = 0xc
    NSEntityDescription *_entity;	// 16 = 0x10
}

+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x006000000021ac2a
+ (id)initWithEntity:(id)arg1;	// IMP=0x006000000021ac1d
+ (unsigned int)allocateBatch:(id *)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;	// IMP=0x006000000021ab85
+ (void)_release_1;	// IMP=0x006000000021aa3b
+ (id)_retain_1;	// IMP=0x006000000021aa20
+ (long long)version;	// IMP=0x006000000021aa15
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x006000000021aa0d
+ (id)alloc;	// IMP=0x006000000021aa04
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000021a9fb
+ (_Bool)_usesTaggedPointers;	// IMP=0x006000000021a9f3
+ (Class)classForStore:(id)arg1;	// IMP=0x006000000021a631
+ (void)setObjectStoreIdentifier:(id)arg1;	// IMP=0x006000000021a5de
+ (void)_storeDeallocated;	// IMP=0x006000000021a5c3
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000021a5bb
+ (void)initialize;	// IMP=0x006000000021a4e7
- (id)_referenceData;	// IMP=0x000000000021af96
- (id)URIRepresentation;	// IMP=0x000000000021af27
- (id)_retainedURIString;	// IMP=0x000000000021ae3e
- (_Bool)_isPersistentStoreAlive;	// IMP=0x000000000021ae12
- (id)_storeIdentifier;	// IMP=0x000000000021ada2
- (int)_temporaryIDCounter;	// IMP=0x000000000021ad92
- (_Bool)isTemporaryID;	// IMP=0x000000000021ad8a
- (id)entity;	// IMP=0x000000000021ad79
- (void)_setPersistentStore:(id)arg1;	// IMP=0x000000000021ad2a
- (id)persistentStore;	// IMP=0x000000000021ad0a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021acbb
- (unsigned long long)hash;	// IMP=0x000000000021ac75
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;	// IMP=0x000000000021ac5c
- (id)initWithEntity:(id)arg1;	// IMP=0x000000000021ac43
- (void)dealloc;	// IMP=0x000000000021aae0
- (unsigned long long)retainCount;	// IMP=0x000000000021aacc
- (oneway void)release;	// IMP=0x000000000021aa9c
- (id)retain;	// IMP=0x000000000021aa88

@end

