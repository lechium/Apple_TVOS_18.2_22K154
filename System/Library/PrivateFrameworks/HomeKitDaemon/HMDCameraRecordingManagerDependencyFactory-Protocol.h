//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalZone, HMDCameraProfile, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingBulkSendSessionReader, HMDCameraRecordingLoadBalancingAttempt, HMDCameraRecordingSession, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSessionTimelineManager, HMDCameraRecordingSettingsControl, HMDHAPAccessory, HMDHome, HMDService, HMFPreferences, HMFTimer, NSDate, NSObject, NSString;
@protocol HMDDataStreamBulkSendSession, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

@protocol HMDCameraRecordingManagerDependencyFactory <NSObject>
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly) HMFPreferences *preferences;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource;
- (HMDCameraRecordingSessionRetryContext *)createRecordingSessionRetryContextWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (HMFTimer *)createTimerWithTimeInterval:(double)arg1;
- (HMDCameraRecordingBulkSendSessionReader *)createBulkSendSessionReaderWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 session:(id <HMDDataStreamBulkSendSession>)arg2 readTimeout:(double)arg3 logIdentifier:(NSString *)arg4;
- (HMDCameraRecordingBulkSendSessionInitiator *)createBulkSendSessionInitiatorWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 accessory:(HMDHAPAccessory *)arg2;
- (HMDCameraRecordingSessionNotificationTrigger *)createSessionNotificationTrigger:(HMDCameraProfile *)arg1 workQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (HMDCameraRecordingSession *)createRecordingSessionWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 camera:(HMDCameraProfile *)arg2 hapAccessory:(HMDHAPAccessory *)arg3 home:(HMDHome *)arg4 localZone:(HMBLocalZone *)arg5 configuredFragmentDuration:(double)arg6 timelineManager:(HMDCameraRecordingSessionTimelineManager *)arg7;
- (HMDCameraRecordingLoadBalancingAttempt *)createLoadBalancingAttemptWithLocalResponseTimeout:(double)arg1 logIdentifier:(NSString *)arg2;
- (HMDCameraRecordingSessionTimelineManager *)createTimelineManagerWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 fragmentDuration:(double)arg2 fragmentCreationReferenceDate:(NSDate *)arg3 logIdentifier:(NSString *)arg4;
- (HMDCameraRecordingSettingsControl *)createSettingsControl:(NSObject<OS_dispatch_queue> *)arg1 accessory:(HMDHAPAccessory *)arg2 managementService:(HMDService *)arg3;
@end

