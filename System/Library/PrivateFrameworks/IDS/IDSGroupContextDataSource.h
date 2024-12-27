//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSGroupContextDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000147a2f
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_groupContextCacheMiddleware;	// IMP=0x00000000001479bd
- (id)_groupContextDataSource;	// IMP=0x0000000000147966
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001477f1
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000147693
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;	// IMP=0x00000000001474fd
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000147350
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000147340
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000147335
- (long long)middlewareCacheCostForContext:(id)arg1;	// IMP=0x000000000014732a
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014714f
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000146f90
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000146dab
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000146bc6
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001469e1
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001467e0
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000146695

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

