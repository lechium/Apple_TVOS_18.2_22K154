//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNotificationRegistration, HMDSiriAccessoryMonitor, HMDSiriRemoteInputServer, HMDSiriSession, NSString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface HMDSiriServer : NSObject
{
    unsigned int _targetControlIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_workloop> *_audioWorkloop;	// 24 = 0x18
    HMDNotificationRegistration *_notificationRegistration;	// 32 = 0x20
    HMDSiriRemoteInputServer *_siriInputServer;	// 40 = 0x28
    HMDSiriAccessoryMonitor *_siriAccessoryMonitor;	// 48 = 0x30
    HMDSiriSession *_siriUISession;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000005a101d
+ (id)sharedSiriServer;	// IMP=0x00100000005a0fed
- (void).cxx_destruct;	// IMP=0x000000000059ff06
@property(nonatomic) unsigned int targetControlIdentifier; // @synthesize targetControlIdentifier=_targetControlIdentifier;
@property(retain, nonatomic) HMDSiriSession *siriUISession; // @synthesize siriUISession=_siriUISession;
@property(retain, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor; // @synthesize siriAccessoryMonitor=_siriAccessoryMonitor;
@property(retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer; // @synthesize siriInputServer=_siriInputServer;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) NSObject<OS_dispatch_workloop> *audioWorkloop; // @synthesize audioWorkloop=_audioWorkloop;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;	// IMP=0x000000000059fdab
- (void)accessoryDidStartListening:(id)arg1;	// IMP=0x000000000059fcf3
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;	// IMP=0x000000000059fae4
- (void)monitorHasNoAccessoriesForDragonSiri:(id)arg1;	// IMP=0x000000000059fa73
- (void)monitor:(id)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;	// IMP=0x000000000059fa5e
- (void)monitor:(id)arg1 willAllowAccessoryForDragonSiri:(id)arg2;	// IMP=0x000000000059f975
- (void)monitor:(id)arg1 needsSiriCapabilityForAccessory:(id)arg2;	// IMP=0x000000000059f88c
- (id)_getSiriSessionForAccessory:(id)arg1;	// IMP=0x000000000059f85e
- (void)_removeDataStreamListenerForAccessory:(id)arg1;	// IMP=0x000000000059f775
- (_Bool)_isAudioCodecSupported:(id)arg1;	// IMP=0x000000000059f54b
- (id)_getBestAudioCodecConfiguration:(id)arg1;	// IMP=0x000000000059f3e0
- (_Bool)_isSiriInputType:(long long)arg1 supportedOnAccessory:(id)arg2 siriAudioConfiguration:(id)arg3;	// IMP=0x000000000059eb03
- (void)_checkSiriSupportByAccessory:(id)arg1;	// IMP=0x000000000059e8c6
- (void)_tearDownSiriUIContext;	// IMP=0x000000000059e7f7
- (void)_setupSiriUIContext;	// IMP=0x000000000059e53f
- (void)_maybeTearDownSiriPlugin;	// IMP=0x000000000059e4a1
- (void)_setupSiriPlugin;	// IMP=0x000000000059e3f7
- (void)_handleDisconnectForAccessory:(id)arg1;	// IMP=0x000000000059e1b5
- (void)handleAccessoryRemoved:(id)arg1;	// IMP=0x000000000059e166
- (void)handleAccessoryUnconfigured:(id)arg1;	// IMP=0x000000000059e117
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x000000000059e021
- (void)handleAccessoryHasBulkSendDataStream:(id)arg1;	// IMP=0x000000000059df2b
- (void)registerForMessages;	// IMP=0x000000000059dd5e
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;	// IMP=0x000000000059dc80
- (id)init;	// IMP=0x000000000059db3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

