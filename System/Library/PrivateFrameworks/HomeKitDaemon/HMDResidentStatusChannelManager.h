//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDIDSServerBag, HMDProcessMonitor, HMDResidentStatusChannel, HMFTimer, NSMutableSet, NSNotificationCenter, NSObject, NSString;
@protocol HMDTimerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDResidentStatusChannelManager : HMFObject
{
    NSMutableSet *_clientIdentifiers;	// 8 = 0x8
    HMDResidentStatusChannel *_residentStatusChannel;	// 16 = 0x10
    NSNotificationCenter *_notificationCenter;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    id <HMDTimerProvider> _timerProvider;	// 40 = 0x28
    HMFTimer *_unsubscribeFromChannelDebounceTimer;	// 48 = 0x30
    HMDIDSServerBag *_idsServerBag;	// 56 = 0x38
    HMDProcessMonitor *_processMonitor;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x0010000000a5d0db
- (void).cxx_destruct;	// IMP=0x0000000000a5c375
@property(readonly, nonatomic) HMDProcessMonitor *processMonitor; // @synthesize processMonitor=_processMonitor;
@property(readonly) __weak HMDIDSServerBag *idsServerBag; // @synthesize idsServerBag=_idsServerBag;
@property(retain) HMFTimer *unsubscribeFromChannelDebounceTimer; // @synthesize unsubscribeFromChannelDebounceTimer=_unsubscribeFromChannelDebounceTimer;
@property(readonly, nonatomic) id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) HMDResidentStatusChannel *residentStatusChannel; // @synthesize residentStatusChannel=_residentStatusChannel;
- (id)logIdentifier;	// IMP=0x0000000000a5c23f
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a5c159
- (void)_stopUnsubscribeFromChannelDebounceTimer;	// IMP=0x0000000000a5c00a
- (void)_startUnsubscribeFromChannelDebounceTimer;	// IMP=0x0000000000a5bd8a
- (_Bool)_shouldChannelBeRunning;	// IMP=0x0000000000a5bbd9
- (void)_evaluateChannelConnectionStateWithCurrentClientIdentifierCount:(unsigned long long)arg1 previousClientIdentifierCount:(unsigned long long)arg2;	// IMP=0x0000000000a5b9f5
- (_Bool)_residentStatusChannelNeededForBundleIdentifier:(id)arg1 applicationState:(unsigned long long)arg2;	// IMP=0x0000000000a5b883
- (void)_handleForegroundStateChangedForBundleIdentifier:(id)arg1 applicationState:(unsigned long long)arg2;	// IMP=0x0000000000a5b6f1
- (void)_configureWithExistingProcesses:(id)arg1;	// IMP=0x0000000000a5b69f
@property(readonly, nonatomic) NSMutableSet *clientIdentifiers; // @synthesize clientIdentifiers=_clientIdentifiers;
- (void)handleProcessRemoved:(id)arg1;	// IMP=0x0000000000a5b5a0
- (void)handleProcessAdded:(id)arg1;	// IMP=0x0000000000a5b4e8
- (void)handleProcessInfoStateChanged:(id)arg1;	// IMP=0x0000000000a5b199
- (void)removeClientWithIdentifier:(id)arg1;	// IMP=0x0000000000a5b0e1
- (void)addClientWithIdentifier:(id)arg1;	// IMP=0x0000000000a5b029
- (void)configure;	// IMP=0x0000000000a5aee4
- (id)initWithResidentStatusChannel:(id)arg1 queue:(id)arg2 idsServerBag:(id)arg3;	// IMP=0x0000000000a5adba
- (id)initWithResidentStatusChannel:(id)arg1 notificationCenter:(id)arg2 queue:(id)arg3 timerProvider:(id)arg4 idsServerBag:(id)arg5 processMonitor:(id)arg6;	// IMP=0x0000000000a5ac40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

