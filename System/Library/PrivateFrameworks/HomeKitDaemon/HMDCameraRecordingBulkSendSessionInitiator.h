//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraRecordingBulkSendListener, HMDHAPAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingBulkSendSessionInitiator : HMFObject
{
    _Bool _waitingForAccessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHAPAccessory *_accessory;	// 24 = 0x18
    HMDCameraRecordingBulkSendListener *_currentListener;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000960ce3
- (void).cxx_destruct;	// IMP=0x0000000000960a29
@property(retain) HMDCameraRecordingBulkSendListener *currentListener; // @synthesize currentListener=_currentListener;
@property(getter=isWaitingForAccessory) _Bool waitingForAccessory; // @synthesize waitingForAccessory=_waitingForAccessory;
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x000000000096094d
- (void)listenerDidReceiveDataStreamClose:(id)arg1;	// IMP=0x0000000000960751
- (void)listenerDidReceiveDataStreamStart:(id)arg1;	// IMP=0x00000000009604c2
- (void)handleAccessoryDoesSupportBulkSendDataStreamNotification:(id)arg1;	// IMP=0x0000000000960451
- (void)_registerBulkSendListener;	// IMP=0x000000000096027c
- (void)openNewSessionWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000095fd1e
- (void)stop;	// IMP=0x000000000095fa79
- (void)configure;	// IMP=0x000000000095f9c6
@property(readonly, getter=isSessionOpenInProgress) _Bool sessionOpenInProgress;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000095f889

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

