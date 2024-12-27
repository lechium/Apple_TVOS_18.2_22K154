//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFZoneDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFZone
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000ab8e2d
+ (id)homeRelation;	// IMP=0x0010000000ab8dfd
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000ab8d49
+ (Class)cd_modelClass;	// IMP=0x0010000000b5edc4
+ (id)fetchRequest;	// IMP=0x0010000000dd246c
- (void)removeRoomsObject:(id)arg1;	// IMP=0x0000000000ab8f2e
- (void)addRoomsObject:(id)arg1;	// IMP=0x0000000000ab8f12
@property(readonly, retain, nonatomic) NSArray *rooms;
- (id)castIfZone;	// IMP=0x0000000000ab8eb2
@property(readonly, copy, nonatomic) MKFZoneDatabaseID *databaseID;
- (_Bool)shouldIncludeForRestrictedGuestWithContext:(id)arg1;	// IMP=0x000000000098ffce

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
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *rooms_; // @dynamic rooms_;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

