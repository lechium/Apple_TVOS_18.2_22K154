//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC18PodcastsFoundation14RSSFeedUpdater : NSObject
{
    MISSING_TYPE *workQueue;	// 8 = 0x8
    MISSING_TYPE *feedQueue;	// 16 = 0x10
    MISSING_TYPE *ctx;	// 24 = 0x18
    MISSING_TYPE *ingesterProvider;	// 32 = 0x20
    MISSING_TYPE *externalFeedDownloader;	// 72 = 0x48
    MISSING_TYPE *pendingRestorationQueue;	// 80 = 0x50
    MISSING_TYPE *requests;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000003206f0
- (id)init;	// IMP=0x0000000000320690
- (void)performOnFeedProcessingQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000000003214f0
- (void)didRestoreFeedUrlTask:(id)arg1;	// IMP=0x00000000003212b0
- (void)didDownloadFeedWithError:(id)arg1 data:(id)arg2 task:(id)arg3 requestedUrl:(id)arg4 useBackgroundFetch:(_Bool)arg5;	// IMP=0x0000000000320a10
@property(nonatomic, copy) CDUnknownBlockType sessionCompletionHandler;

@end

