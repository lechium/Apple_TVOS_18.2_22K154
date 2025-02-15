//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventTriggerDevice, HMDEventTriggerExecutionSession, HMDTriggerConfirmationTimer, HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDEventTriggerUserConfirmationSession
{
    HMDEventTriggerExecutionSession *_executionSession;	// 8 = 0x8
    HMDEventTriggerDevice *_requestingDevice;	// 16 = 0x10
    HMDTriggerConfirmationTimer *_userResponseTimer;	// 24 = 0x18
    HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *_analyticsEvent;	// 32 = 0x20
    NSMutableArray *_analyticsSendEvents;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000ab6b90
- (void).cxx_destruct;	// IMP=0x0000000000ab62d5
@property(retain, nonatomic) NSMutableArray *analyticsSendEvents; // @synthesize analyticsSendEvents=_analyticsSendEvents;
@property(retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent; // @synthesize analyticsEvent=_analyticsEvent;
@property(retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer; // @synthesize userResponseTimer=_userResponseTimer;
@property(readonly, nonatomic) HMDEventTriggerDevice *requestingDevice; // @synthesize requestingDevice=_requestingDevice;
@property(nonatomic) __weak HMDEventTriggerExecutionSession *executionSession; // @synthesize executionSession=_executionSession;
- (void)_sessionComplete;	// IMP=0x0000000000ab6115
- (void)_handleUserPermissionRemoveDialogRequest:(id)arg1;	// IMP=0x0000000000ab5ffa
- (void)_removeUserDialog:(id)arg1;	// IMP=0x0000000000ab5c6f
- (void)_handleUserPermissionRemoteResponse:(id)arg1;	// IMP=0x0000000000ab59ce
- (void)_userResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ab51ff
- (void)userDidConfirmExecute:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ab5148
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000ab5090
- (void)_createBulletinNotification;	// IMP=0x0000000000ab4de3
- (void)createBulletinNotification;	// IMP=0x0000000000ab4d72
- (void)_askForUserPermissionFromDevice:(id)arg1 executionSessionID:(id)arg2;	// IMP=0x0000000000ab489d
- (void)askForUserPermission:(id)arg1;	// IMP=0x0000000000ab47e5
- (void)_registerForMessages;	// IMP=0x0000000000ab45e9
- (void)dealloc;	// IMP=0x0000000000ab43eb
- (id)initWithSessionID:(id)arg1 eventTrigger:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 requestingDevice:(id)arg5;	// IMP=0x0000000000ab432b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSObject<OS_dispatch_queue>",?,R,N

@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

