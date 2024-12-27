//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeSoftwareUpdateSettingDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeSoftwareUpdateSetting
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000e3c7e5
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000e3c7cc
+ (id)fetchRequest;	// IMP=0x001000000053008b
+ (Class)cd_modelClass;	// IMP=0x0010000000798b95
- (id)castIfHomeSoftwareUpdateSetting;	// IMP=0x0000000000e3c82c
@property(readonly, copy, nonatomic) MKFHomeSoftwareUpdateSettingDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *automaticSoftwareUpdateEnabled; // @dynamic automaticSoftwareUpdateEnabled;
@property(copy, nonatomic) NSNumber *automaticThirdPartyAccessorySoftwareUpdateEnabled; // @dynamic automaticThirdPartyAccessorySoftwareUpdateEnabled;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

