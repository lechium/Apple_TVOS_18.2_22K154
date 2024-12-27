//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFTimeOfDayTimeSpecificationDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFTimePeriodBulletinCondition;

__attribute__((visibility("hidden")))
@interface _MKFTimeOfDayTimeSpecification
{
}

+ (id)backingModelProtocol;	// IMP=0x001000000049a08c
+ (id)fetchRequest;	// IMP=0x0010000000be0e8b
- (id)castIfTimeOfDayTimeSpecification;	// IMP=0x000000000049a0d3
@property(readonly, copy, nonatomic) MKFTimeOfDayTimeSpecificationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> endCondition;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *hour; // @dynamic hour;
@property(copy, nonatomic) NSNumber *minute; // @dynamic minute;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFTimePeriodBulletinCondition> startCondition;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

