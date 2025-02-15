//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLSession : NSObject
{
    NSMutableDictionary *_taskToRequest;	// 8 = 0x8
    NSURLSession *_session;	// 16 = 0x10
    struct OpaqueFigCustomURLHandler *_handler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void)dealloc;	// IMP=0x00000000000fdf5e
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;	// IMP=0x00000000000fdd2b
- (id)init;	// IMP=0x00000000000fdd1d
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fdd07
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000fdb6a
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x00000000000fdadd
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000000000fd9e1
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000fd6d6
- (int)_cancelRequestID:(unsigned long long)arg1;	// IMP=0x00000000000fd582
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(_Bool *)arg3;	// IMP=0x00000000000fd072
- (id)_lookupRequestForDataTask:(id)arg1;	// IMP=0x00000000000fd05c
- (void)_unregisterRequestForDataTask:(id)arg1;	// IMP=0x00000000000fd046
- (void)_registerRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;	// IMP=0x00000000000fcffe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

