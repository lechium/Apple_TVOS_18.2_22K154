//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMFMessage;

@protocol HMDMessageRouter <NSObject>
- (void)routeMessage:(HMFMessage *)arg1 allowRemoteRelayFromPrimary:(_Bool)arg2 localHandler:(void (^)(HMFMessage *))arg3;
- (void)routeMessage:(HMFMessage *)arg1 localHandler:(void (^)(HMFMessage *))arg2;
@end

