//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ADDailyDeviceStatusActivity : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)taskFromActivity:(id)arg1;	// IMP=0x00200000000d08da
+ (id)xpcCriteria;	// IMP=0x00100000000d0869
+ (const char *)activityIdentifier;	// IMP=0x00100000000d085c
- (void).cxx_destruct;	// IMP=0x00200000000cf2f6
- (id)fetchVoiceTriggerSettings;	// IMP=0x00100000000cf22f
- (void)fetchICUserIdentityForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cefbc
- (void)fetchAppleMusicSubscriptionForSharedUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cee77
- (id)getVolumeCapacity;	// IMP=0x00100000000cecec
- (void)_triggerABCForNullAssistantIdentifier;	// IMP=0x00100000000cebc8
- (id)_truncatedGradingOptInStateChanges:(id)arg1;	// IMP=0x00100000000ce9cf
- (int)getAdaptiveVolumeUserIntent:(int)arg1;	// IMP=0x00100000000ce9b8
- (int)getSiriDataSharingOptInStatus;	// IMP=0x00100000000ce99c
- (void)fetchEnrolledUsersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ce3a1
- (int)_locationAccessPermission;	// IMP=0x00100000000ce329
- (_Bool)_preciseLocationEnabled;	// IMP=0x00100000000ce2b2
- (_Bool)_isSiriCapableDigitalCarKeyAvailable;	// IMP=0x00100000000ce0fe
- (id)_buildDailySelfTriggerSuppressionMetrics;	// IMP=0x00100000000ce0e5
- (id)_buildDailyVoiceTriggerMetrics:(id)arg1;	// IMP=0x00100000000cdf46
- (void)buildDailyDeviceStatusHeartbeatMetricsWithSiriEnabled:(_Bool)arg1 onLockscreen:(_Bool)arg2 dictationEnabled:(_Bool)arg3 voiceTriggerEnabled:(_Bool)arg4 starkHasBeenActiveWithin24Hours:(_Bool)arg5 raiseToSpeakEnabled:(_Bool)arg6 activeAppleAudioDevices:(id)arg7 spokenNotificationsEnabled:(_Bool)arg8 announceNotificationsEnabledOnHeadphones:(_Bool)arg9 carplayAnnounceEnablementType:(long long)arg10 isAnnounceNotificationsMutedForCarPlay:(_Bool)arg11 shouldSkipTriggerlessReplyConfirmation:(_Bool)arg12 spokenNotificationsProxCardSeen:(_Bool)arg13 spokenNotificationsControlCenterModuleEnabled:(_Bool)arg14 spokenNotificationsWhitelistSettings:(unsigned long long)arg15 announceCallsEnabled:(_Bool)arg16 preciseLocationEnabled:(_Bool)arg17 locationAccessPermission:(int)arg18 adaptiveSiriVolumeEnabled:(_Bool)arg19 adaptiveSiriVolumePermanentOffsetEnabled:(_Bool)arg20 adaptiveSiriVolumePermanentOffsetFactor:(id)arg21 adaptiveSiriVolumeMostRecentIntent:(id)arg22 isRemoteDarwinVoiceTriggerEnabled:(_Bool)arg23 autoSendSettings:(id)arg24 hangUpEnablementState:(int)arg25 heartbeatQueuedTime:(unsigned long long)arg26 siriVoiceTriggerSettings:(id)arg27 isShowAppsBehindSiriEnabledOnCarPlay:(_Bool)arg28 isSiriCapableDigitalCarKeyAvailable:(_Bool)arg29 connectedBTCarHeadunits:(id)arg30 withCompletion:(CDUnknownBlockType)arg31;	// IMP=0x00100000000cc033
- (void)runWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cb5f9
- (id)init;	// IMP=0x00100000000cb550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

