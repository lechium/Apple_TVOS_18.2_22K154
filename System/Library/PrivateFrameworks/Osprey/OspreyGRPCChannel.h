//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AbsintheAuthenticationDurations, NSMapTable, NSString, NSURL, NSURLSession, OspreyMessageWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OspreyGRPCChannel : NSObject
{
    NSURLSession *_session;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    OspreyMessageWriter *_messageWriter;	// 24 = 0x18
    NSMapTable *_taskToContext;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    CDUnknownBlockType _connectionMetricsHandler;	// 48 = 0x30
    AbsintheAuthenticationDurations *_absintheDurations;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000edff
@property(retain, nonatomic) AbsintheAuthenticationDurations *absintheDurations; // @synthesize absintheDurations=_absintheDurations;
@property(copy, nonatomic) CDUnknownBlockType connectionMetricsHandler; // @synthesize connectionMetricsHandler=_connectionMetricsHandler;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000000000ed13
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e907
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e744
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000000e5dd
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e5a8
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x000000000000e412
- (void)preconnect;	// IMP=0x000000000000e2e1
- (void)bidirectionalStreamingRequest:(id)arg1 streamingContext:(id)arg2;	// IMP=0x000000000000e140
- (id)bidirectionalStreamingRequest:(id)arg1 streamingResponseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e0c3
- (id)clientStreamingRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2 streamingContext:(id)arg3;	// IMP=0x000000000000de69
- (void)serverStreamingRequest:(id)arg1 requestData:(id)arg2 streamingResponseHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ddd9
- (void)unaryRequest:(id)arg1 requestData:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000db24
- (id)clientStreamingContextForRequest:(id)arg1 streamingResponseHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000da5c
- (void)_startTask:(id)arg1;	// IMP=0x000000000000da47
- (void)setAbsintheTimestampForKey:(id)arg1;	// IMP=0x000000000000d9de
- (void)cancel;	// IMP=0x000000000000d991
- (void)close;	// IMP=0x000000000000d944
- (void)dealloc;	// IMP=0x000000000000d906
- (id)initWithURL:(id)arg1 configuration:(id)arg2 queue:(id)arg3;	// IMP=0x000000000000d6ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

