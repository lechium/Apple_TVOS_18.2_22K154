//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class HMDCloudShareParticipantsManager, HMDUser;

@protocol HMDCloudShareParticipantsManagerDataSource <NSObject>
- (_Bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldShareWithUser:(HMDUser *)arg2;

@optional
- (_Bool)areShareModificationsEnabledForManager:(HMDCloudShareParticipantsManager *)arg1;
- (_Bool)canUseUntrustedAccountHandlesForParticipantManager:(HMDCloudShareParticipantsManager *)arg1;
- (_Bool)manager:(HMDCloudShareParticipantsManager *)arg1 shouldGrantWriteAccessToUser:(HMDUser *)arg2;
@end

