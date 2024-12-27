//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFPresenceEventDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFPresenceEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000573e98
+ (id)homeRelation;	// IMP=0x0010000000573e68
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000573db4
+ (Class)cd_modelClass;	// IMP=0x00100000003871a3
+ (id)fetchRequest;	// IMP=0x0010000000c41429
- (void)removeGuestsObject:(id)arg1;	// IMP=0x0000000000573d98
- (void)addGuestsObject:(id)arg1;	// IMP=0x0000000000573d7c
- (_Bool)synchronizeGuestsRelationWith:(id)arg1;	// IMP=0x0000000000573d5d
@property(readonly, retain, nonatomic) NSArray *guests;
- (void)removeUsersObject:(id)arg1;	// IMP=0x0000000000573cea
- (void)addUsersObject:(id)arg1;	// IMP=0x0000000000573cce
- (_Bool)synchronizeUsersRelationWith:(id)arg1;	// IMP=0x0000000000573caf
@property(readonly, retain, nonatomic) NSArray *users;
@property(readonly) id <MKFHome> home;
- (id)castIfPresenceEvent;	// IMP=0x0000000000573bff
@property(readonly, copy, nonatomic) MKFPresenceEventDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000573aa2

// Remaining properties
@property(copy, nonatomic) NSNumber *activation; // @dynamic activation;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent;
@property(retain, nonatomic) NSSet *guests_; // @dynamic guests_;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *presenceType; // @dynamic presenceType;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger;
@property(retain, nonatomic) NSSet *users_; // @dynamic users_;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

