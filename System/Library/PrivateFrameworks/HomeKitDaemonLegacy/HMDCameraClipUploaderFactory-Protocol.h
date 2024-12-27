//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMBLocalZone, HMCameraClipEncryptionManager, HMDCameraClipAddSignificantEventOperation, HMDCameraClipCreateClipOperation, HMDCameraClipCreateClipWithSignificantEventOperation, HMDCameraClipFinalizeClipOperation, HMDCameraClipSegmentMetadata, HMDCameraClipUploadVideoSegmentOperation, HMDCameraRecordingSessionSignificantEvent, NSData, NSDate, NSDictionary, NSUUID;

@protocol HMDCameraClipUploaderFactory <NSObject>
- (HMDCameraClipFinalizeClipOperation *)createFinalizeClipOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2;
- (HMDCameraClipAddSignificantEventOperation *)createAddSignificantEventOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 significantEvent:(HMDCameraRecordingSessionSignificantEvent *)arg3 homePresenceByPairingIdentity:(NSDictionary *)arg4;
- (HMDCameraClipUploadVideoSegmentOperation *)createUploadVideoSegmentOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 data:(NSData *)arg3 metadata:(HMDCameraClipSegmentMetadata *)arg4 encryptionManager:(HMCameraClipEncryptionManager *)arg5;
- (HMDCameraClipCreateClipWithSignificantEventOperation *)createCreateClipWithSignificantEventOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 significantEvent:(HMDCameraRecordingSessionSignificantEvent *)arg3 homePresenceByPairingIdentity:(NSDictionary *)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(NSDate *)arg6 quality:(long long)arg7 encryptionManager:(HMCameraClipEncryptionManager *)arg8;
- (HMDCameraClipCreateClipOperation *)createCreateClipOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(NSDate *)arg4 quality:(long long)arg5 encryptionManager:(HMCameraClipEncryptionManager *)arg6;
@end

