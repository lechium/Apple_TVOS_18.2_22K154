//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WRMClientDelegate;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    id _wrmClientDelegate;	// 24 = 0x18
    int _mediaControlInfoVersion;	// 32 = 0x20
    int _mode;	// 36 = 0x24
    CDStruct_21a0265e _metricsConfig;	// 40 = 0x28
    int _rssiThreshold;	// 44 = 0x2c
}

@property int mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
- (void)updateMetricsConfig:(CDStruct_21a0265e)arg1;	// IMP=0x00000000003196fc
- (void)setRSSIThresholdEnabled:(_Bool)arg1;	// IMP=0x00000000003196f6
- (void)setPreWarmState:(_Bool)arg1;	// IMP=0x00000000003196f0
- (void)processNotificationList:(id)arg1;	// IMP=0x00000000003196ea
- (void)processWRMCoexMetrics:(id)arg1 isAlertedMode:(_Bool)arg2;	// IMP=0x00000000003196e4
- (void)setConfiguration:(CDStruct_69d7cc99 *)arg1;	// IMP=0x00000000003196de
- (void)reportMetricsFaceTimeCalling:(const CDStruct_dea828ac *)arg1;	// IMP=0x00000000003196d8
- (void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2;	// IMP=0x00000000003196d2
- (void)reportMetricsWifiCalling:(const CDStruct_dea828ac *)arg1;	// IMP=0x00000000003196cc
- (void)sendReport:(id)arg1;	// IMP=0x00000000003196c6
- (void)dumpReport:(id)arg1;	// IMP=0x00000000003196c0
- (void)sendStatusUpdateFaceTimeCalling:(const CDStruct_8aeecdac *)arg1;	// IMP=0x00000000003196ba
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;	// IMP=0x00000000003196b4
- (void)requestNotificationFaceTimeCalling;	// IMP=0x00000000003196ae
- (void)sendUnsubscriptionInfoFaceTimeCalling;	// IMP=0x00000000003196a8
- (void)sendSubscriptionInfoFaceTimeCalling;	// IMP=0x00000000003196a2
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;	// IMP=0x000000000031969c
- (int)getWRMSubscribeVersion;	// IMP=0x0000000000319679
- (void)stopWRMClient;	// IMP=0x0000000000319673
- (void)startWRMClientWithMode:(int)arg1 metricsConfig:(CDStruct_21a0265e)arg2;	// IMP=0x000000000031966d
- (void)releaseServiceConnection;	// IMP=0x0000000000319667
- (_Bool)setupServiceConnection;	// IMP=0x000000000031965f
@property id <WRMClientDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000319531
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000319402
- (id)init;	// IMP=0x00000000003192e2

@end

