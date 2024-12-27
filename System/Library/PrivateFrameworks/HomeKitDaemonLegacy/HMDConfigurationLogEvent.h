//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HMDConfigurationLogEvent : HMMLogEvent
{
    _Bool _isResidentCapable;	// 8 = 0x8
    _Bool _isResidentEnabled;	// 9 = 0x9
    _Bool _isPrimaryResidentForSomeHome;	// 10 = 0xa
    _Bool _isResidentFirstEnabledAnyHome;	// 11 = 0xb
    _Bool _isResidentElectionV2EnabledAnyHome;	// 12 = 0xc
    _Bool _isFMFDevice;	// 13 = 0xd
    unsigned int _databaseSize;	// 16 = 0x10
    unsigned int _metadataVersion;	// 20 = 0x14
    unsigned long long _instanceId;	// 24 = 0x18
    NSArray *_homeConfigurations;	// 32 = 0x20
    unsigned long long _totalHomes;	// 40 = 0x28
    unsigned long long _totalNonEmptyHomes;	// 48 = 0x30
    unsigned long long _totalOwnedHomes;	// 56 = 0x38
    unsigned long long _totalResidentEnabledHomes;	// 64 = 0x40
    unsigned long long _totalHomeCategoryBitMask;	// 72 = 0x48
    unsigned long long _totalAppleMediaCategoryBitMask;	// 80 = 0x50
    unsigned long long _totalThirdPartyMediaCategoryBitMask;	// 88 = 0x58
    long long _totalUsers;	// 96 = 0x60
    long long _totalAdminUsers;	// 104 = 0x68
    long long _totalRestrictedGuests;	// 112 = 0x70
    unsigned long long _totalUserPrivilegeBitMask;	// 120 = 0x78
    unsigned long long _currentUserPrivilegeBitMask;	// 128 = 0x80
    unsigned long long _totalAccessories;	// 136 = 0x88
    unsigned long long _totalCertifiedAccessories;	// 144 = 0x90
    unsigned long long _totalSmartHomeAccessories;	// 152 = 0x98
    unsigned long long _totalHAPAccessories;	// 160 = 0xa0
    unsigned long long _totalHAPIPAccessories;	// 168 = 0xa8
    unsigned long long _totalHAPBTAccessories;	// 176 = 0xb0
    unsigned long long _totalCHIPAccessories;	// 184 = 0xb8
    unsigned long long _totalThreadAccessories;	// 192 = 0xc0
    unsigned long long _totalBridgedAccessories;	// 200 = 0xc8
    unsigned long long _totalTelevisionServiceAccessories;	// 208 = 0xd0
    unsigned long long _totalCameraAccessories;	// 216 = 0xd8
    unsigned long long _totalCameraAccessoriesRecordingEnabled;	// 224 = 0xe0
    unsigned long long _totalAppleMediaAccessories;	// 232 = 0xe8
    unsigned long long _totalAppleAudioAccessories;	// 240 = 0xf0
    unsigned long long _totalAppleTVAccessories;	// 248 = 0xf8
    unsigned long long _totalThirdPartyMediaAccessories;	// 256 = 0x100
    unsigned long long _totalWholeHouseAudioAccessories;	// 264 = 0x108
    unsigned long long _totalHAPSpeakerAccessories;	// 272 = 0x110
    unsigned long long _totalEnabledResidents;	// 280 = 0x118
    unsigned long long _totalScenes;	// 288 = 0x120
    unsigned long long _totalTriggers;	// 296 = 0x128
    unsigned long long _totalActiveTriggers;	// 304 = 0x130
    long long _totalWidgets;	// 312 = 0x138
    unsigned long long _totalResidentElectionBitMask;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00000000002b39f2
@property(readonly, nonatomic) _Bool isFMFDevice; // @synthesize isFMFDevice=_isFMFDevice;
@property(readonly, nonatomic) unsigned long long totalResidentElectionBitMask; // @synthesize totalResidentElectionBitMask=_totalResidentElectionBitMask;
@property(readonly, nonatomic) _Bool isResidentElectionV2EnabledAnyHome; // @synthesize isResidentElectionV2EnabledAnyHome=_isResidentElectionV2EnabledAnyHome;
@property(readonly, nonatomic) _Bool isResidentFirstEnabledAnyHome; // @synthesize isResidentFirstEnabledAnyHome=_isResidentFirstEnabledAnyHome;
@property(readonly, nonatomic) _Bool isPrimaryResidentForSomeHome; // @synthesize isPrimaryResidentForSomeHome=_isPrimaryResidentForSomeHome;
@property(readonly, nonatomic) _Bool isResidentEnabled; // @synthesize isResidentEnabled=_isResidentEnabled;
@property(readonly, nonatomic) _Bool isResidentCapable; // @synthesize isResidentCapable=_isResidentCapable;
@property(readonly, nonatomic) unsigned int metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(readonly, nonatomic) unsigned int databaseSize; // @synthesize databaseSize=_databaseSize;
@property(readonly) long long totalWidgets; // @synthesize totalWidgets=_totalWidgets;
@property(readonly, nonatomic) unsigned long long totalActiveTriggers; // @synthesize totalActiveTriggers=_totalActiveTriggers;
@property(readonly, nonatomic) unsigned long long totalTriggers; // @synthesize totalTriggers=_totalTriggers;
@property(readonly, nonatomic) unsigned long long totalScenes; // @synthesize totalScenes=_totalScenes;
@property(readonly, nonatomic) unsigned long long totalEnabledResidents; // @synthesize totalEnabledResidents=_totalEnabledResidents;
@property(readonly, nonatomic) unsigned long long totalHAPSpeakerAccessories; // @synthesize totalHAPSpeakerAccessories=_totalHAPSpeakerAccessories;
@property(readonly, nonatomic) unsigned long long totalWholeHouseAudioAccessories; // @synthesize totalWholeHouseAudioAccessories=_totalWholeHouseAudioAccessories;
@property(readonly, nonatomic) unsigned long long totalThirdPartyMediaAccessories; // @synthesize totalThirdPartyMediaAccessories=_totalThirdPartyMediaAccessories;
@property(readonly, nonatomic) unsigned long long totalAppleTVAccessories; // @synthesize totalAppleTVAccessories=_totalAppleTVAccessories;
@property(readonly, nonatomic) unsigned long long totalAppleAudioAccessories; // @synthesize totalAppleAudioAccessories=_totalAppleAudioAccessories;
@property(readonly, nonatomic) unsigned long long totalAppleMediaAccessories; // @synthesize totalAppleMediaAccessories=_totalAppleMediaAccessories;
@property(readonly, nonatomic) unsigned long long totalCameraAccessoriesRecordingEnabled; // @synthesize totalCameraAccessoriesRecordingEnabled=_totalCameraAccessoriesRecordingEnabled;
@property(readonly, nonatomic) unsigned long long totalCameraAccessories; // @synthesize totalCameraAccessories=_totalCameraAccessories;
@property(readonly, nonatomic) unsigned long long totalTelevisionServiceAccessories; // @synthesize totalTelevisionServiceAccessories=_totalTelevisionServiceAccessories;
@property(readonly, nonatomic) unsigned long long totalBridgedAccessories; // @synthesize totalBridgedAccessories=_totalBridgedAccessories;
@property(readonly, nonatomic) unsigned long long totalThreadAccessories; // @synthesize totalThreadAccessories=_totalThreadAccessories;
@property(readonly, nonatomic) unsigned long long totalCHIPAccessories; // @synthesize totalCHIPAccessories=_totalCHIPAccessories;
@property(readonly, nonatomic) unsigned long long totalHAPBTAccessories; // @synthesize totalHAPBTAccessories=_totalHAPBTAccessories;
@property(readonly, nonatomic) unsigned long long totalHAPIPAccessories; // @synthesize totalHAPIPAccessories=_totalHAPIPAccessories;
@property(readonly, nonatomic) unsigned long long totalHAPAccessories; // @synthesize totalHAPAccessories=_totalHAPAccessories;
@property(readonly, nonatomic) unsigned long long totalSmartHomeAccessories; // @synthesize totalSmartHomeAccessories=_totalSmartHomeAccessories;
@property(readonly, nonatomic) unsigned long long totalCertifiedAccessories; // @synthesize totalCertifiedAccessories=_totalCertifiedAccessories;
@property(readonly, nonatomic) unsigned long long totalAccessories; // @synthesize totalAccessories=_totalAccessories;
@property(readonly, nonatomic) unsigned long long currentUserPrivilegeBitMask; // @synthesize currentUserPrivilegeBitMask=_currentUserPrivilegeBitMask;
@property(readonly, nonatomic) unsigned long long totalUserPrivilegeBitMask; // @synthesize totalUserPrivilegeBitMask=_totalUserPrivilegeBitMask;
@property(readonly, nonatomic) long long totalRestrictedGuests; // @synthesize totalRestrictedGuests=_totalRestrictedGuests;
@property(readonly, nonatomic) long long totalAdminUsers; // @synthesize totalAdminUsers=_totalAdminUsers;
@property(readonly, nonatomic) long long totalUsers; // @synthesize totalUsers=_totalUsers;
@property(readonly, nonatomic) unsigned long long totalThirdPartyMediaCategoryBitMask; // @synthesize totalThirdPartyMediaCategoryBitMask=_totalThirdPartyMediaCategoryBitMask;
@property(readonly, nonatomic) unsigned long long totalAppleMediaCategoryBitMask; // @synthesize totalAppleMediaCategoryBitMask=_totalAppleMediaCategoryBitMask;
@property(readonly, nonatomic) unsigned long long totalHomeCategoryBitMask; // @synthesize totalHomeCategoryBitMask=_totalHomeCategoryBitMask;
@property(readonly, nonatomic) unsigned long long totalResidentEnabledHomes; // @synthesize totalResidentEnabledHomes=_totalResidentEnabledHomes;
@property(readonly, nonatomic) unsigned long long totalOwnedHomes; // @synthesize totalOwnedHomes=_totalOwnedHomes;
@property(readonly, nonatomic) unsigned long long totalNonEmptyHomes; // @synthesize totalNonEmptyHomes=_totalNonEmptyHomes;
@property(readonly, nonatomic) unsigned long long totalHomes; // @synthesize totalHomes=_totalHomes;
@property(readonly, nonatomic) NSArray *homeConfigurations; // @synthesize homeConfigurations=_homeConfigurations;
@property(readonly, nonatomic) unsigned long long instanceId; // @synthesize instanceId=_instanceId;
- (_Bool)isSubmitted;	// IMP=0x00000000002b36e4
@property(readonly, nonatomic) _Bool isMediaOnlyConfiguration;
@property(readonly, nonatomic) _Bool isTelevisionOnlyConfiguration;
- (id)initWithHomeConfigurations:(id)arg1 widgetDataSource:(id)arg2 isFMFDevice:(_Bool)arg3;	// IMP=0x00000000002b2b65
- (id)initWithHomeManager:(id)arg1 widgetDataSource:(id)arg2 metadataVersion:(unsigned int)arg3;	// IMP=0x00000000002b2881

@end

