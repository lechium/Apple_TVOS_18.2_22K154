//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSProgress, PXSearchQueryMatchInfo;
@protocol PXDisplayAsset;

@protocol PXMediaAnalyzer <NSObject>
- (NSProgress *)requestMatchedTimeRangesForAsset:(id <PXDisplayAsset>)arg1 searchQueryMatchInfo:(PXSearchQueryMatchInfo *)arg2 resultHandler:(void (^)(NSArray *))arg3;
- (NSProgress *)requestAnalysisForAssets:(NSArray *)arg1 options:(unsigned long long)arg2 contexts:(NSArray *)arg3 resultHandler:(void (^)(NSArray *))arg4;
@end

