//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaItem.h"

@class MPConcreteMediaEntityPropertiesCache, MPMediaLibrary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaItem : MPMediaItem
{
    MPMediaLibrary *_library;	// 8 = 0x8
    unsigned long long _persistentID;	// 16 = 0x10
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000123370
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x0010000000123311
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x001000000012321e
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)arg1;	// IMP=0x00100000001231af
- (void).cxx_destruct;	// IMP=0x00000000001227a6
- (void)incrementPlayCount;	// IMP=0x000000000012274c
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000012241f
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000122195
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000012206f
- (id)valuesForProperties:(id)arg1;	// IMP=0x0000000000121c80
- (id)cachedValueForProperty:(id)arg1 isCached:(_Bool *)arg2;	// IMP=0x0000000000121c63
- (id)valueForProperty:(id)arg1;	// IMP=0x0000000000121a85
- (id)_nonBatchableOrCachedValueForProperty:(id)arg1 needsFetch:(_Bool *)arg2;	// IMP=0x0000000000121827
- (id)_tokenBinaryIdentifierAsString;	// IMP=0x0000000000121763
- (unsigned long long)persistentID;	// IMP=0x0000000000121752
- (id)mediaLibrary;	// IMP=0x000000000012173d
- (_Bool)existsInLibrary;	// IMP=0x0000000000121712
- (Class)classForCoder;	// IMP=0x0000000000121701
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012163f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012157f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000121574
- (id)description;	// IMP=0x00000000001214f5
- (void)invalidateCachedProperties;	// IMP=0x00000000001214d8
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (void)dealloc;	// IMP=0x00000000001213fd
- (id)_initWithPersistentID:(unsigned long long)arg1 library:(id)arg2 propertiesCache:(id)arg3;	// IMP=0x00000000001212d6
- (id)initWithPersistentID:(unsigned long long)arg1 library:(id)arg2;	// IMP=0x000000000012129c
- (id)initWithPersistentID:(unsigned long long)arg1;	// IMP=0x0000000000121262
- (id)init;	// IMP=0x0000000000121223

@end

