//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class ACAccount, HMDRemoteLoginInitiatorAuthentication, NSError;

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate <NSObject>
- (void)didCompleteAuthentication:(HMDRemoteLoginInitiatorAuthentication *)arg1 error:(NSError *)arg2 loggedInAccount:(ACAccount *)arg3;
@end

