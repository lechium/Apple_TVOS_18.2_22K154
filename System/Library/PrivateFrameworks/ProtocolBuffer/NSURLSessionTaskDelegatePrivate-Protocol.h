//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/NSURLSessionTaskDelegate-Protocol.h>

@class NSError, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask;

@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>

@optional
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _alternatePathAvailable:(int)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _didReceiveInformationalResponse:(NSURLResponse *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _conditionalRequirementsChanged:(_Bool)arg3;
- (void)URLSession:(NSURLSession *)arg1 _taskIsWaitingForConnection:(NSURLSessionTask *)arg2;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithReason:(long long)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _isWaitingForConnectionWithError:(NSError *)arg3;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _willSendRequestForEstablishedConnection:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;
- (void)URLSession:(NSURLSession *)arg1 task:(NSURLSessionTask *)arg2 _schemeUpgraded:(NSURLRequest *)arg3 completionHandler:(void (^)(NSURLRequest *))arg4;
@end

