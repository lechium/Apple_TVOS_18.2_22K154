//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMAccessoryProfile.h"

@class HMAccessoryNetworkAccessViolation, NSArray, NSString;
@protocol _HMNetworkConfigurationProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkConfigurationProfile : _HMAccessoryProfile
{
    _Bool _networkAccessRestricted;	// 12 = 0xc
    _Bool _supportsWiFiReconfiguration;	// 13 = 0xd
    long long _targetProtectionMode;	// 16 = 0x10
    long long _currentProtectionMode;	// 24 = 0x18
    NSArray *_allowedHosts;	// 32 = 0x20
    HMAccessoryNetworkAccessViolation *_accessViolation;	// 40 = 0x28
    long long _credentialType;	// 48 = 0x30
    id <_HMNetworkConfigurationProfileDelegate> _delegate;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000012f49b
- (void).cxx_destruct;	// IMP=0x000000000012ef93
@property(nonatomic) __weak id <_HMNetworkConfigurationProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x000000000012ef16
- (void)_handleWiFiReconfigurationUpdated:(id)arg1;	// IMP=0x000000000012ed1e
- (void)_handleAccessViolationUpdated:(id)arg1;	// IMP=0x000000000012eb04
- (void)_handleHostsUpdated:(id)arg1;	// IMP=0x000000000012e823
- (void)_notifyDelegateOfUpdatedWiFiCredentialType;	// IMP=0x000000000012e71f
- (void)_notifyDelegateOfUpdatedWiFiReconfigurationSupport;	// IMP=0x000000000012e61b
- (void)_notifyDelegateOfUpdatedAccessViolation;	// IMP=0x000000000012e517
- (void)_notifyDelegateOfUpdatedAllowedHosts;	// IMP=0x000000000012e413
- (void)_notifyDelegateOfNetworkAccessModeChanged;	// IMP=0x000000000012e30f
- (void)_notifyDelegateOfUpdatedProtectionMode;	// IMP=0x000000000012e20b
- (void)previewAllowedHostsForAutoProtectionModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000012de2e
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000012d82c
- (_Bool)mergeFromNewObject:(id)arg1;	// IMP=0x000000000012d4e0
- (id)messageDestination;	// IMP=0x000000000012d477
- (id)messageTargetUUID;	// IMP=0x000000000012d427
- (void)setCredentialType:(long long)arg1;	// IMP=0x000000000012d3ec
@property(readonly) long long credentialType; // @synthesize credentialType=_credentialType;
- (void)setSupportsWiFiReconfiguration:(_Bool)arg1;	// IMP=0x000000000012d37f
@property(readonly) _Bool supportsWiFiReconfiguration; // @synthesize supportsWiFiReconfiguration=_supportsWiFiReconfiguration;
- (void)setTargetProtectionMode:(long long)arg1;	// IMP=0x000000000012d216
@property(readonly) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
- (void)setNetworkAccessRestricted:(_Bool)arg1;	// IMP=0x000000000012d1a9
@property(readonly, getter=isNetworkAccessRestricted) _Bool networkAccessRestricted; // @synthesize networkAccessRestricted=_networkAccessRestricted;
- (void)setCurrentProtectionMode:(long long)arg1;	// IMP=0x000000000012d040
@property(readonly) long long currentProtectionMode; // @synthesize currentProtectionMode=_currentProtectionMode;
- (void)setAccessViolation:(id)arg1;	// IMP=0x000000000012cfbf
@property(readonly) HMAccessoryNetworkAccessViolation *accessViolation; // @synthesize accessViolation=_accessViolation;
- (void)setAllowedHosts:(id)arg1;	// IMP=0x000000000012cf31
@property(readonly) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
- (void)_registerNotificationHandlers;	// IMP=0x000000000012ce1a
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(_Bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(_Bool)arg7 credentialType:(long long)arg8;	// IMP=0x000000000012ccf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

