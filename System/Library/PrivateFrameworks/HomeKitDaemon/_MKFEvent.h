//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFEventDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFEventTrigger, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFEvent
{
}

+ (id)backingModelProtocol;	// IMP=0x001000000086b017
+ (id)homeRelation;	// IMP=0x001000000086afe7
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x001000000086af33
+ (Class)cd_modelClass;	// IMP=0x0010000000b77a89
+ (id)fetchRequest;	// IMP=0x0010000000dca4cf
@property(readonly) id <MKFHome> home;
- (id)castIfEvent;	// IMP=0x000000000086b09c
@property(readonly, copy, nonatomic) MKFEventDatabaseID *databaseID;
- (_Bool)shouldIncludeForRestrictedGuestWithContext:(id)arg1;	// IMP=0x00000000009906a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSNumber *endEvent; // @dynamic endEvent;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSUUID",?,R,C,N

@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFEventTrigger> trigger; // @dynamic trigger;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

