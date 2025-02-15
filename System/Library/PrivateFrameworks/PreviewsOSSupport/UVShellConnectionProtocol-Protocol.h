//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PreviewsOSSupport/NSObject-Protocol.h>

@class BSServiceConnectionEndpoint, NSXPCListenerEndpoint, UVPropertyList;

@protocol UVShellConnectionProtocol <NSObject>
- (oneway void)sendBSEndpoint:(BSServiceConnectionEndpoint *)arg1 context:(UVPropertyList *)arg2 replyHandler:(void (^)(UVPropertyList *, NSError *))arg3;
- (oneway void)sendXPCEndpoint:(NSXPCListenerEndpoint *)arg1 context:(UVPropertyList *)arg2 replyHandler:(void (^)(UVPropertyList *, NSError *))arg3;
- (oneway void)sendMessage:(UVPropertyList *)arg1 replyHandler:(void (^)(UVPropertyList *, NSError *))arg2;
- (oneway void)sendMessage:(UVPropertyList *)arg1;
@end

