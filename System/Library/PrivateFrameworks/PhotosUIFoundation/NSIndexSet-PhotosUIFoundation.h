//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (PhotosUIFoundation)
- (_Bool)px_isSingleRangeWithMax:(long long)arg1;	// IMP=0x0030000000072e88
@property(readonly, nonatomic) struct _NSRange px_coveringRange;
- (id)px_indexSetAdjustedForInsertions:(id)arg1;	// IMP=0x0030000000072d9f
- (id)px_indexSetAdjustedForDeletions:(id)arg1;	// IMP=0x0030000000072d1a
- (void)px_enumerateMap:(CDUnknownBlockType)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0030000000072c5a
- (id)px_map:(CDUnknownBlockType)arg1;	// IMP=0x0030000000072b93
- (id)px_intersectionWithIndexSet:(id)arg1;	// IMP=0x0030000000072a4a
- (_Bool)px_intersectsWithIndexSet:(id)arg1;	// IMP=0x0030000000072986
- (unsigned long long)px_indexAtPosition:(unsigned long long)arg1;	// IMP=0x003000000007293b
@property(readonly, nonatomic) NSString *px_shortDescription;
@end

