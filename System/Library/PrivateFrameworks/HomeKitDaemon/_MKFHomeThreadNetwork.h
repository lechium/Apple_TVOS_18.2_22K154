//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeThreadNetworkDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeThreadNetwork
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000004ca9c0
+ (id)homeRelation;	// IMP=0x00100000004ca990
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000004ca8dc
+ (Class)cd_modelClass;	// IMP=0x001000000069f43d
+ (id)fetchRequest;	// IMP=0x0010000000744071
- (id)castIfHomeThreadNetwork;	// IMP=0x00000000004caa45
@property(readonly, copy, nonatomic) MKFHomeThreadNetworkDatabaseID *databaseID;

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

@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *threadNetworkID; // @dynamic threadNetworkID;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

