//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreCDPInternal/CDPDDeviceSecretValidatorDelegate-Protocol.h>

@class CDPContext, CDPCustodianRecoveryInfo, CDPDRemoteDeviceSecretValidator;

@protocol CDPDRemoteDeviceSecretValidatorDelegate <CDPDDeviceSecretValidatorDelegate>
- (void)remoteSecretValidator:(CDPDRemoteDeviceSecretValidator *)arg1 attemptCustodianRecoveryWithInfo:(CDPCustodianRecoveryInfo *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(CDPDRemoteDeviceSecretValidator *)arg1;
- (void)remoteSecretValidator:(CDPDRemoteDeviceSecretValidator *)arg1 applyToJoinCircleWithJoinHandler:(void (^)(_Bool, NSError *))arg2;

@optional
- (void)remoteSecretValidator:(CDPDRemoteDeviceSecretValidator *)arg1 attemptCircleJoinWithPiggybackingContext:(CDPContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

