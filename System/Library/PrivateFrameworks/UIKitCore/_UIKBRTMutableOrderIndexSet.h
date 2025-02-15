//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface _UIKBRTMutableOrderIndexSet : NSObject
{
    _Bool _reversed;	// 8 = 0x8
    NSMutableIndexSet *_indexSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ef04b7
@property(nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(readonly, nonatomic) NSMutableIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (id)description;	// IMP=0x0000000000ef040d
- (void)removeIndexes:(id)arg1;	// IMP=0x0000000000ef03f7
- (void)removeIndex:(unsigned long long)arg1;	// IMP=0x0000000000ef03e1
- (void)addIndex:(unsigned long long)arg1;	// IMP=0x0000000000ef03cb
@property(readonly) unsigned long long endingIndex;
@property(readonly) unsigned long long beginningIndex;
@property(readonly) unsigned long long highestIndex;
@property(readonly) unsigned long long lowestIndex;
@property(readonly) unsigned long long count;
- (id)initWithIndexesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000ef02ba
- (id)init;	// IMP=0x0000000000ef0260

@end

