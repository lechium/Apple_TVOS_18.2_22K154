//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSetChanges.h"

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface NSConcreteSetChanges : NSSetChanges
{
    NSSet *_backing;	// 8 = 0x8
    NSMutableArray *_changes;	// 16 = 0x10
    _Bool _backingIsMutable;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x0000000000876124
- (id)description;	// IMP=0x0000000000875ff6
- (void)_fault;	// IMP=0x0000000000875f7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000875f19
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000875dd0
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000875cba
- (unsigned long long)changeCount;	// IMP=0x0000000000875c9d
- (void)transformObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000875af1
- (void)filterObjectsWithTest:(CDUnknownBlockType)arg1;	// IMP=0x0000000000875988
- (void)unionSet:(id)arg1;	// IMP=0x0000000000875815
- (void)removeAllObjects;	// IMP=0x00000000008757cd
- (void)minusSet:(id)arg1;	// IMP=0x000000000087565a
- (void)setSet:(id)arg1;	// IMP=0x000000000087561d
- (void)intersectSet:(id)arg1;	// IMP=0x000000000087545e
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000875400
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000008752fd
- (void)addChange:(id)arg1;	// IMP=0x0000000000875292
- (void)_willChange;	// IMP=0x0000000000875265
- (id)initWithSet:(id)arg1;	// IMP=0x00000000008751e4
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000008751ac
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000875174
- (id)init;	// IMP=0x000000000087513c
- (id)objectEnumerator;	// IMP=0x00000000008750f7
- (id)member:(id)arg1;	// IMP=0x00000000008750ad
- (unsigned long long)count;	// IMP=0x0000000000875068

@end

