//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFHTTPClientConnection, HMFHTTPRequest, NSError;

@protocol HMFHTTPClientConnectionDelegate <NSObject>
- (void)connection:(HMFHTTPClientConnection *)arg1 didReceiveRequest:(HMFHTTPRequest *)arg2;

@optional
- (void)connection:(HMFHTTPClientConnection *)arg1 didCloseWithError:(NSError *)arg2;
@end

