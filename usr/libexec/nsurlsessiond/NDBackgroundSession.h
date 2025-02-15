//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDApplication, NDCallbackQueue, NDCredentialStorage, NDTaskStorageDB, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSURLSession, NSUUID, NSXPCConnection;
@protocol NDBackgroundSessionDelegate, NSXPCProxyCreating><NDBackgroundSessionClient, OS_dispatch_queue;

@interface NDBackgroundSession : NSObject
{
    NSURLSession *_userInitiatedSession;	// 8 = 0x8
    NSURLSession *_discretionaryPrioritySession;	// 16 = 0x10
    NDCredentialStorage *_credentialStorage;	// 24 = 0x18
    NDApplication *_clientApplication;	// 32 = 0x20
    NDApplication *_connectedExtension;	// 40 = 0x28
    NSMutableDictionary *_tasksToIdentifiers;	// 48 = 0x30
    NSMutableDictionary *_identifiersToTasks;	// 56 = 0x38
    NSMutableDictionary *_identifiersToMonitors;	// 64 = 0x40
    NSMutableDictionary *_identifiersToStreams;	// 72 = 0x48
    NSMutableDictionary *_identifiersToStreamQueues;	// 80 = 0x50
    NSMutableArray *_outstandingTaskIDs;	// 88 = 0x58
    double _lastArchiveTime;	// 96 = 0x60
    _Bool _taskInfoUpdatesDeferred;	// 104 = 0x68
    NSURL *_sessionDirectory;	// 112 = 0x70
    NSURL *_downloadDirectory;	// 120 = 0x78
    NSURL *_uploadsDirectory;	// 128 = 0x80
    _Bool _performsEVCertCheck;	// 136 = 0x88
    _Bool _clientImplementsWillSendRequest;	// 137 = 0x89
    _Bool _clientImplementsWillBeginDelayedRequest;	// 138 = 0x8a
    _Bool _clientImplementsSessionChallenge;	// 139 = 0x8b
    _Bool _clientImplementsTaskChallenge;	// 140 = 0x8c
    _Bool _sendsLaunchEvents;	// 141 = 0x8d
    _Bool _discretionary;	// 142 = 0x8e
    _Bool _obliterated;	// 143 = 0x8f
    _Bool _cleanedUp;	// 144 = 0x90
    _Bool _hasBeenSignalledToDeliverPendingEvents;	// 145 = 0x91
    _Bool _infersDiscretionary;	// 146 = 0x92
    _Bool _shouldPullInitialCredentials;	// 147 = 0x93
    _Bool _shouldElevateDiscretionaryPriority;	// 148 = 0x94
    CDUnknownBlockType _completeReconnectionBlock;	// 152 = 0x98
    int _neTrackerTCCResult;	// 160 = 0xa0
    int _clientPID;	// 164 = 0xa4
    NSXPCConnection *_xpcConn;	// 168 = 0xa8
    NSString *_watchExtensionBundleIdentifier;	// 176 = 0xb0
    NSMutableDictionary *_identifiersToUpdates;	// 184 = 0xb8
    _Bool _retryDataTasks;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_workQueue;	// 200 = 0xc8
    NDCallbackQueue *_callbackQueue;	// 208 = 0xd0
    NDApplication *_monitoredApplication;	// 216 = 0xd8
    NSMutableDictionary *_identifiersToTaskInfo;	// 224 = 0xe0
    id <NSXPCProxyCreating><NDBackgroundSessionClient> _clientProxy;	// 232 = 0xe8
    NDTaskStorageDB *tasksDB;	// 240 = 0xf0
    _Bool _hasSqliteSupport;	// 248 = 0xf8
    id <NDBackgroundSessionDelegate> _delegate;	// 256 = 0x100
    NSUUID *_uuid;	// 264 = 0x108
    NSString *_identifier;	// 272 = 0x110
    NSString *_clientBundleID;	// 280 = 0x118
    NSString *_monitoredAppBundleID;	// 288 = 0x120
    NSString *_secondaryID;	// 296 = 0x128
    CDUnknownBlockType _invalidateReply;	// 304 = 0x130
    NSString *_sharedContainerIdentifier;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0020000000034a67
@property(copy) NSString *sharedContainerIdentifier; // @synthesize sharedContainerIdentifier=_sharedContainerIdentifier;
@property(copy) CDUnknownBlockType invalidateReply; // @synthesize invalidateReply=_invalidateReply;
@property(readonly) NSString *secondaryID; // @synthesize secondaryID=_secondaryID;
@property(readonly) NSString *monitoredAppBundleID; // @synthesize monitoredAppBundleID=_monitoredAppBundleID;
@property(readonly) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
@property __weak id <NDBackgroundSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000342b7
- (void)_URLSession:(id)arg1 openFileAtPath:(id)arg2 mode:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000033e47
- (id)_URLSession:(id)arg1 downloadTaskNeedsDownloadDirectory:(id)arg2;	// IMP=0x0010000000033dcb
- (void)_URLSession:(id)arg1 downloadTask:(id)arg2 didReceiveResponse:(id)arg3;	// IMP=0x0010000000033a70
- (void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(_Bool)arg3;	// IMP=0x001000000003388e
- (void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3;	// IMP=0x0010000000033676
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000032ddf
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x0010000000032c37
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;	// IMP=0x0010000000032980
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00100000000325d1
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;	// IMP=0x00100000000321a0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 _didReceiveData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000031c23
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003149c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003148c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000030091
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveInformationalResponse:(id)arg3;	// IMP=0x001000000002fcc2
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f8dd
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;	// IMP=0x001000000002f7c1
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000002e976
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d9f7
- (_Bool)trustPassesExtendedValidation:(struct __SecTrust *)arg1;	// IMP=0x001000000002d7a6
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x001000000002d651
- (void)invalidateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d41e
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000002d3d0
- (void)setTLSSessionCachePrefix:(id)arg1;	// IMP=0x001000000002d369
- (void);	// IMP=0x001000000002cdfc
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002cc6a
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002cad8
- (void)setExpectedProgressTarget:(unsigned long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002c945
- (void)setBytesPerSecondLimit:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002c6aa
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002c30f
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x001000000002ba57
- (void)setDescription:(id)arg1 forTask:(unsigned long long)arg2;	// IMP=0x001000000002b8b2
- (void)setPropertyOnStreamWithIdentifier:(unsigned long long)arg1 propDict:(id)arg2 propKey:(id)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000002b5d1
- (void)resumeTaskWithIdentifier:(unsigned long long)arg1 withProperties:(id)arg2;	// IMP=0x001000000002b0e0
- (void)suspendTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000002ae80
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000002ac44
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a96c
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 assetOptions:(id)arg6 childDownloadSessionIdentifier:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x001000000002a95b
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 assetOptions:(id)arg8 identifier:(unsigned long long)arg9 uniqueIdentifier:(id)arg10 taskKind:(unsigned long long)arg11 enableSPIDelegateCallbacks:(_Bool)arg12 reply:(CDUnknownBlockType)arg13;	// IMP=0x001000000002a94a
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000002a56b
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 sandboxExtensionData:(id)arg4 identifier:(unsigned long long)arg5 uniqueIdentifier:(id)arg6 potentialCredentials:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x0010000000029f34
- (void)uploadTaskWithResumableUploadState:(id)arg1 request:(id)arg2 originalRequest:(id)arg3 fromFile:(id)arg4 sandboxExtensionData:(id)arg5 identifier:(unsigned long long)arg6 uniqueIdentifier:(id)arg7 potentialCredentials:(id)arg8 reply:(CDUnknownBlockType)arg9;	// IMP=0x001000000002990c
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 downloadFilePath:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000292d8
- (void)downloadTaskWithResumeData:(id)arg1 identifier:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000028e39
- (void)pingForXPCObjectValidityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000028e2e
- (void)performCommonSetupForTask:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3 discretionaryStatus:(_Bool)arg4;	// IMP=0x00100000000289b1
- (void)setupDASPropertiesOnTask:(id)arg1 taskInfo:(id)arg2 discretionaryStatus:(_Bool)arg3;	// IMP=0x0010000000028169
- (void)wakeUpClient:(long long)arg1;	// IMP=0x0010000000027935
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x0010000000027608
- (void)errorOccurredDuringAuthCallbackDelivery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000274b3
- (void)errorOccurredDuringFinishedCallbackDelivery:(id)arg1;	// IMP=0x0010000000027365
- (id)getClientProxy;	// IMP=0x0010000000027354
- (_Bool)errorIfBlockedTracker:(id)arg1 url:(id)arg2;	// IMP=0x00100000000270e7
- (id)inputStreamWithFileHandle:(id)arg1 taskIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000026f1d
- (id)makeTempUploadFile:(id)arg1 withExtensionData:(id)arg2;	// IMP=0x00100000000264c4
- (void)requeueTask:(unsigned long long)arg1;	// IMP=0x00100000000264b0
- (void)requeueTask:(unsigned long long)arg1 skipResume:(_Bool)arg2;	// IMP=0x001000000002645a
- (void)removeOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x00100000000263f2
- (void)addOutstandingTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000002638a
- (void)enqueueTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000026384
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x00100000000260c5
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0010000000025d48
- (void)handleWillBeginDelayedRequestForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025500
- (void)handleEarliestBeginDateForTaskWithIdentifier:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024f3c
- (void)cancelMonitorForTask:(unsigned long long)arg1;	// IMP=0x0010000000024e46
- (_Bool)currentDiscretionaryStatus:(id)arg1 withOptionalTaskInfo:(id)arg2;	// IMP=0x001000000002445d
- (long long)priorityForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x0010000000024447
- (id)getTLSSessionCachePrefix;	// IMP=0x001000000002440c
- (id)getTasksForReconnection;	// IMP=0x00100000000242ae
- (void)fillInPropertiesForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x00100000000241e7
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x00100000000240df
- (void)allowReconnect;	// IMP=0x0010000000024091
- (void)reconnectClient:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000023d51
- (void)clientDidDisconnect;	// IMP=0x00100000000239d4
- (void)cancelTasksRequiringClientConnectionAndResumeUnstartedTasks;	// IMP=0x00100000000233d2
- (_Bool)finalizeTaskCompletionWithSuppressedWake:(_Bool)arg1;	// IMP=0x0010000000023346
- (void)handleCompletionOfTask:(id)arg1 identifier:(unsigned long long)arg2 taskInfo:(id)arg3 isRecoverable:(_Bool)arg4 suppressWake:(_Bool)arg5;	// IMP=0x0010000000023304
- (_Bool)clientIsActive;	// IMP=0x00100000000231a8
- (_Bool)sessionHasOutstandingTasks;	// IMP=0x001000000002308c
- (void)removeUploadFileForTaskInfo:(id)arg1;	// IMP=0x0010000000023025
- (void)removeDownloadFileForTaskInfo:(id)arg1;	// IMP=0x0010000000022ec4
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2 transactionMetrics:(id)arg3;	// IMP=0x00100000000224fb
- (void)statusMonitor:(id)arg1 callbackForIdentifier:(unsigned long long)arg2 networkChanged:(_Bool)arg3;	// IMP=0x00100000000224a5
- (id)clientErrorForError:(id)arg1;	// IMP=0x0010000000022266
- (id)restoreTasks:(_Bool *)arg1;	// IMP=0x0010000000021ee8
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0010000000021d83
- (id)restoreTasksFromSqliteDB:(id)arg1;	// IMP=0x0010000000020d6a
- (id)restoreTask:(id)arg1 isOutstanding:(_Bool *)arg2;	// IMP=0x00100000000207d8
- (id)restoreCompletedTask:(id)arg1;	// IMP=0x001000000001ff24
- (id)restoreInProgressTask:(id)arg1;	// IMP=0x001000000001f695
- (id)createNewTaskFromInfo:(id)arg1;	// IMP=0x001000000001ee68
- (void)ensureSessionDownloadDirectoryExists;	// IMP=0x001000000001ec85
- (void)configureTask:(id)arg1 withTaskInfo:(id)arg2;	// IMP=0x001000000001e9fc
- (void)configureAdditionalPropertiesOnTask:(id)arg1 taskInfo:(id)arg2;	// IMP=0x001000000001e793
- (id)sanitizeTaskProperties:(id)arg1;	// IMP=0x001000000001d955
- (id)adjustDiscretionaryStatusForTaskInfo:(id)arg1;	// IMP=0x001000000001d8d5
- (void)updateTaskInfoBasedOnCurrentDiscretionaryStatus:(id)arg1;	// IMP=0x001000000001d697
- (id)requestWithAdjustedWindowForTaskInfo:(id)arg1;	// IMP=0x001000000001d2db
- (id)descriptionForTCPConnectionWaitingReason:(long long)arg1;	// IMP=0x001000000001d284
- (id)descriptionForRequest:(id)arg1;	// IMP=0x001000000001d14a
- (id)descriptionForTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000001d06f
- (void)archiveTimerFired;	// IMP=0x001000000001d021
- (void)queueUpdatesForTask:(id)arg1 updateType:(unsigned long long)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000001cf7c
- (void)storeTaskInfoUpdates:(_Bool)arg1;	// IMP=0x001000000001cf19
- (id)tasksArchivePath;	// IMP=0x001000000001ceaa
- (void)obliterate;	// IMP=0x001000000001cbad
- (void)cleanupSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c952
- (id)setupDownloadDirectory;	// IMP=0x001000000001c64c
- (void)clientApplicationWasReinstalled;	// IMP=0x001000000001bfec
- (void)backgroundUpdatesEnabledForApplication:(id)arg1;	// IMP=0x001000000001bf5c
- (void)applicationWasSuspended:(id)arg1 pid:(int)arg2;	// IMP=0x001000000001beba
- (_Bool)hasConnectedClient;	// IMP=0x001000000001bd55
- (void)setXPCConnection:(id)arg1;	// IMP=0x001000000001b98c
- (id)sessionForDiscretionaryStatus:(_Bool)arg1;	// IMP=0x001000000001b97b
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 db:(id)arg9;	// IMP=0x001000000001a719
- (id)configurationWithClientConfiguration:(id)arg1 discretionary:(_Bool)arg2;	// IMP=0x00100000000198e2
- (double)defaultWindowDurationForResourceTimeout:(double)arg1;	// IMP=0x00100000000198c7
- (void)updateOptions:(id)arg1;	// IMP=0x001000000001976c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

