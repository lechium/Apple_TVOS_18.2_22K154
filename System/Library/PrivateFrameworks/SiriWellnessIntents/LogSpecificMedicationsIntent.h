//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface LogSpecificMedicationsIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x0000000000015b00
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x0000000000015720
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000154d0
- (id)init;	// IMP=0x0000000000015390

// Remaining properties
@property(nonatomic, retain) NSNumber *confirmedAsNeeded; // @dynamic confirmedAsNeeded;
@property(nonatomic, retain) NSNumber *confirmedAsScheduled; // @dynamic confirmedAsScheduled;
@property(nonatomic, retain) NSNumber *dosage; // @dynamic dosage;
@property(nonatomic, copy) NSString *dosageUnit; // @dynamic dosageUnit;
@property(nonatomic, copy) NSDate *endTime; // @dynamic endTime;
@property(nonatomic, retain) NSNumber *hasMeridiem; // @dynamic hasMeridiem;
@property(nonatomic, retain) NSNumber *isAsNeeded; // @dynamic isAsNeeded;
@property(nonatomic, retain) NSNumber *logAsNeeded; // @dynamic logAsNeeded;
@property(nonatomic, retain) NSNumber *medStatus; // @dynamic medStatus;
@property(nonatomic, copy) NSArray *medicationIDs; // @dynamic medicationIDs;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *scheduleID; // @dynamic scheduleID;
@property(nonatomic, copy) NSDate *startTime; // @dynamic startTime;
@property(nonatomic, retain) NSNumber *strength; // @dynamic strength;
@property(nonatomic, copy) NSString *strengthUnit; // @dynamic strengthUnit;

@end

