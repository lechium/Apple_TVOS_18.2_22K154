//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperationDelegate-Protocol.h>

@class ISURLOperation, NSInputStream, NSMutableData, NSMutableURLRequest, NSNumber, NSString, NSURLAuthenticationChallenge, NSURLCache, NSURLCredential, NSURLRequest, NSURLResponse;

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSNumber",?,R,N

- (NSString *)URLCacheID;
- (NSURLCache *)URLCache;
- (NSURLCredential *)operation:(ISURLOperation *)arg1 credentialForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (long long)operation:(ISURLOperation *)arg1 dispositionForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (NSString *)operation:(ISURLOperation *)arg1 sanitizedStringForString:(NSString *)arg2;
- (void)operation:(ISURLOperation *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;
- (_Bool)operation:(ISURLOperation *)arg1 processData:(NSMutableData *)arg2 error:(id *)arg3;
- (NSInputStream *)operation:(ISURLOperation *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (void)operation:(ISURLOperation *)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(ISURLOperation *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)operation:(ISURLOperation *)arg1 didDiscoverContentLength:(NSNumber *)arg2;
@end

