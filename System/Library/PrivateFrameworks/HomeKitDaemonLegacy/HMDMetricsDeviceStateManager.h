//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMMDateProvider, NSDate, NSString;
@protocol HAPSystemKeyCountProvider, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMetricsDeviceStateManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    unsigned long long _currentDataSyncState;	// 16 = 0x10
    unsigned long long _currentHomeManagerStatus;	// 24 = 0x18
    unsigned long long _bitMappedMissingKeys;	// 32 = 0x20
    unsigned long long _bitMappedDuplicateKeys;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 48 = 0x30
    NSDate *_lastSoftwareUpdateDate;	// 56 = 0x38
    HMMDateProvider *_dateProvider;	// 64 = 0x40
    id <HAPSystemKeyCountProvider> _keyCountProvider;	// 72 = 0x48
}

+ (long long)internalDeviceDaysSinceSoftwareUpdate;	// IMP=0x00100000000daa28
+ (long long)_daysSinceSoftwareUpdateFrom:(id)arg1 dateProvider:(id)arg2;	// IMP=0x00100000000da969
+ (id)lastUpdateForSoftwareVersion:(id)arg1 dateProvider:(id)arg2 userDefaults:(id)arg3 updateDefaultsIfNeeded:(_Bool)arg4;	// IMP=0x00100000000da81e
- (void).cxx_destruct;	// IMP=0x00000000000da7cd
@property(readonly, nonatomic) id <HAPSystemKeyCountProvider> keyCountProvider; // @synthesize keyCountProvider=_keyCountProvider;
@property(readonly, nonatomic) __weak HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) NSDate *lastSoftwareUpdateDate; // @synthesize lastSoftwareUpdateDate=_lastSoftwareUpdateDate;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) unsigned long long bitMappedDuplicateKeys; // @synthesize bitMappedDuplicateKeys=_bitMappedDuplicateKeys;
@property(readonly) unsigned long long bitMappedMissingKeys; // @synthesize bitMappedMissingKeys=_bitMappedMissingKeys;
@property(readonly) unsigned long long currentHomeManagerStatus; // @synthesize currentHomeManagerStatus=_currentHomeManagerStatus;
@property(readonly) unsigned long long currentDataSyncState; // @synthesize currentDataSyncState=_currentDataSyncState;
- (void)runDailyTask;	// IMP=0x00000000000da64c
- (void)handleHomeDataLoaded;	// IMP=0x00000000000da55b
@property(readonly) long long deviceDaysSinceSoftwareUpdate;
- (unsigned long long)bitMaskForKeyType:(unsigned long long)arg1;	// IMP=0x00000000000da454
- (unsigned long long)duplicateKeysBitMapFromKeyCounts:(id)arg1;	// IMP=0x00000000000da25a
- (unsigned long long)missingKeysBitMapFromKeyCounts:(id)arg1;	// IMP=0x00000000000da061
- (void)updateCachedPairingKeyStates;	// IMP=0x00000000000d9e6f
- (void)updateWithHomeManagerStatus:(unsigned long long)arg1;	// IMP=0x00000000000d9e28
- (void)updateWithDataSyncState:(unsigned long long)arg1;	// IMP=0x00000000000d9d6c
- (void)registerForNotifications;	// IMP=0x00000000000d9c41
- (id)initWithCurrentSoftwareVersion:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3 dateProvider:(id)arg4 keyCountProvider:(id)arg5 userDefaults:(id)arg6;	// IMP=0x00000000000d9acd
- (id)initWithLogEventSubmitter:(id)arg1 dailyScheduler:(id)arg2 dateProvider:(id)arg3;	// IMP=0x00000000000d9974

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

