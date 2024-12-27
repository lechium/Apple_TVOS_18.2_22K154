//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCameraSnapshotRemoteStreamReceiver, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate <NSObject>
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
- (void)snapshotStreamReceiver:(HMDCameraSnapshotRemoteStreamReceiver *)arg1 didStartGettingImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end

