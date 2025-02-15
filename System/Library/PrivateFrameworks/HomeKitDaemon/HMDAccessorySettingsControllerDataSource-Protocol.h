//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessorySettingsController, HMDAccessorySetupMetricDispatcher, HMDBackingStore, HMDCurrentAccessorySetupMetricDispatcher, HMDHome, HMFActivity, NSArray, NSData, NSUUID;

@protocol HMDAccessorySettingsControllerDataSource
@property(readonly) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property(readonly) HMDAccessorySetupMetricDispatcher *accessorySetupMetricDispatcher;
@property double setupStartTimestamp;
@property(retain) HMFActivity *setupActivity;
@property(readonly) _Bool supportsUserMediaSettings;
@property __weak HMDHome *home;
@property(readonly) HMDBackingStore *backingStore;
- (void)removeManagedConfigurationProfileWithProfileData:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (NSArray *)modelsToMigrateSettingsForController:(HMDAccessorySettingsController *)arg1;
- (NSArray *)modelsToMakeSettingsForController:(HMDAccessorySettingsController *)arg1 parentUUID:(NSUUID *)arg2;
@end

