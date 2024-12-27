//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPMetadata, NSDictionary, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDHAPMetadata : HMFObject
{
    _Bool _incomplete;	// 8 = 0x8
    NSNumber *_version;	// 16 = 0x10
    NSNumber *_schemaVersion;	// 24 = 0x18
    NSDictionary *_rawPlist;	// 32 = 0x20
    HAPMetadata *_hapMetadata;	// 40 = 0x28
    NSSet *_hmRequiresDeviceUnlockTuples;	// 48 = 0x30
    NSDictionary *_hmAllowableSecuringWrites;	// 56 = 0x38
    NSDictionary *_hmWakeOnOperationsFilter;	// 64 = 0x40
    NSDictionary *_hmAccessoryCategories;	// 72 = 0x48
    NSSet *_hmBlacklistedServices;	// 80 = 0x50
    NSSet *_hmBlacklistedCharacteristics;	// 88 = 0x58
    NSSet *_hmBlacklistedServicesFromApp;	// 96 = 0x60
    NSSet *_hmBlacklistedCharacteristicsFromApp;	// 104 = 0x68
    NSSet *_hmNotificationAutoEnabledTuples;	// 112 = 0x70
    NSSet *_hmBulletinBoardEnabledTuples;	// 120 = 0x78
    NSSet *_hmCoalesceNotificationsTuples;	// 128 = 0x80
    NSDictionary *_assistantServiceNameHAPTypeMap;	// 136 = 0x88
    NSDictionary *_assistantServiceHAPTypeNameMap;	// 144 = 0x90
    NSDictionary *_assistantCharacteristics;	// 152 = 0x98
    NSDictionary *_assistantChrHAPTypeNameMap;	// 160 = 0xa0
    NSDictionary *_assistantUnits;	// 168 = 0xa8
}

+ (_Bool)isHomedVersionSupported:(id)arg1;	// IMP=0x006000000025b28c
+ (void)resetShouldUploadToCloudAfterHomedReady;	// IMP=0x006000000025b27f
+ (_Bool)shouldUploadToCloudAfterHomedReady;	// IMP=0x006000000025b273
+ (void)prepareMetadata;	// IMP=0x006000000025ab12
+ (_Bool)isAdminPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x006000000025aaa8
+ (_Bool)isOwnerPrivilegeRequiredForWritingCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x006000000025a9f3
+ (id)dataFromMetadataDictionaryWithKey:(id)arg1;	// IMP=0x006000000025a926
+ (id)legacyV3DataForCloud;	// IMP=0x006000000025a903
+ (id)legacyV3DataForIDS;	// IMP=0x006000000025a8e0
+ (_Bool)isServiceType:(id)arg1 compatibleWithAccessoryCategoryType:(id)arg2;	// IMP=0x006000000025a830
+ (void)updateLocalMetadataWithMetadata:(id)arg1;	// IMP=0x006000000025a76b
+ (void)updateLocalMetadataWithBuiltinMetadata;	// IMP=0x006000000025a651
+ (void)_logCurrentMetadata;	// IMP=0x006000000025a4f0
+ (id)getSharedInstance;	// IMP=0x006000000025a0ed
+ (id)getBuiltinInstance;	// IMP=0x0060000000259b23
+ (id)metadataCache;	// IMP=0x0060000000259af3
+ (id)metadataWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x006000000025995f
+ (id)metadataWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000259779
- (void).cxx_destruct;	// IMP=0x0000000000257a50
@property(retain, nonatomic) NSDictionary *assistantUnits; // @synthesize assistantUnits=_assistantUnits;
@property(retain, nonatomic) NSDictionary *assistantChrHAPTypeNameMap; // @synthesize assistantChrHAPTypeNameMap=_assistantChrHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantCharacteristics; // @synthesize assistantCharacteristics=_assistantCharacteristics;
@property(retain, nonatomic) NSDictionary *assistantServiceHAPTypeNameMap; // @synthesize assistantServiceHAPTypeNameMap=_assistantServiceHAPTypeNameMap;
@property(retain, nonatomic) NSDictionary *assistantServiceNameHAPTypeMap; // @synthesize assistantServiceNameHAPTypeMap=_assistantServiceNameHAPTypeMap;
@property(retain, nonatomic) NSSet *hmCoalesceNotificationsTuples; // @synthesize hmCoalesceNotificationsTuples=_hmCoalesceNotificationsTuples;
@property(retain, nonatomic) NSSet *hmBulletinBoardEnabledTuples; // @synthesize hmBulletinBoardEnabledTuples=_hmBulletinBoardEnabledTuples;
@property(retain, nonatomic) NSSet *hmNotificationAutoEnabledTuples; // @synthesize hmNotificationAutoEnabledTuples=_hmNotificationAutoEnabledTuples;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristicsFromApp; // @synthesize hmBlacklistedCharacteristicsFromApp=_hmBlacklistedCharacteristicsFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedServicesFromApp; // @synthesize hmBlacklistedServicesFromApp=_hmBlacklistedServicesFromApp;
@property(retain, nonatomic) NSSet *hmBlacklistedCharacteristics; // @synthesize hmBlacklistedCharacteristics=_hmBlacklistedCharacteristics;
@property(retain, nonatomic) NSSet *hmBlacklistedServices; // @synthesize hmBlacklistedServices=_hmBlacklistedServices;
@property(retain, nonatomic) NSDictionary *hmAccessoryCategories; // @synthesize hmAccessoryCategories=_hmAccessoryCategories;
@property(retain, nonatomic) NSDictionary *hmWakeOnOperationsFilter; // @synthesize hmWakeOnOperationsFilter=_hmWakeOnOperationsFilter;
@property(retain, nonatomic) NSDictionary *hmAllowableSecuringWrites; // @synthesize hmAllowableSecuringWrites=_hmAllowableSecuringWrites;
@property(retain, nonatomic) NSSet *hmRequiresDeviceUnlockTuples; // @synthesize hmRequiresDeviceUnlockTuples=_hmRequiresDeviceUnlockTuples;
@property(retain, nonatomic) HAPMetadata *hapMetadata; // @synthesize hapMetadata=_hapMetadata;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(nonatomic) _Bool incomplete; // @synthesize incomplete=_incomplete;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (id)statusHAPCharacteristicTypesForServiceType;	// IMP=0x0000000000257730
- (id)disallowedAssistantCharacteristicTypesByServiceType;	// IMP=0x0000000000257700
- (id)aliasedHAPServiceTypes;	// IMP=0x00000000002576d0
- (id)aliasedHAPCharacteristicTypes;	// IMP=0x00000000002576a0
- (_Bool)checkTupleExistsInSet:(id)arg1 forChrType:(id)arg2 svcType:(id)arg3;	// IMP=0x00000000002575f7
- (_Bool)parseAndSetAssistantUnits:(id)arg1;	// IMP=0x0000000000257299
- (_Bool)parseAndSetAssistantCharacteristics:(id)arg1;	// IMP=0x00000000002568ea
- (_Bool)parseAndSetAssistantServices:(id)arg1;	// IMP=0x00000000002564f6
- (id)parseCharacteristicArray:(id)arg1;	// IMP=0x00000000002561f0
- (id)parseServiceArray:(id)arg1;	// IMP=0x0000000000255eea
- (void)parseAndSetHMCategories:(id)arg1;	// IMP=0x0000000000255ae6
- (void)parseAndSetWakeOnOperationsFilter:(id)arg1;	// IMP=0x00000000002556f5
- (void)parseAndSetAllowableSecuringWrites:(id)arg1;	// IMP=0x00000000002552c2
- (id)parseMetadataTupleSetFromPlist:(id)arg1;	// IMP=0x000000000025516e
- (_Bool)parseAndSetAssistantMetadataWithAssistantPlist:(id)arg1;	// IMP=0x0000000000254ee4
- (_Bool)parseAndSetHMMetadataWithHMPlist:(id)arg1;	// IMP=0x0000000000254855
- (id)parseAndSetRawPlist:(id)arg1;	// IMP=0x000000000025452d
- (_Bool)disallowsAssistantServiceType:(id)arg1 characteristicType:(id)arg2;	// IMP=0x000000000025447e
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2 getActionType:(_Bool)arg3;	// IMP=0x0000000000254137
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;	// IMP=0x0000000000253fd4
- (id)mapFromAssistantUnitName:(id)arg1;	// IMP=0x0000000000253f5a
- (id)mapToAssistantUnitName:(id)arg1;	// IMP=0x0000000000253ee0
- (id)mapCharacteristicValueType:(id)arg1;	// IMP=0x0000000000253e36
- (id)characteristicValueUnit:(id)arg1;	// IMP=0x0000000000253dbc
- (id)getStatusCharacteristicTypes:(id)arg1 forServiceType:(id)arg2;	// IMP=0x0000000000253cff
- (id)getCharacteristicTypeAlias:(id)arg1;	// IMP=0x0000000000253c85
- (id)getAliasedCharacteristicTypes:(id)arg1;	// IMP=0x0000000000253a50
- (id)getServiceTypeAlias:(id)arg1;	// IMP=0x00000000002539d6
- (id)getAliasedServiceType:(id)arg1;	// IMP=0x00000000002537ec
- (id)mapWriteCharacteristicFromAssistantName:(id)arg1;	// IMP=0x0000000000253703
- (id)mapReadCharacteristicFromAssistantName:(id)arg1;	// IMP=0x000000000025361a
- (id)mapToAssistantCharacteristicName:(id)arg1;	// IMP=0x00000000002534da
- (id)mapToAssistantServiceSubtypeName:(id)arg1 accessoryCategory:(id)arg2;	// IMP=0x0000000000253402
- (id)mapToAssistantServiceSubtypeName:(id)arg1;	// IMP=0x0000000000253396
- (id)mapFromAssistantServiceName:(id)arg1;	// IMP=0x000000000025331c
- (id)mapToAssistantServiceName:(id)arg1;	// IMP=0x000000000025323c
- (_Bool)supportsLocalization:(id)arg1;	// IMP=0x00000000002531a9
- (id)serviceSubtypeForValue:(id)arg1 forServiceType:(id)arg2;	// IMP=0x000000000025309a
- (id)categoryTypeFromName:(id)arg1;	// IMP=0x0000000000252eb8
- (id)categoryForType:(id)arg1;	// IMP=0x0000000000252d8f
- (id)categoryForIdentifier:(id)arg1;	// IMP=0x0000000000252c9b
- (id)audioAccessoryCategory;	// IMP=0x0000000000252c53
- (id)categoryForOther;	// IMP=0x0000000000252bfc
- (_Bool)shouldRefreshValueForCharacteristicWithType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000252b4c
- (_Bool)shouldFilterEnableNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x0000000000252a25
- (_Bool)shouldFilterChangeNotificationsForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002528fe
- (_Bool)shouldHomeAppShowTileForServiceType:(id)arg1;	// IMP=0x000000000025289e
- (_Bool)shouldEnableHomeNotificationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002526ee
- (_Bool)shouldAutoEnableNotificationForCharacteristic:(id)arg1 ofService:(id)arg2;	// IMP=0x00000000002525f7
- (_Bool)isSecondsDownCounterCharacteristicType:(id)arg1;	// IMP=0x0000000000252597
- (_Bool)generateNotificationOnConfigurationForCharacteristicType:(id)arg1 serviceType:(id)arg2;	// IMP=0x00000000002524e7
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;	// IMP=0x0000000000252487
- (_Bool)shouldFilterCharacteristicOfTypeFromApp:(id)arg1;	// IMP=0x0000000000252419
- (_Bool)shouldFilterServiceOfTypeFromApp:(id)arg1;	// IMP=0x00000000002523ab
- (_Bool)shouldFilterCharacteristicOfType:(id)arg1;	// IMP=0x00000000002522f7
- (_Bool)shouldFilterServiceOfType:(id)arg1;	// IMP=0x0000000000252243
- (_Bool)shouldCoalesceCharacteristicNotifications:(id)arg1 forService:(id)arg2;	// IMP=0x00000000002521b0
- (_Bool)isTargetCharacteristic:(id)arg1;	// IMP=0x0000000000252150
- (_Bool)requiresTimedWrite:(id)arg1 forService:(id)arg2;	// IMP=0x00000000002520a8
- (_Bool)requiresDeviceUnlock:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000252015
- (_Bool)shouldAllowToWakeSuspendedAccessoryForOperation:(long long)arg1 service:(id)arg2 characteristicType:(id)arg3 value:(id)arg4;	// IMP=0x000000000025188d
- (_Bool)allowsSecuringWriteFor:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000002517d2
- (id)descriptionForCharacteristicType:(id)arg1;	// IMP=0x0000000000251758
- (id)descriptionForServiceType:(id)arg1;	// IMP=0x00000000002516de
- (id)validateAssociatedServiceType:(id)arg1 forService:(id)arg2;	// IMP=0x000000000025109d
- (_Bool)supportsAuthorizationData:(id)arg1 forService:(id)arg2;	// IMP=0x000000000025100d
- (_Bool)isStandardServiceType:(id)arg1;	// IMP=0x0000000000250f9f
- (_Bool)isStandardCharacteristicType:(id)arg1;	// IMP=0x0000000000250f31
- (id)serviceTypeFromName:(id)arg1;	// IMP=0x0000000000250eb7
- (id)serviceNameFromType:(id)arg1;	// IMP=0x0000000000250e3d
- (id)characteristicTypeFromName:(id)arg1;	// IMP=0x0000000000250dc3
- (id)characteristicNameFromType:(id)arg1;	// IMP=0x0000000000250d49
- (id)xpcData:(_Bool)arg1;	// IMP=0x0000000000250bec
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2;	// IMP=0x0000000000250b65
- (id)initWithDictionary:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000250a6c
- (id)initWithFullPlist:(id)arg1 hapMetadata:(id)arg2 error:(id *)arg3;	// IMP=0x000000000025091c

@end

