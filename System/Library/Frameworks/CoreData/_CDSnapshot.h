//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID;

__attribute__((visibility("hidden")))
@interface _CDSnapshot : NSObject
{
    int _cd_rc;	// 8 = 0x8
    int _cd_version;	// 12 = 0xc
    NSManagedObjectID *_cd_objectID;	// 16 = 0x10
    struct _snapshotFlags_st {
        unsigned int _readOnly:1;
        unsigned int _reservedFlags:7;
    } _cd_flags;	// 24 = 0x18
    unsigned char _cd_nullFlags_;	// 28 = 0x1c
}

+ (unsigned int)newBatchAllocation:(id *)arg1 count:(unsigned int)arg2 withOwnedObjectIDs:(id *)arg3;	// IMP=0x0010000000255824
+ (void)_entityDeallocated;	// IMP=0x00100000002555ee
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002555e2
+ (id)alloc;	// IMP=0x00100000002555d6
+ (Class)classForEntity:(id)arg1;	// IMP=0x0010000000254783
+ (void)initialize;	// IMP=0x0010000000254713
+ (void)_invalidateStaticCaches;	// IMP=0x001000000025413e
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000256554
- (id)valueForKey:(id)arg1;	// IMP=0x0000000000256434
- (id)description;	// IMP=0x0000000000255ab8
- (void)dealloc;	// IMP=0x0000000000255a49
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000255a3d
- (unsigned long long)hash;	// IMP=0x00000000002559d5
- (id)mutableCopy;	// IMP=0x0000000000255914
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000255902
- (id)copy;	// IMP=0x00000000002558c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002558b7

@end

