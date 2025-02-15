//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface _MapUpdate : NSObject
{
    _Bool _isSectionUpdate;	// 8 = 0x8
    _Bool _isInsert;	// 9 = 0x9
    _Bool _isDelete;	// 10 = 0xa
    _Bool _isMove;	// 11 = 0xb
    NSIndexPath *_indexPath;	// 16 = 0x10
    NSIndexPath *_moveFromIndexPath;	// 24 = 0x18
    NSIndexPath *_moveToIndexPath;	// 32 = 0x20
    long long _index;	// 40 = 0x28
    long long _section;	// 48 = 0x30
    long long _moveFromSection;	// 56 = 0x38
    long long _moveToSection;	// 64 = 0x40
    struct _NSRange _insertRange;	// 72 = 0x48
    struct _NSRange _deleteRange;	// 88 = 0x58
    struct _NSRange _moveFromRange;	// 104 = 0x68
    struct _NSRange _moveToRange;	// 120 = 0x78
}

+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;	// IMP=0x00600000006698fc
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(struct _NSRange)arg3 toRange:(struct _NSRange)arg4;	// IMP=0x0060000000669848
+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;	// IMP=0x006000000066978c
+ (id)itemDeleteSection:(long long)arg1 deleteRange:(struct _NSRange)arg2;	// IMP=0x0060000000669702
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;	// IMP=0x0060000000669646
+ (id)itemInsertSection:(long long)arg1 insertRange:(struct _NSRange)arg2;	// IMP=0x00600000006695bc
- (void).cxx_destruct;	// IMP=0x0000000000669fc1
@property(nonatomic) struct _NSRange moveToRange; // @synthesize moveToRange=_moveToRange;
@property(nonatomic) struct _NSRange moveFromRange; // @synthesize moveFromRange=_moveFromRange;
@property(nonatomic) long long moveToSection; // @synthesize moveToSection=_moveToSection;
@property(nonatomic) long long moveFromSection; // @synthesize moveFromSection=_moveFromSection;
@property(nonatomic) struct _NSRange deleteRange; // @synthesize deleteRange=_deleteRange;
@property(nonatomic) struct _NSRange insertRange; // @synthesize insertRange=_insertRange;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSIndexPath *moveToIndexPath; // @synthesize moveToIndexPath=_moveToIndexPath;
@property(retain, nonatomic) NSIndexPath *moveFromIndexPath; // @synthesize moveFromIndexPath=_moveFromIndexPath;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isMove; // @synthesize isMove=_isMove;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) _Bool isInsert; // @synthesize isInsert=_isInsert;
@property(nonatomic) _Bool isSectionUpdate; // @synthesize isSectionUpdate=_isSectionUpdate;
- (id)reverseUpdateItem;	// IMP=0x0000000000669b78
- (id)description;	// IMP=0x0000000000669a0d

@end

