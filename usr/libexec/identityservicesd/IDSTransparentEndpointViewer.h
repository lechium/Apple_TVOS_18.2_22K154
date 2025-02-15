//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSTransparentEndpointViewer : NSObject
{
}

- (void)internal_triggerKTCDPAccountStatusNotificationWithAccountStatus:(long long)arg1;	// IMP=0x0040000000485e8d
- (void)internal_nukeTransparencyState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000485dc3
- (void)internal_updateCurrentDeviceInKVS:(CDUnknownBlockType)arg1;	// IMP=0x0010000000485a32
- (void)internal_fetchCurrentDeviceKVSKey:(CDUnknownBlockType)arg1;	// IMP=0x0010000000485764
- (void)internal_removeAllKVSTrustedDevices:(CDUnknownBlockType)arg1;	// IMP=0x00100000004855c7
- (void)internal_fetchVerifierKVSTrustedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000048541c
- (void)internal_kickVerificationForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000484df0
- (void)internal_fetchTransparentEndpointsForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 verifyAgainstTrustCircle:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000484ac2
- (void)internal_fetchEndpointCacheStateForServiceIdentifier:(id)arg1 localURI:(id)arg2 remoteURI:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000484949
- (id)_keyTransparencyEntriesForEndpoints:(id)arg1;	// IMP=0x00100000004847dc
- (id)_peerIDManager;	// IMP=0x00100000004847c3
- (id)_registrationKeyManager;	// IMP=0x00100000004847aa
- (id)_cloudKitContainer;	// IMP=0x001000000048475a
- (id)_verifier;	// IMP=0x0010000000484741

@end

