//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, NSObject, NSString;
@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate, OS_dispatch_queue;

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSource <NSObject>
@property __weak id <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;
- (void)pushTokensForDevicesObservingSubjectDevice:(HMDDevice *)arg1 subActivity:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *))arg4;
@end

