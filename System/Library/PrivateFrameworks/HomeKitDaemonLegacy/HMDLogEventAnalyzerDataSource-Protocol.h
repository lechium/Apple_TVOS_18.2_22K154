//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDTTRTriggerDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDConfigurationLogEvent, HMDEventCountersManager, HMDLogEventDailyScheduler, HMDTimeBasedFlagsManager, HMMDateProvider, NSNotificationCenter, NSString, NSUserDefaults;
@protocol HMDEWSLogging, HMDMetricsDeviceStateProvider, HMMLogEventDispatching, HMMLogEventSubmitting, HMMRadarInitiating;

@protocol HMDLogEventAnalyzerDataSource <NSObject, HMDTTRTriggerDataSource>
@property(readonly, nonatomic) _Bool isCurrentDeviceConfirmedPrimaryResident;
@property(readonly, nonatomic) _Bool isThisDeviceDesignatedFMFDevice;
@property(readonly, nonatomic) __weak id <HMDEWSLogging> ewsLogger;
@property(readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration;
@property(readonly, nonatomic) NSString *currentSoftwareVersion;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
@property(readonly, nonatomic) HMMDateProvider *dateProvider;
@property(readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property(readonly, nonatomic) id <HMMLogEventDispatching> logEventDispatcher;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
@property(readonly, nonatomic) id <HMDMetricsDeviceStateProvider> deviceStateProvider;
@property(readonly, nonatomic) id <HMMRadarInitiating> radarInitiator;
@property(readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;
@property(readonly, nonatomic) HMDEventCountersManager *legacyCountersManager;
- (void)addRateTrigger:(NSString *)arg1 forEventName:(NSString *)arg2 requestGroup:(NSString *)arg3 atThreshold:(unsigned long long)arg4 windowSize:(unsigned long long)arg5;
- (void)addThresholdTrigger:(NSString *)arg1 forEventName:(NSString *)arg2 requestGroup:(NSString *)arg3 atThreshold:(unsigned long long)arg4 uploadImmediately:(_Bool)arg5;
- (void)addThresholdTrigger:(NSString *)arg1 forEventName:(NSString *)arg2 requestGroup:(NSString *)arg3 atThreshold:(unsigned long long)arg4;
- (void)addConfigurationChangedObserver:(void (^)(HMDConfigurationLogEvent *))arg1;
@end

