//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MGGroupsQueryAgent, NSArray, NSDictionary, NSUUID;

__attribute__((visibility("hidden")))
@interface MGGroupsMediator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDictionary *_groups;	// 16 = 0x10
    _Bool _allowsClientEdits;	// 24 = 0x18
    _Bool _pendingChanges;	// 25 = 0x19
    NSUUID *_identifier;	// 32 = 0x20
    MGGroupsQueryAgent *_queryAgent;	// 40 = 0x28
    NSArray *_activities;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000005921
@property(nonatomic, getter=hasPendingChanges) _Bool pendingChanges; // @synthesize pendingChanges=_pendingChanges;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) _Bool allowsClientEdits; // @synthesize allowsClientEdits=_allowsClientEdits;
@property(readonly, nonatomic) __weak MGGroupsQueryAgent *queryAgent; // @synthesize queryAgent=_queryAgent;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)removeGroupWithIdentifier:(id)arg1;	// IMP=0x0000000000005744
- (id)group:(id)arg1 removeMember:(id)arg2;	// IMP=0x0000000000005271
- (id)group:(id)arg1 addMember:(id)arg2;	// IMP=0x0000000000004dce
- (id)group:(id)arg1 renameTo:(id)arg2;	// IMP=0x0000000000004905
- (void)removeGroup:(id)arg1;	// IMP=0x0000000000004729
- (void)addGroup:(id)arg1;	// IMP=0x0000000000004561
- (void)endActivity:(id)arg1;	// IMP=0x00000000000042bb
- (id)startActivityWithName:(id)arg1;	// IMP=0x0000000000004123
- (id)currentGroups;	// IMP=0x0000000000003f51
- (id)description;	// IMP=0x0000000000003bee
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003bb0
- (id)groupsForUpdate_unsafe;	// IMP=0x0000000000003b0f
- (void)removeGroup:(id)arg1 ifExists_unsafe:(_Bool *)arg2;	// IMP=0x00000000000039d7
- (void)upsertGroup_unsafe:(id)arg1;	// IMP=0x00000000000038f0
- (id)groups_unsafe;	// IMP=0x00000000000038cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000038c4
- (void)dealloc;	// IMP=0x0000000000003856
- (id)initWithGroupsQueryAgent:(id)arg1;	// IMP=0x000000000000379a

@end

