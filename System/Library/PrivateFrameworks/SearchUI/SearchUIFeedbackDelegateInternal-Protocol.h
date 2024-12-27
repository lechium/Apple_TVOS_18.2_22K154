//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/SearchUIFeedbackDelegate-Protocol.h>

@class NSString, SFCardSection, SFSearchResult, SearchUICommandEnvironment, SearchUIRowModel, SearchUISectionModel;

@protocol SearchUIFeedbackDelegateInternal <SearchUIFeedbackDelegate>

@optional
@property(nonatomic) _Bool dragInteractionEnabled;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

- (void)didUpdateKeyboardFocusToResult:(SFSearchResult *)arg1 cardSection:(SFCardSection *)arg2;
- (SearchUICommandEnvironment *)searchUICommandEnvironment;
- (NSString *)queryString;
- (void)removeSectionModel:(SearchUISectionModel *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removeSectionContainingRowModel:(SearchUIRowModel *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removeRowModel:(SearchUIRowModel *)arg1 completion:(void (^)(_Bool))arg2;
- (void)resignTextField;
@end

