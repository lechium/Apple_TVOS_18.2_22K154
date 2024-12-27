//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeMediaSettingDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeMediaSetting
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000b5e85a
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000b5e841
+ (Class)cd_modelClass;	// IMP=0x00100000008128d5
+ (id)fetchRequest;	// IMP=0x001000000090dbd3
- (id)castIfHomeMediaSetting;	// IMP=0x0000000000b5e8a1
@property(readonly, copy, nonatomic) MKFHomeMediaSettingDatabaseID *databaseID;

// Remaining properties
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
@property(copy, nonatomic) NSString *mediaPassword; // @dynamic mediaPassword;
@property(copy, nonatomic) NSNumber *mediaPeerToPeerEnabled; // @dynamic mediaPeerToPeerEnabled;
@property(copy, nonatomic) NSNumber *minimumMediaUserPrivilege; // @dynamic minimumMediaUserPrivilege;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

