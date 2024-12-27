//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface ADDeviceSyncIncrementalChange : NSObject
{
    unsigned long long _generation;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSArray *_insertedOrUpdatedItems;	// 24 = 0x18
    NSArray *_deletedItemUUIDs;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000027d82a
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d7dd
- (void).cxx_destruct;	// IMP=0x002000000027d539
@property(readonly, copy, nonatomic) NSArray *deletedItemUUIDs; // @synthesize deletedItemUUIDs=_deletedItemUUIDs;
@property(readonly, copy, nonatomic) NSArray *insertedOrUpdatedItems; // @synthesize insertedOrUpdatedItems=_insertedOrUpdatedItems;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000027d44e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000027d273
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000027d268
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000027d0e2
- (unsigned long long)hash;	// IMP=0x001000000027d046
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000027cfb4
- (id)description;	// IMP=0x001000000027cfa0
- (id)initWithGeneration:(unsigned long long)arg1 date:(id)arg2 insertedOrUpdatedItems:(id)arg3 deletedItemUUIDs:(id)arg4;	// IMP=0x001000000027cead
- (id)init;	// IMP=0x001000000027ce99
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000027cd09
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000027d832

@end

