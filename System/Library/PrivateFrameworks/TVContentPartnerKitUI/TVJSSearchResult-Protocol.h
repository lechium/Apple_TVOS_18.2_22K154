//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSArray, NSString, NSURL, TVSSSearchResultBatch;

@protocol TVJSSearchResult <JSExport>
@property(readonly, copy, nonatomic) NSArray *relatedContentQueries;
@property(readonly, nonatomic) TVSSSearchResultBatch *initialBatch;
@property(readonly, copy, nonatomic) NSArray *contentItems;
@property(readonly, copy, nonatomic) NSURL *queryURL;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool showBrowseResults;
@end

