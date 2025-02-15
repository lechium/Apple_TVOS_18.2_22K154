//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDAccount, HMDAccountHandle, HMDBackingStore, HMDBackingStoreModelObject, HMDBackingStoreTransactionActions, HMDDevice;

@protocol HMDAccountManager <NSObject>
@property(readonly, nonatomic) HMDBackingStore *backingStore;
- (_Bool)isCurrentDeviceDataOwnerForDevice:(HMDDevice *)arg1;
- (_Bool)shouldDevice:(HMDDevice *)arg1 processModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (_Bool)shouldAccount:(HMDAccount *)arg1 pushbackModel:(HMDBackingStoreModelObject *)arg2 actions:(HMDBackingStoreTransactionActions *)arg3;
- (_Bool)shouldSyncDevice:(HMDDevice *)arg1;
- (_Bool)shouldSyncAccount:(HMDAccount *)arg1;
- (_Bool)shouldCacheAccount:(HMDAccount *)arg1;

@optional
- (HMDAccountHandle *)primaryHandleForAccount:(HMDAccount *)arg1;
@end

