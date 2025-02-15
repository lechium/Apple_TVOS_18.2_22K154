//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMDoublyLinkedListNode;

__attribute__((visibility("hidden")))
@interface MCMDoublyLinkedList : NSObject
{
    unsigned long long _count;	// 8 = 0x8
    MCMDoublyLinkedListNode *_head;	// 16 = 0x10
    MCMDoublyLinkedListNode *_tail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000710d0
@property(retain, nonatomic) MCMDoublyLinkedListNode *tail; // @synthesize tail=_tail;
@property(retain, nonatomic) MCMDoublyLinkedListNode *head; // @synthesize head=_head;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)removeAllObjects;	// IMP=0x0000000000070f30
- (void)removeNodeAndAddToTail:(id)arg1;	// IMP=0x0000000000070d31
- (void)addToTail:(id)arg1;	// IMP=0x0000000000070bc3
- (id)removeFromHead;	// IMP=0x0000000000070a6e

@end

