//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GTDeviceProperties : NSObject
{
    _Bool _AppleInternal;	// 8 = 0x8
    _Bool _DeviceSupportsLockdown;	// 9 = 0x9
    _Bool _EffectiveProductionStatusAp;	// 10 = 0xa
    _Bool _IsUIBuild;	// 11 = 0xb
    _Bool _OSInstallEnvironment;	// 12 = 0xc
    _Bool _StoreDemoMode;	// 13 = 0xd
    unsigned long long _LocationID;	// 16 = 0x10
    NSString *_BuildVersion;	// 24 = 0x18
    NSString *_HWModelStr;	// 32 = 0x20
    NSString *_OSVersion;	// 40 = 0x28
    NSString *_ProductType;	// 48 = 0x30
    NSString *_UniqueDeviceID;	// 56 = 0x38
    NSString *_Reality;	// 64 = 0x40
    unsigned long long _RemoteXPCVersionFlags;	// 72 = 0x48
    NSString *_CPUArchitecture;	// 80 = 0x50
    NSString *_DeviceClass;	// 88 = 0x58
    NSString *_MobileDeviceMinimumVersion;	// 96 = 0x60
    NSString *_ProductName;	// 104 = 0x68
    NSString *_ReleaseType;	// 112 = 0x70
}

+ (id)uniqueDeviceID;	// IMP=0x001000000002e13c
+ (id)hardwareUUID;	// IMP=0x001000000002e0c9
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000002e0c1
- (void).cxx_destruct;	// IMP=0x000000000002f147
@property(nonatomic) _Bool storeDemoMode; // @synthesize storeDemoMode=_StoreDemoMode;
@property(nonatomic) _Bool osInstallEnvironment; // @synthesize osInstallEnvironment=_OSInstallEnvironment;
@property(nonatomic) _Bool isUIBuild; // @synthesize isUIBuild=_IsUIBuild;
@property(nonatomic) _Bool effectiveProductionStatusAp; // @synthesize effectiveProductionStatusAp=_EffectiveProductionStatusAp;
@property(nonatomic) _Bool deviceSupportsLockdown; // @synthesize deviceSupportsLockdown=_DeviceSupportsLockdown;
@property(nonatomic) _Bool appleInternal; // @synthesize appleInternal=_AppleInternal;
@property(copy, nonatomic) NSString *releaseType; // @synthesize releaseType=_ReleaseType;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_ProductName;
@property(copy, nonatomic) NSString *mobileDeviceMinimumVersion; // @synthesize mobileDeviceMinimumVersion=_MobileDeviceMinimumVersion;
@property(copy, nonatomic) NSString *deviceClass; // @synthesize deviceClass=_DeviceClass;
@property(copy, nonatomic) NSString *cpuArchitecture; // @synthesize cpuArchitecture=_CPUArchitecture;
@property(nonatomic) unsigned long long remoteXPCVersionFlags; // @synthesize remoteXPCVersionFlags=_RemoteXPCVersionFlags;
@property(copy, nonatomic) NSString *reality; // @synthesize reality=_Reality;
@property(copy, nonatomic) NSString *uniqueDeviceID; // @synthesize uniqueDeviceID=_UniqueDeviceID;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_ProductType;
@property(copy, nonatomic) NSString *osVersion; // @synthesize osVersion=_OSVersion;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_HWModelStr;
@property(copy, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_BuildVersion;
@property(nonatomic) unsigned long long locationID; // @synthesize locationID=_LocationID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002edcb
- (id)initForEmbeddedSystem;	// IMP=0x000000000002e91e
- (id)description;	// IMP=0x000000000002e8f1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002e5a2
- (id)initWithXPCObject:(id)arg1;	// IMP=0x000000000002e182

@end

