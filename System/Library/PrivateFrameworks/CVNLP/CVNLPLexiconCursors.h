//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CVNLPLexiconCursors : NSObject
{
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> _sortedCursors;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000051af0
- (void).cxx_destruct;	// IMP=0x0000000000051ad4
- (void)dealloc;	// IMP=0x0000000000051a4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000518bf
- (long long)count;	// IMP=0x00000000000518ad
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005182b
- (id)initWithSortedCursors:(void *)arg1;	// IMP=0x0000000000051684

@end

