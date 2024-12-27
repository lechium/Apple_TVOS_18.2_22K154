//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

@interface NDAVBackgroundSession
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 256 = 0x100
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 264 = 0x108
    NSMutableDictionary *_identifiersToTCPConnections;	// 272 = 0x110
    NSMutableDictionary *_identifiersToDASActivities;	// 280 = 0x118
    NSMapTable *_assetDownloadTokensToAssets;	// 288 = 0x120
    NSURLSessionConfiguration *_clientConfig;	// 296 = 0x128
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x0020000000057090
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000056de3
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x0010000000056bb4
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didFinishDownloadForMediaSelectionPropertyList:(id)arg2;	// IMP=0x0010000000056b25
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 forMediaSelectionPropertyList:(id)arg5;	// IMP=0x0010000000056a20
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 willDownloadVariants:(id)arg2;	// IMP=0x00100000000568dd
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x00100000000567b0
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0010000000055fce
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x0010000000055d76
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0010000000055bc4
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x0010000000055aaa
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000055a9f
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000559b1
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000557b4
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000005546d
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x001000000005501e
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0010000000054f11
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0010000000054c75
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x0010000000054a2e
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x0010000000053fce
- (void)statusMonitor:(id)arg1 callbackForIdentifier:(unsigned long long)arg2 networkChanged:(_Bool)arg3;	// IMP=0x0010000000053f7c
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000053f76
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0010000000053d8a
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000053d84
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000053ca4
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053c46
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000053a65
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 assetOptions:(id)arg6 childDownloadSessionIdentifier:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0010000000053264
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 assetOptions:(id)arg8 identifier:(unsigned long long)arg9 uniqueIdentifier:(id)arg10 taskKind:(unsigned long long)arg11 enableSPIDelegateCallbacks:(_Bool)arg12 reply:(CDUnknownBlockType)arg13;	// IMP=0x00100000000522c0
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x00100000000522a5
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x0010000000052060
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0010000000052003
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000051ff2
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000051fe1
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000051fd0
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0010000000051f40
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x0010000000051f3a
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x0010000000051eaa
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x0010000000051e1a
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x0010000000051d8a
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x00100000000517df
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x0010000000051764
- (id)avAssetDownloadsDirectory;	// IMP=0x001000000005122b
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x0010000000051225
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0010000000051138
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0010000000051045
- (id)restoreTasksFromSqliteDB:(id)arg1;	// IMP=0x00100000000501e7
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x00100000000500e4
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x001000000004ff56
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x001000000004fe11
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x001000000004fc52
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 db:(id)arg9;	// IMP=0x000000000004f989

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

