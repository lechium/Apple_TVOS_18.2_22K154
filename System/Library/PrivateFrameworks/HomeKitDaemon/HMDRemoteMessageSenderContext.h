//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccountHandle, HMDAccountIdentifier, HMDDeviceHandle, HMDHomeKitVersion, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteMessageSenderContext : HMFObject
{
    HMDDeviceHandle *_deviceHandle;	// 8 = 0x8
    HMDDeviceHandle *_localDeviceHandle;	// 16 = 0x10
    HMDAccountIdentifier *_accountIdentifier;	// 24 = 0x18
    HMDAccountHandle *_accountHandle;	// 32 = 0x20
    HMDHomeKitVersion *_deviceVersion;	// 40 = 0x28
    NSString *_pairingIdentityIdentifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000d3d7ab
@property(readonly, copy) NSString *pairingIdentityIdentifier; // @synthesize pairingIdentityIdentifier=_pairingIdentityIdentifier;
@property(readonly, copy) HMDHomeKitVersion *deviceVersion; // @synthesize deviceVersion=_deviceVersion;
@property(readonly, copy) HMDAccountHandle *accountHandle; // @synthesize accountHandle=_accountHandle;
@property(readonly, copy) HMDAccountIdentifier *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy) HMDDeviceHandle *localDeviceHandle; // @synthesize localDeviceHandle=_localDeviceHandle;
@property(readonly, copy) HMDDeviceHandle *deviceHandle; // @synthesize deviceHandle=_deviceHandle;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d3d70b
@property(readonly, copy) NSString *propertyDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *mergeID;
- (id)initWithDeviceHandle:(id)arg1 accountHandle:(id)arg2 accountIdentifier:(id)arg3 deviceVersion:(id)arg4 pairingIdentityIdentifier:(id)arg5;	// IMP=0x0000000000d3d426

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

