//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableOrderedSet
{
    NSMutableOrderedSet *_mutableOrderedSet;	// 24 = 0x18
}

+ (id)_proxyShare;	// IMP=0x00600000009316cd
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x0000000000931be1
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000931b22
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000931a9d
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009319eb
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000093195c
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000093189d
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x0000000000931880
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000931863
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x0000000000931846
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000931829
- (unsigned long long)count;	// IMP=0x000000000093180c
- (void)_proxyNonGCFinalize;	// IMP=0x000000000093179b
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000009316f4

@end

