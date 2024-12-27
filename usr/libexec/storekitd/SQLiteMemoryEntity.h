//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SQLiteMemoryEntity : NSObject
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x0020000000088d41
+ (Class)databaseEntityClass;	// IMP=0x0010000000088d30
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;	// IMP=0x001000000006d325
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x001000000006d22c
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000006d217
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000006d0b3
- (void).cxx_destruct;	// IMP=0x0020000000089314
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008929b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000089159
- (unsigned long long)hash;	// IMP=0x0010000000089143
- (id)description;	// IMP=0x00100000000890bd
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00100000000890a7
- (id)valueForProperty:(id)arg1;	// IMP=0x0010000000089091
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0010000000089014
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x0010000000088f8a
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x0010000000088f74
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0010000000088ea5
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0010000000088e1b
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x0010000000088e05
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000088d4e
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x0010000000088d12
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000088c68
- (id)initWithDatabaseID:(long long)arg1 propertyValues:(id)arg2 externalPropertyValues:(id)arg3;	// IMP=0x0010000000088b92
- (id)init;	// IMP=0x0010000000088b74
- (id)dictValueForProperty:(id)arg1;	// IMP=0x00100000000895ce
- (id)arrayValueForProperty:(id)arg1;	// IMP=0x0010000000089577
- (id)urlValueForProperty:(id)arg1;	// IMP=0x0010000000089520
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x00100000000894c9
- (id)stringValueForProperty:(id)arg1;	// IMP=0x0010000000089472
- (id)numberValueForProperty:(id)arg1;	// IMP=0x001000000008941b
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x00100000000893d7
- (id)dateValueForProperty:(id)arg1;	// IMP=0x0010000000089380
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x001000000008933c

@end

