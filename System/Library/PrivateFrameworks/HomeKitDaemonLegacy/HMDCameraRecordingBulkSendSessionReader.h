//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDataStreamFragmentAssembler, HMFTimer, NSObject, NSString;
@protocol HMDCameraRecordingBulkSendSessionReaderDelegate, HMDDataStreamBulkSendSession, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingBulkSendSessionReader : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    id <HMDDataStreamBulkSendSession> _session;	// 16 = 0x10
    id <HMDCameraRecordingBulkSendSessionReaderDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    HMFTimer *_readCallbackTimer;	// 40 = 0x28
    HMDDataStreamFragmentAssembler *_fragmentChunkAssembler;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000007e9e21
- (void).cxx_destruct;	// IMP=0x00000000007e9286
@property __weak id <HMDCameraRecordingBulkSendSessionReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <HMDDataStreamBulkSendSession> session; // @synthesize session=_session;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007e90d2
- (void)stopWithReason:(unsigned short)arg1;	// IMP=0x00000000007e9090
- (void)start;	// IMP=0x00000000007e8ee0
- (id)initWithWorkQueue:(id)arg1 session:(id)arg2 readCallbackTimer:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000007e8dcf
- (id)initWithWorkQueue:(id)arg1 session:(id)arg2 readTimeout:(double)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000007e8d0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

