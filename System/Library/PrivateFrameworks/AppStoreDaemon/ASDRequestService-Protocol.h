//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDRequest;
@protocol ASDRequestDelegate;

@protocol ASDRequestService
- (void)submitRequest:(ASDRequest *)arg1 delegate:(id <ASDRequestDelegate>)arg2 withReplyHandler:(void (^)(id <ASDRequestProxy>, NSError *))arg3;
- (void)cancelAllRequestsWithErrorHandler:(void (^)(NSError *))arg1;
@end

