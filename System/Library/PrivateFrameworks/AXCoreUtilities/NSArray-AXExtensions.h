//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (AXExtensions)
+ (id)axArrayByIgnoringNilElementsWithCount:(unsigned long long)arg1;	// IMP=0x006000000000962d
+ (id)axArrayWithPossiblyNilArrays:(unsigned long long)arg1;	// IMP=0x00600000000094c8
- (id)axSafeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000009f79
- (id)axFirstObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009d87
- (id)axFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009c2c
- (id)axMapObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009aa9
- (_Bool)axIsEqualToOrderedArray:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;	// IMP=0x001000000000997c
- (id)axUniqueArrayWithPredicate:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009745
- (id)ax_arrayByRemovingDuplicates;	// IMP=0x001000000002c793
- (id)ax_flatMappedArrayUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c5b8
- (id)ax_mappedArrayUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c3db
- (_Bool)ax_containsObjectUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c3a8
- (id)ax_filteredArrayUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c349
- (id)ax_firstObjectUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002c1f3
@end

