//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _NSFaultingMutableSetMutationMethods;

__attribute__((visibility("hidden")))
@interface _NSProxyWrapperMutableSet
{
    _NSFaultingMutableSetMutationMethods *_mutationMethods;	// 32 = 0x20
}

- (void)unionSet:(id)arg1;	// IMP=0x0000000000069be9
- (void)setSet:(id)arg1;	// IMP=0x0000000000069b5d
- (void)removeObject:(id)arg1;	// IMP=0x0000000000069ac7
- (void)removeAllObjects;	// IMP=0x0000000000069a7b
- (void)minusSet:(id)arg1;	// IMP=0x0000000000069a48
- (void)intersectSet:(id)arg1;	// IMP=0x00000000000698d4
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x0000000000069863
- (void)addObject:(id)arg1;	// IMP=0x00000000000697cd
- (void)dealloc;	// IMP=0x0000000000069715

@end

