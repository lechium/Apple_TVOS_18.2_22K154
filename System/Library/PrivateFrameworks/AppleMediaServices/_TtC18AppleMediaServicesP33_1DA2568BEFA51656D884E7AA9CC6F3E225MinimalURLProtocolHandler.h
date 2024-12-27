//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession, MISSING_TYPE, NSMutableData, NSURLRequest, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;

@interface _TtC18AppleMediaServicesP33_1DA2568BEFA51656D884E7AA9CC6F3E225MinimalURLProtocolHandler : NSObject
{
    MISSING_TYPE *metricsHandler;	// 8 = 0x8
    MISSING_TYPE *session;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000436dc
- (id)init;	// IMP=0x00000000000436bb
- (void)reconfigureNewRequest:(NSURLRequest *)arg1 originalTask:(NSURLSessionTask *)arg2 redirect:(_Bool)arg3 completionHandler:(void (^)(NSURLRequest *, NSError *))arg4;	// IMP=0x00000000000433f9
- (void)handleResponse:(NSURLResponse *)arg1 task:(NSURLSessionTask *)arg2 completionHandler:(void (^)(AMSURLAction *))arg3;	// IMP=0x0000000000043282
- (void)handleCompletionWithTask:(NSURLSessionTask *)arg1 metrics:(NSURLSessionTaskMetrics *)arg2 decodedObject:(id)arg3 completionHandler:(void (^)(AMSURLAction *))arg4;	// IMP=0x00000000000430c2
- (void)didCreateTask:(NSURLSessionTask *)arg1 fromRequest:(NSURLRequest *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;	// IMP=0x0000000000042f0b
- (void)decodeMutableData:(NSMutableData *)arg1 task:(NSURLSessionTask *)arg2 completionHandler:(void (^)(id, NSError *))arg3;	// IMP=0x0000000000042d14
@property(nonatomic, retain) AMSURLSession *session; // @synthesize session;
- (void)reportMetricsForContext:(id)arg1;	// IMP=0x0000000000043ea5

@end

