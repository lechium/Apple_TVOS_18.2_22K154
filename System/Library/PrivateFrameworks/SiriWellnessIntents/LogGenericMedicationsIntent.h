//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSNumber;

@interface LogGenericMedicationsIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x000000000002bf60
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x000000000002bb80
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b930
- (id)init;	// IMP=0x000000000002b7f0

// Remaining properties
@property(nonatomic, retain) NSNumber *confirmedLogAsScheduled; // @dynamic confirmedLogAsScheduled;
@property(nonatomic, retain) NSNumber *isTimeframeToday; // @dynamic isTimeframeToday;
@property(nonatomic, retain) NSNumber *medStatus; // @dynamic medStatus;
@property(nonatomic, retain) NSNumber *shouldOverwriteExistingStatuses; // @dynamic shouldOverwriteExistingStatuses;

@end

