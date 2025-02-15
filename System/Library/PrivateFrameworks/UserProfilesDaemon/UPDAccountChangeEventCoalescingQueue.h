//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UPDAccountChangeEventCoalescingQueue : NSObject
{
    NSMutableArray *_allEvents;	// 8 = 0x8
    NSMutableSet *_coalescedEventSet;	// 16 = 0x10
    NSMutableDictionary *_eventByUserAccountTypeIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005107d
- (void)_keepEvent:(id)arg1 removingEvent:(id)arg2;	// IMP=0x0000000000050fda
@property(readonly, copy, nonatomic) NSArray *coalescedEvents;
- (void)addEvent:(id)arg1;	// IMP=0x00000000000506a2
- (id)init;	// IMP=0x0000000000050616

@end

