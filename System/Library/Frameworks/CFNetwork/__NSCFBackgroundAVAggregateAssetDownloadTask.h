//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURLSession;

__attribute__((visibility("hidden")))
@interface __NSCFBackgroundAVAggregateAssetDownloadTask
{
    _Bool _sentWillDownloadToURL;	// 22 = 0x16
    _Bool _sentWillBeginDelayedRequest;	// 23 = 0x17
    AVURLAsset *_URLAsset;	// 24 = 0x18
    unsigned long long _AVAssetDownloadToken;	// 32 = 0x20
    NSArray *_mediaSelections;	// 40 = 0x28
    NSString *_assetTitle;	// 48 = 0x30
    NSData *_assetArtworkData;	// 56 = 0x38
    NSDictionary *_options;	// 64 = 0x40
    NSString *_childAssetDownloadTasksSessionIdentifier;	// 72 = 0x48
    NSURLSession *_childAssetDownloadSession;	// 80 = 0x50
    NSArray *_childAssetDownloadTasks;	// 88 = 0x58
}

@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
- (id)cookiesForCurrentRequest;	// IMP=0x0000000000122676
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;	// IMP=0x00000000001225a2
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;	// IMP=0x0000000000122529
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001224a5
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000012242c
- (void)_onqueue_cancel;	// IMP=0x00000000001223da
- (void)_onqueue_suspend;	// IMP=0x0000000000122255
- (void)_onqueue_resume;	// IMP=0x0000000000122081
- (_Bool)_isAVAssetTask;	// IMP=0x0000000000122079
- (id)response;	// IMP=0x0000000000122045
- (id)currentRequest;	// IMP=0x0000000000122011
- (id)originalRequest;	// IMP=0x0000000000121fdd
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000121f82
- (void)dealloc;	// IMP=0x0000000000121ec6
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;	// IMP=0x0000000000121d16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

