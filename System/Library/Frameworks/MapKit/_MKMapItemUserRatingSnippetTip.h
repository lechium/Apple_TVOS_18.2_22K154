//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapItemTip, MKMapItem, NSDate, NSString, NSURL;
@protocol GEOMapItemReview;

__attribute__((visibility("hidden")))
@interface _MKMapItemUserRatingSnippetTip : NSObject
{
    MKMapItem *_mapItem;	// 8 = 0x8
    GEOMapItemTip *_tip;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f4808
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4802
@property(readonly, nonatomic, getter=_date) NSDate *date;
@property(readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property(readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property(readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property(readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property(readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property(readonly, nonatomic, getter=_geoReview) id <GEOMapItemReview> geoReview;
@property(readonly, nonatomic, getter=_score) double score;
@property(readonly, nonatomic, getter=_maxScore) double maxScore;
@property(readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
- (id)initWithMapItem:(id)arg1 review:(id)arg2;	// IMP=0x00000000000f461b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

