//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMessage.h>

@class HAPPairingIdentity, HMDBackingStoreTransactionActions, HMDDevice, HMDRemoteMessageSenderContext, HMDXPCClientConnection, HMDXPCMessageSendPolicy, NSString;

@interface HMFMessage (HMDXPC)
+ (id)nonSPIEntitledMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x0020000000332760
+ (id)entitledMessageWithName:(id)arg1 identifier:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00200000003326e9
+ (id)entitledMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00200000003325be
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00200000005aaedb
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00200000005aae8c
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00200000005aae3d
+ (id)homeLocationAuthorizedAndEntitledMessageWithName:(id)arg1 target:(id)arg2 messagePayload:(id)arg3;	// IMP=0x00200000007b5845
+ (id)locationAuthorizedMessageWithName:(id)arg1 messagePayload:(id)arg2;	// IMP=0x00200000007b57db
- (unsigned long long)homeManagerOptions;	// IMP=0x001000000033256d
@property(readonly, nonatomic) HMDXPCMessageSendPolicy *sendPolicy;
@property(readonly, nonatomic) unsigned long long source;
@property(readonly, copy, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *clientIdentifier;
@property(readonly, nonatomic) int sourcePid;
@property(readonly, nonatomic, getter=isBackground) _Bool background;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationFeedbackAccess) _Bool entitledForHomeLocationFeedbackAccess;
@property(readonly, nonatomic, getter=isEntitledForAssistantIdentifiers) _Bool entitledForAssistantIdentifiers;
@property(readonly, nonatomic, getter=isEntitledForStateDump) _Bool entitledForStateDump;
@property(readonly, nonatomic, getter=isEntitledForSecureAccess) _Bool entitledForSecureAccess;
@property(readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) _Bool entitledForShortcutsAutomationAccess;
@property(readonly, nonatomic, getter=isEntitledToProvideMatterSetupPayload) _Bool entitledToProvideMatterSetupPayload;
@property(readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) _Bool entitledToProvideAccessorySetupPayload;
@property(readonly, nonatomic, getter=isEntitledForHomeLocationAccess) _Bool entitledForHomeLocationAccess;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
@property(readonly, nonatomic, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, nonatomic) unsigned long long entitlements;
@property(readonly) HMDXPCClientConnection *proxyConnection;
@property(readonly, nonatomic) _Bool requiresWalletKeyEntitlement;
@property(readonly, nonatomic) _Bool requiresPersonManagerEntitlement;
@property(readonly, nonatomic) _Bool requiresMultiUserSetupEntitlement;
@property(readonly, nonatomic) _Bool requiresCameraClipsEntitlement;
@property(readonly, nonatomic) _Bool requiresMatterSetupPayloadEntitlement;
@property(readonly, nonatomic) _Bool requiresSetupPayloadEntitlement;
@property(readonly, nonatomic) _Bool requiresNoSPIEntitlement;
@property(readonly, nonatomic) _Bool requiresSPIEntitlement;
@property(readonly) NSString *clientName;
@property(readonly) HMDBackingStoreTransactionActions *transactionResult;
@property(readonly, nonatomic, getter=isInternal) _Bool internal;
@property(readonly, nonatomic, getter=requiresHomeLocationEntitlement) _Bool homeLocationEntitlementRequired;
@property(readonly, nonatomic, getter=isLocationAuthorized) _Bool locationAuthorized;
- (id)userForHome:(id)arg1;	// IMP=0x00100000009df60c
- (id)matchingRemoteIdentityUserForHome:(id)arg1;	// IMP=0x00100000009df214
- (_Bool)isSingleReadWriteRequest;	// IMP=0x0010000000ba4d37
@property(readonly, nonatomic) _Bool remoteDisallowsIDSRacing;
@property(readonly, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
@property(readonly, nonatomic) unsigned long long remoteResponseRestriction;
@property(readonly, nonatomic) unsigned long long remoteRestriction;
@property(readonly, nonatomic) NSString *remoteToID;
@property(readonly, nonatomic) HAPPairingIdentity *remoteUserPairingIdentity;
@property(readonly, nonatomic) HMDDevice *remoteSourceDevice;
@property(readonly, nonatomic) NSString *remoteSourceID;
@property(readonly, nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
@end

