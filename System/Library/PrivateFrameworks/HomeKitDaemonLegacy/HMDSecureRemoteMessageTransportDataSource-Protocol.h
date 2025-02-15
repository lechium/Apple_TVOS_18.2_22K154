//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAccountRegistry, HMDDevice, HMDModernTransportDeviceReachabilityObserver, HMDRemoteDeviceMonitor, NSArray;
@protocol HMDSecureRemoteSession;

@protocol HMDSecureRemoteMessageTransportDataSource <NSObject>
@property(readonly, nonatomic) HMDModernTransportDeviceReachabilityObserver *reachabilityObserver;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry;
@property(readonly, nonatomic) NSArray *transports;
- (id <HMDSecureRemoteSession>)secureSessionWithDevice:(HMDDevice *)arg1;
@end

