//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShellSceneKit/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, SSKDisplayMonitor;

@protocol SSKDisplayMonitorObserver <NSObject>

@optional
- (void)displayMonitor:(SSKDisplayMonitor *)arg1 didDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayMonitor:(SSKDisplayMonitor *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayMonitor:(SSKDisplayMonitor *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
@end

