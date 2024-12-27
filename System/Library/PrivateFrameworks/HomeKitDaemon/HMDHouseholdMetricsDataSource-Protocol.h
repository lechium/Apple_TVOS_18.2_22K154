//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDNetworkObserver, HMDThreadNetworkObserver, NSArray;

@protocol HMDHouseholdMetricsDataSource
@property(readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver;
@property(readonly, nonatomic) HMDNetworkObserver *networkObserver;
@property(readonly, nonatomic) NSArray *homeDataSources;
@property(readonly, nonatomic) NSArray *devicesOnCurrentAccount;
@property(readonly, nonatomic) HMDDevice *currentDevice;
@end

