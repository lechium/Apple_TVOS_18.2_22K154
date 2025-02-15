//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, MKFSoftwareUpdateDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFSoftwareUpdate
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000008ced13
+ (id)homeRelation;	// IMP=0x00100000008cece3
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000008cecca
+ (id)fetchRequest;	// IMP=0x001000000077fc8b
+ (Class)cd_modelClass;	// IMP=0x0010000000a588ba
@property(readonly) id <MKFHome> home;
- (id)castIfSoftwareUpdate;	// IMP=0x00000000008ced98
@property(readonly, copy, nonatomic) MKFSoftwareUpdateDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *displayableSoftwareVersion; // @dynamic displayableSoftwareVersion;
@property(retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

