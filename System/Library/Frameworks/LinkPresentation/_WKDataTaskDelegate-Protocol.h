//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class NSData, NSError, NSHTTPURLResponse, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, _WKDataTask;

@protocol _WKDataTaskDelegate <NSObject>

@optional
- (void)dataTask:(_WKDataTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)dataTask:(_WKDataTask *)arg1 didReceiveData:(NSData *)arg2;
- (void)dataTask:(_WKDataTask *)arg1 didReceiveResponse:(NSURLResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)dataTask:(_WKDataTask *)arg1 willPerformHTTPRedirection:(NSHTTPURLResponse *)arg2 newRequest:(NSURLRequest *)arg3 decisionHandler:(void (^)(long long))arg4;
- (void)dataTask:(_WKDataTask *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
@end

