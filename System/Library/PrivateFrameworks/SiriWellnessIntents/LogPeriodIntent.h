//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntent.h>

@class NSDate;

@interface LogPeriodIntent : INIntent
{
}

- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;	// IMP=0x000000000000a280
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;	// IMP=0x0000000000009ea0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009c50
- (id)init;	// IMP=0x0000000000009b10

// Remaining properties
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic) long long flow; // @dynamic flow;

@end

