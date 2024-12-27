//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ML3QueryResultSet.h"

@class ML3QueryResultSet_BackingStore;

__attribute__((visibility("hidden")))
@interface ML3ContainerQueryResultSet : ML3QueryResultSet
{
    _Bool _needsSorting;	// 72 = 0x48
    _Bool _needsReversing;	// 73 = 0x49
    ML3QueryResultSet_BackingStore *_sortedBackingStore;	// 80 = 0x50
    long long _containerPID;	// 88 = 0x58
    unsigned long long _entityLimit;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001581cb
- (_Bool)_updateToLibraryCurrentRevision;	// IMP=0x0000000000158076
- (unsigned long long)entityLimit;	// IMP=0x0000000000158065
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000157fd7
- (void)enumeratePersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000157f49
- (long long)persistentIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000157eb9
- (id)sortedBackingStoreForDisplayOrdering;	// IMP=0x00000000001578a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000157820
- (void)_loadCurrentFullResults;	// IMP=0x000000000015762f
- (id)initWithQuery:(id)arg1;	// IMP=0x000000000015743e

@end

