//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFBulletinTimeSpecificationDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFTimePeriodBulletinCondition;

__attribute__((visibility("hidden")))
@interface _MKFBulletinTimeSpecification
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000541bbf
+ (id)fetchRequest;	// IMP=0x001000000070cba2
- (id)castIfBulletinTimeSpecification;	// IMP=0x0000000000541c06
@property(readonly, copy, nonatomic) MKFBulletinTimeSpecificationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> endCondition; // @dynamic endCondition;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> startCondition; // @dynamic startCondition;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

