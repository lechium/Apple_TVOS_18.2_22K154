//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNContactRelation;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008a775
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000008a84a
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008a835
- (id)normalizedValue;	// IMP=0x000000000008a7e5
@property(readonly, nonatomic) CNContactRelation *contactRelation;

@end

