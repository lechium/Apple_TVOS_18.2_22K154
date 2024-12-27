//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMDoublyLinkedList, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MCMLRUCache : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned long long _maxCount;	// 16 = 0x10
    NSMutableDictionary *_storage;	// 24 = 0x18
    MCMDoublyLinkedList *_mruItems;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000721f5
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) MCMDoublyLinkedList *mruItems; // @synthesize mruItems=_mruItems;
@property(readonly, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeAllObjects;	// IMP=0x0000000000071f0b
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000071778
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000071243
- (id)initWithName:(id)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000007115a
- (id)init;	// IMP=0x000000000007111b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

