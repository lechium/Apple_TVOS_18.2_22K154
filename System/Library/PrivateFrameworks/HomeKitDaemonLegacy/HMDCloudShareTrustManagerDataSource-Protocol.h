//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCloudShareTrustManager, HMDHome, HMDUser, NSString;

@protocol HMDCloudShareTrustManagerDataSource <NSObject>
- (_Bool)isOwnerCapableForTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDHome *)homeForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (HMDUser *)ownerForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (NSString *)zoneNameForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (_Bool)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 shouldShareTrustWithUser:(HMDUser *)arg2;
@end

