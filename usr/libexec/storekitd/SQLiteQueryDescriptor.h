//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SQLitePredicate;

@interface SQLiteQueryDescriptor : NSObject
{
    Class _entityClass;	// 8 = 0x8
    long long _limitCount;	// 16 = 0x10
    Class _memoryEntityClass;	// 24 = 0x18
    NSString *_orderingClause;	// 32 = 0x20
    NSArray *_orderingDirections;	// 40 = 0x28
    NSArray *_orderingProperties;	// 48 = 0x30
    SQLitePredicate *_predicate;	// 56 = 0x38
    _Bool _returnsDistinctEntities;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000006c68d
@property(copy, nonatomic) SQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) NSArray *orderingProperties; // @synthesize orderingProperties=_orderingProperties;
@property(copy, nonatomic) NSArray *orderingDirections; // @synthesize orderingDirections=_orderingDirections;
@property(copy, nonatomic) NSString *orderingClause; // @synthesize orderingClause=_orderingClause;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class memoryEntityClass; // @synthesize memoryEntityClass=_memoryEntityClass;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;	// IMP=0x001000000006bf47
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006be55
- (id)initWithEntityClass:(Class)arg1 memoryEntityClass:(Class)arg2;	// IMP=0x001000000006be0d
- (id)initWithEntityClass:(Class)arg1;	// IMP=0x001000000006bdf9

@end

