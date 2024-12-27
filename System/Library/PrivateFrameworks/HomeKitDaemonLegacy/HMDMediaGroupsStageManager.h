//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDMediaGroupsAggregateData, HMFStagedValue, NSString, NSUUID, NSUserDefaults;
@protocol HMDMediaGroupsStageManagerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsStageManager : NSObject
{
    id <HMDMediaGroupsStageManagerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSUserDefaults *_userDefaults;	// 24 = 0x18
    HMFStagedValue *_stagedAggregateData;	// 32 = 0x20
    HMDMediaGroupsAggregateData *_committedAggregateData;	// 40 = 0x28
    HMDMediaGroupsAggregateData *_lastNotifiedAggregateData;	// 48 = 0x30
    NSUUID *_stagedUnpairedCurrentDestinationControllerIdentifier;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000003fbc24
- (void).cxx_destruct;	// IMP=0x00000000003fb4e1
@property(retain) NSUUID *stagedUnpairedCurrentDestinationControllerIdentifier; // @synthesize stagedUnpairedCurrentDestinationControllerIdentifier=_stagedUnpairedCurrentDestinationControllerIdentifier;
@property(copy) HMDMediaGroupsAggregateData *lastNotifiedAggregateData; // @synthesize lastNotifiedAggregateData=_lastNotifiedAggregateData;
@property(retain) HMDMediaGroupsAggregateData *committedAggregateData; // @synthesize committedAggregateData=_committedAggregateData;
@property(readonly) HMFStagedValue *stagedAggregateData; // @synthesize stagedAggregateData=_stagedAggregateData;
@property(readonly) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsStageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000003fb3c5
- (void)stagedValue:(id)arg1 didExpireValue:(id)arg2;	// IMP=0x00000000003fb2a5
- (void)clearSavedData;	// IMP=0x00000000003fb216
- (void)saveGroup:(id)arg1;	// IMP=0x00000000003fb024
- (void)saveDestinations:(id)arg1;	// IMP=0x00000000003fae32
- (void)saveDestinationControllerData:(id)arg1;	// IMP=0x00000000003fac40
- (_Bool)hasSavedIdentifier;	// IMP=0x00000000003faa85
- (id)savedAggregateData;	// IMP=0x00000000003fa8da
- (void)saveIdentifier;	// IMP=0x00000000003fa734
- (void)saveAggregateData:(id)arg1;	// IMP=0x00000000003fa5ca
- (id)transformedDestinationForLegacyMediaSystem:(id)arg1 role:(unsigned long long)arg2;	// IMP=0x00000000003fa338
- (void)saveDataForLegacyMediaSystem:(id)arg1;	// IMP=0x00000000003f9e3c
- (void)saveAssociatedGroupDataForCurrentLegacyAppleTVAccessory:(id)arg1;	// IMP=0x00000000003f9b4c
- (void)saveAssociatedGroupDataForCurrentLegacyHomePodAccessory:(id)arg1;	// IMP=0x00000000003f97df
- (void)saveAssociatedGroupDataForLegacyCurrentAccessory:(id)arg1;	// IMP=0x00000000003f9691
@property(readonly, copy) HMDMediaGroupsAggregateData *aggregateData;
- (void)commitAggregateData:(id)arg1;	// IMP=0x00000000003f9558
- (void)notifyOfUpdatedAggregateData;	// IMP=0x00000000003f9359
- (id)transformedGroups;	// IMP=0x00000000003f9264
- (id)transformedDestinationControllersData;	// IMP=0x00000000003f90c8
- (id)transformedDestinations;	// IMP=0x00000000003f8fd3
- (void)refreshManager;	// IMP=0x00000000003f8d88
- (void)unstageNullDestinationForCurrentDestinationController;	// IMP=0x00000000003f8c84
- (void)stageNullDestinationForCurrentDestinationControllerIdentifier:(id)arg1;	// IMP=0x00000000003f8b5d
- (void)configure;	// IMP=0x00000000003f897f
- (id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2;	// IMP=0x00000000003f882a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

