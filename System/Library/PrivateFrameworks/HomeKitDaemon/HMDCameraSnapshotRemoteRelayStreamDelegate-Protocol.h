//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotRemoteRelayStream, HMDCameraSnapshotSessionID, NSError;

@protocol HMDCameraSnapshotRemoteRelayStreamDelegate <NSObject>
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelayStream:(HMDCameraSnapshotRemoteRelayStream *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

