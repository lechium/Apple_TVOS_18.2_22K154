//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSSQLForeignKey, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignEntityKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLForeignKey *_foreignKey;	// 56 = 0x38
    NSNumber *_columnValue;	// 64 = 0x40
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x000000000019f563
- (void)dealloc;	// IMP=0x000000000019f4fc
- (id)name;	// IMP=0x000000000019f4eb
- (id)foreignKey;	// IMP=0x000000000019f4da
- (id)toOneRelationship;	// IMP=0x000000000019f4af
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000019f3b7
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x000000000019f35c
- (id)initWithEntity:(id)arg1 foreignKey:(id)arg2;	// IMP=0x000000000019f1bc

@end

