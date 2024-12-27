//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SQLiteQuery;

@interface SQLiteContainsPredicate
{
    _Bool _negative;	// 24 = 0x18
    SQLiteQuery *_query;	// 32 = 0x20
    NSString *_queryProperty;	// 40 = 0x28
    id _values;	// 48 = 0x30
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0020000000065e16
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;	// IMP=0x0010000000065d25
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0010000000065c64
- (void).cxx_destruct;	// IMP=0x0020000000066491
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)queryProperty;	// IMP=0x001000000006646f
@property(readonly, nonatomic) SQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) _Bool negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x0010000000066285
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006607c
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x0010000000065ee2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000065ed7

@end

