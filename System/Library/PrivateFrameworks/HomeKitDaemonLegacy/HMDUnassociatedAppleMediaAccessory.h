//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCapabilityFlags, HMDDevice, HMDHomeKitVersion, HMFSoftwareVersion, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDUnassociatedAppleMediaAccessory
{
    _Bool _currentAccessory;	// 24 = 0x18
    NSString *_model;	// 32 = 0x20
    NSString *_serialNumber;	// 40 = 0x28
    HMFSoftwareVersion *_softwareVersion;	// 48 = 0x30
    HMDDevice *_device;	// 56 = 0x38
    long long _productColor;	// 64 = 0x40
    unsigned long long _supportedStereoPairVersions;	// 72 = 0x48
    HMDHomeKitVersion *_minimumRequiredPairingSoftwareVersion;	// 80 = 0x50
    NSString *_idsIdentifierString;	// 88 = 0x58
    NSData *_rawAccessoryCapabilities;	// 96 = 0x60
    NSData *_rawResidentCapabilities;	// 104 = 0x68
    HMDCapabilityFlags *_requiredPairingCapabilities;	// 112 = 0x70
    unsigned long long _variant;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000032d3db
+ (id)logCategory;	// IMP=0x001000000032d3ab
+ (id)namespace;	// IMP=0x001000000032d37b
- (void).cxx_destruct;	// IMP=0x000000000032d2d3
@property unsigned long long variant; // @synthesize variant=_variant;
@property(readonly) HMDCapabilityFlags *requiredPairingCapabilities; // @synthesize requiredPairingCapabilities=_requiredPairingCapabilities;
@property(readonly) NSData *rawResidentCapabilities; // @synthesize rawResidentCapabilities=_rawResidentCapabilities;
@property(readonly) NSData *rawAccessoryCapabilities; // @synthesize rawAccessoryCapabilities=_rawAccessoryCapabilities;
@property(readonly) NSString *idsIdentifierString; // @synthesize idsIdentifierString=_idsIdentifierString;
@property(readonly) HMDHomeKitVersion *minimumRequiredPairingSoftwareVersion; // @synthesize minimumRequiredPairingSoftwareVersion=_minimumRequiredPairingSoftwareVersion;
@property unsigned long long supportedStereoPairVersions; // @synthesize supportedStereoPairVersions=_supportedStereoPairVersions;
@property(nonatomic, getter=isCurrentAccessory) _Bool currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(readonly) long long productColor; // @synthesize productColor=_productColor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000032ce9d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000032cb83
- (id)logIdentifier;	// IMP=0x000000000032cb71
- (id)dumpDescription;	// IMP=0x000000000032c957
- (_Bool)canPairGivenCapabilities:(unsigned long long)arg1;	// IMP=0x000000000032c7ce
- (id)addTransactionForHome:(id)arg1;	// IMP=0x000000000032c3d4
@property(retain) HMDDevice *device; // @synthesize device=_device;
@property(copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy) NSString *model; // @synthesize model=_model;
- (id)descriptionWithPointer:(_Bool)arg1 additionalDescription:(id)arg2;	// IMP=0x000000000032bedb
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 requiredPairingCapabilities:(unsigned long long)arg4 minimumPairingSoftware:(id)arg5 productColor:(long long)arg6 idsIdentifierString:(id)arg7 rawAccessoryCapabilities:(id)arg8 rawResidentCapabilities:(id)arg9 messageDispatcher:(id)arg10;	// IMP=0x000000000032bcf0
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 productColor:(long long)arg4 idsIdentifierString:(id)arg5 rawAccessoryCapabilities:(id)arg6 rawResidentCapabilities:(id)arg7 messageDispatcher:(id)arg8;	// IMP=0x000000000032bcb0
- (id)modelForChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x000000000032bc97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

