//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDNotificationRegistryCharacteristicsRequest
{
    NSUUID *_accessoryUUID;	// 40 = 0x28
    NSMutableSet *_characteristicInstanceIDs;	// 48 = 0x30
    NSMutableDictionary *_characteristicChangeThresholds;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000987e0d
@property(readonly) NSMutableDictionary *characteristicChangeThresholds; // @synthesize characteristicChangeThresholds=_characteristicChangeThresholds;
@property(readonly) NSMutableSet *characteristicInstanceIDs; // @synthesize characteristicInstanceIDs=_characteristicInstanceIDs;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000987ba5
- (id)initWithEnable:(_Bool)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3 accessoryUUID:(id)arg4;	// IMP=0x0000000000987a3d

@end

