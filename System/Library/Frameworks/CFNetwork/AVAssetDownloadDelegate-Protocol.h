//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class AVAggregateAssetDownloadTask, AVAssetDownloadTask, AVMediaSelection, NSArray, NSURL, NSURLSession;

@protocol AVAssetDownloadDelegate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 willDownloadVariants:(NSArray *)arg3;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5 forMediaSelection:(AVMediaSelection *)arg6;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 didCompleteForMediaSelection:(AVMediaSelection *)arg3;
- (void)URLSession:(NSURLSession *)arg1 aggregateAssetDownloadTask:(AVAggregateAssetDownloadTask *)arg2 willDownloadToURL:(NSURL *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 willDownloadToURL:(NSURL *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didResolveMediaSelection:(AVMediaSelection *)arg3;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(NSArray *)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)URLSession:(NSURLSession *)arg1 assetDownloadTask:(AVAssetDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;
@end

