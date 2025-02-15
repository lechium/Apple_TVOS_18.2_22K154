//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomePodSettingsDaemon/HMHomeManagerDelegatePrivate-Protocol.h>

@class HFHomeKitDispatcher, HMHome, HMHomeManager;

@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(_Bool)arg2;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
@end

