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

+ (id)defaultProperties;	// IMP=0x00200000000ce75f
+ (Class)databaseEntityClass;	// IMP=0x00100000000ce74e
- (void).cxx_destruct;	// IMP=0x00200000000cece0
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cec67
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ceb25
- (unsigned long long)hash;	// IMP=0x00100000000ceb0f
- (id)description;	// IMP=0x00100000000cea89
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x00100000000cea73
- (id)valueForProperty:(id)arg1;	// IMP=0x00100000000cea5d
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000ce9e0
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x00100000000ce956
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x00100000000ce940
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x00100000000ce8c3
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00100000000ce839
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x00100000000ce823
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000ce76c
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x00100000000ce730
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x00100000000ce686
- (id)initWithDatabaseID:(long long)arg1 propertyValues:(id)arg2 externalPropertyValues:(id)arg3;	// IMP=0x00100000000ce5b0
- (id)init;	// IMP=0x00100000000ce592

@end

