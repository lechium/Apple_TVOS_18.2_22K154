//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDActiveXPCClientConnectionsManager, HMDXPCClientConnection;

@protocol HMDActiveXPCClientConnectionsManagerDelegate <NSObject>
- (void)clientConnectionsManager:(HMDActiveXPCClientConnectionsManager *)arg1 didHandleDeactivationForClientConnection:(HMDXPCClientConnection *)arg2;
- (void)clientConnectionsManager:(HMDActiveXPCClientConnectionsManager *)arg1 didHandleActivationForClientConnection:(HMDXPCClientConnection *)arg2;
@end

