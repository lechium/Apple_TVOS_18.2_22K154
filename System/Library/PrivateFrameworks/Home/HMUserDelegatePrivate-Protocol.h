//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMAssistantAccessControl, HMFPairingIdentity, HMHome, HMMediaContentProfileAccessControl, HMPhotosPersonManagerSettings, HMUser, HMUserListeningHistoryUpdateControl;

@protocol HMUserDelegatePrivate <NSObject>

@optional
- (void)sharedUserProfileMetadataUpdatedForUser:(HMUser *)arg1;
- (void)restrictedGuestAllowedPeriodEnded:(HMUser *)arg1;
- (void)restrictedGuestAllowedPeriodStarted:(HMUser *)arg1;
- (void)user:(HMUser *)arg1 didUpdateSupportsSharedHomeHH2AutoMigration:(_Bool)arg2;
- (void)user:(HMUser *)arg1 didUpdateNeedsiTunesMultiUserRepair:(_Bool)arg2;
- (void)user:(HMUser *)arg1 didUpdatePairingIdentity:(HMFPairingIdentity *)arg2;
- (void)user:(HMUser *)arg1 didUpdatePersonManagerSettings:(HMPhotosPersonManagerSettings *)arg2;
- (void)user:(HMUser *)arg1 didUpdatePhotosPersonManagerSettings:(HMPhotosPersonManagerSettings *)arg2;
- (void)user:(HMUser *)arg1 didUpdateUserListeningHistoryUpdateControl:(HMUserListeningHistoryUpdateControl *)arg2 forHome:(HMHome *)arg3;
- (void)user:(HMUser *)arg1 didUpdateMediaContentProfileAccessControl:(HMMediaContentProfileAccessControl *)arg2 forHome:(HMHome *)arg3;
- (void)user:(HMUser *)arg1 didUpdateAssistantAccessControl:(HMAssistantAccessControl *)arg2 forHome:(HMHome *)arg3;
@end

