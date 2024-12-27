//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFBulletinConditionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFBulletinRegistration, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFBulletinCondition
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000007987d3
+ (id)homeRelation;	// IMP=0x00100000007987a3
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000007986ef
+ (id)fetchRequest;	// IMP=0x00100000008d4370
@property(readonly) id <MKFHome> home;
- (id)castIfBulletinCondition;	// IMP=0x0000000000798858
@property(readonly, copy, nonatomic) MKFBulletinConditionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFBulletinRegistration> bulletinRegistration; // @dynamic bulletinRegistration;
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

