//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSSet;
@protocol PLHighlightItem;

@protocol PLHighlightItemPromoterRule <NSObject>
- (id <PLHighlightItem>)fallbackHighlightItemFromAllHighlightItems:(NSSet *)arg1 withSharingConsideration:(long long)arg2;
- (NSArray *)highlightItemsSortedByImportance:(NSSet *)arg1 withSharingConsideration:(long long)arg2;
- (_Bool)highlightItemHasMinimumRequirementToBePromoted:(id <PLHighlightItem>)arg1 withSharingConsideration:(long long)arg2;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
@end

