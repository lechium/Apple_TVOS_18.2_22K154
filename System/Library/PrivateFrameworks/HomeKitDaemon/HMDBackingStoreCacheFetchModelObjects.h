//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup, NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDBackingStoreCacheFetchModelObjects
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    CDUnknownBlockType _fetchResult;	// 16 = 0x10
    NSArray *_uuids;	// 24 = 0x18
    NSArray *_names;	// 32 = 0x20
    NSUUID *_parent;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000037c4f8
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSUUID *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSArray *names; // @synthesize names=_names;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x000000000037bfcd
- (id)initWithGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(CDUnknownBlockType)arg4;	// IMP=0x000000000037beed
- (id)initWithParent:(id)arg1 type:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000037be31
- (id)initWithGroup:(id)arg1 names:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000037bd51
- (id)initWithNames:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000037bc95
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;	// IMP=0x000000000037bbb5
- (id)initWithUUIDs:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000037baf9

@end

