//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLToOne, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLForeignKey
{
    NSString *_name;	// 48 = 0x30
    NSSQLToOne *_toOne;	// 56 = 0x38
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x000000000019f89e
- (void)dealloc;	// IMP=0x000000000019f84d
- (id)name;	// IMP=0x000000000019f83c
- (id)toOneRelationship;	// IMP=0x000000000019f82b
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000019f786
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;	// IMP=0x000000000019f738
- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;	// IMP=0x000000000019f5cb

@end

