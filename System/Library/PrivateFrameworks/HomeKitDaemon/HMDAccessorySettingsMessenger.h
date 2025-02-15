//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingsLocalMessageHandler, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDMessageRouter, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsMessenger : HMFObject
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    HMFMessageDispatcher *_messageDispatcher;	// 16 = 0x10
    id <HMDMessageRouter> _messageRouter;	// 24 = 0x18
    HMDAccessorySettingsLocalMessageHandler *_messageHandler;	// 32 = 0x20
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000d42067
- (void).cxx_destruct;	// IMP=0x0000000000d419f7
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) id <HMDMessageRouter> messageRouter; // @synthesize messageRouter=_messageRouter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;	// IMP=0x0000000000d417ea
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;	// IMP=0x0000000000d41447
- (id)logIdentifier;	// IMP=0x0000000000d413f7
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000d4111f
- (void)updateAndPostFetchSettingsEvent:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3;	// IMP=0x0000000000d40a27
- (id)fetchLogEventFromMessage:(id)arg1;	// IMP=0x0000000000d407cd
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d40509
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x0000000000d402cb
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4 logEventSubmitter:(id)arg5;	// IMP=0x0000000000d40135

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly) Class superclass;

@end

