//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalZone, HMDCameraClipUploader, HMDCameraRecordingSessionSignificantEventManager, HMDCameraRecordingSessionVariantFragmentManager, HMDCameraSignificantEventFaceClassificationResolver, HMIVideoAnalyzerConfiguration, NSData, NSDate, NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingSessionVideoAnalyzer, OS_dispatch_queue;

@protocol HMDCameraRecordingSessionFactory <NSObject>
@property(readonly) double recordingExtensionDuration;
@property(readonly) double maximumClipDuration;
- (_Bool)isVideoInitData:(NSData *)arg1 combinableWithVideoInitData:(NSData *)arg2;
- (HMDCameraClipUploader *)createUploaderWithClipUUID:(NSUUID *)arg1 startDate:(NSDate *)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(HMBLocalZone *)arg5 workQueue:(NSObject<OS_dispatch_queue> *)arg6 logIdentifier:(NSString *)arg7;
- (HMDCameraRecordingSessionVariantFragmentManager *)createTimelapseFragmentManagerWithLogIdentifier:(NSString *)arg1;
- (HMDCameraRecordingSessionSignificantEventManager *)createSignificantEventManagerWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 faceClassificationResolver:(HMDCameraSignificantEventFaceClassificationResolver *)arg2 logIdentifier:(NSString *)arg3;
- (id <HMDCameraRecordingSessionVideoAnalyzer>)createVideoAnalyzerWithConfiguration:(HMIVideoAnalyzerConfiguration *)arg1 identifier:(NSUUID *)arg2;
@end

