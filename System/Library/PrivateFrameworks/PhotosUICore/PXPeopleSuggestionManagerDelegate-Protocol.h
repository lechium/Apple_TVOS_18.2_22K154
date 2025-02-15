//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, PXPeopleSuggestionManager;

@protocol PXPeopleSuggestionManagerDelegate <NSObject>
- (void)noMoreSuggestionsAvailableForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)suggestionManager:(PXPeopleSuggestionManager *)arg1 hasNewSuggestionsAvailable:(NSArray *)arg2;

@optional
- (void)willLoadMoreSuggestionsForSuggestionManager:(PXPeopleSuggestionManager *)arg1;
- (void)confirmationCountUpdatedForSuggestionManager:(PXPeopleSuggestionManager *)arg1 undoing:(_Bool)arg2;
@end

