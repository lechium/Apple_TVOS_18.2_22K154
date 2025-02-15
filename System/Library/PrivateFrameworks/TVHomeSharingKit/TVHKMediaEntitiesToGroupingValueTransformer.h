//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesToGroupingValueTransformer : NSValueTransformer
{
    _Bool _performDefaultGroupsSort;	// 8 = 0x8
    _Bool _generateGroupingIndexBarItems;	// 9 = 0x9
    NSString *_identifierKeyPath;	// 16 = 0x10
    NSValueTransformer *_identifierTitleTransformer;	// 24 = 0x18
    CDUnknownBlockType _groupsSortComparator;	// 32 = 0x20
    NSString *_mediaEntitiesIndexBarItemPropertyKey;	// 40 = 0x28
}

+ (_Bool)allowsReverseTransformation;	// IMP=0x006000000000270c
+ (Class)transformedValueClass;	// IMP=0x00600000000026fb
- (void).cxx_destruct;	// IMP=0x0000000000003099
@property(nonatomic) _Bool generateGroupingIndexBarItems; // @synthesize generateGroupingIndexBarItems=_generateGroupingIndexBarItems;
@property(copy, nonatomic) NSString *mediaEntitiesIndexBarItemPropertyKey; // @synthesize mediaEntitiesIndexBarItemPropertyKey=_mediaEntitiesIndexBarItemPropertyKey;
@property(nonatomic) _Bool performDefaultGroupsSort; // @synthesize performDefaultGroupsSort=_performDefaultGroupsSort;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(retain, nonatomic) NSValueTransformer *identifierTitleTransformer; // @synthesize identifierTitleTransformer=_identifierTitleTransformer;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (id)transformedValue:(id)arg1;	// IMP=0x0000000000002714
- (id)initWithIdentifierKeyPath:(id)arg1;	// IMP=0x000000000000264e
- (id)init;	// IMP=0x00000000000025df

@end

