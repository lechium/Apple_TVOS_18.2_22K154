//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue, NSString, NSURLSession;
@protocol SWCDownloaderDelegate;

@interface SWCDownloader : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_sessions[4];	// 16 = 0x10
    NSMapTable *_allTaskStates;	// 48 = 0x30
    id <SWCDownloaderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000003fd7
@property __weak id <SWCDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0010000000003b24
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00100000000039ec
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002cb6
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000000284c
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000218f
- (void)enumerateActiveAASAFileDownloadsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001e42
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000001ce8
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001c3d
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000001ae6
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001a3b
- (void)receiveSIGTERMSignal;	// IMP=0x00100000000018f4
- (id)init;	// IMP=0x001000000000177a
- (void)_invokeCompletionHandlerForState:(id)arg1 JSONObject:(id)arg2 error:(id)arg3;	// IMP=0x001000000000711f
- (void)_processDownloadedDataForState:(id)arg1;	// IMP=0x0010000000006b97
- (id)_replaceTaskState:(id)arg1;	// IMP=0x001000000000685d
- (void)_resumePendingTasks;	// IMP=0x00100000000062d3
- (void)_enumerateTaskStatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000060d8
- (id)_URLRequestWithDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x0010000000005bc7
- (void)_downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 discretionary:(_Bool)arg4 completionHandlers:(id)arg5;	// IMP=0x0010000000005049
- (id)_taskStateForDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x0010000000004d7b
- (unsigned long long)_maximumActiveTaskCountForSessionID:(unsigned char)arg1;	// IMP=0x0010000000004d5c
- (id)_sessionForTaskState:(id)arg1;	// IMP=0x0010000000004b65
- (unsigned char)_sessionIDForTaskState:(id)arg1;	// IMP=0x0010000000004af2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

