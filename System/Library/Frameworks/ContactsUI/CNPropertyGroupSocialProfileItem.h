//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPropertyGroupItem.h"

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem
{
}

+ (id)emptyValueForLabel:(id)arg1;	// IMP=0x006000000008a863
- (_Bool)isEquivalentToItem:(id)arg1;	// IMP=0x000000000008aefa
- (id)editingStringValue;	// IMP=0x000000000008ae18
- (id)valueForDisplayString:(id)arg1;	// IMP=0x000000000008ad38
- (id)displayStringForValue:(id)arg1;	// IMP=0x000000000008ab8b
- (id)displayLabel;	// IMP=0x000000000008a991
- (id)defaultActionURL;	// IMP=0x000000000008a90d
@property(readonly, nonatomic) CNSocialProfile *profile;

@end

