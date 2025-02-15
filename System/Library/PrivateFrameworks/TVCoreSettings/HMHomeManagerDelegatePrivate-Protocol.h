//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVCoreSettings/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSArray, NSSet, NSString, NSUUID;

@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHomeSafetySecurityEnabled:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHomePermanently:(NSUUID *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2MigrationInProgressState:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateDevices:(NSSet *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2MigrationAvailableState:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateHH2State:(_Bool)arg2;
- (void)homeManagerDidRemoveCurrentAccessory:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateAssistantIdentifiers:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateMultiUserStatus:(long long)arg2 reason:(NSString *)arg3;
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
@end

