//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSDate, NSString;

@interface GetMenstruationPredictionIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000002b570
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000002b320
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002b1a0
- (id)init;	// IMP=0x000000000002b030
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000002af10
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSDate *lastPeriodEnd; // @dynamic lastPeriodEnd;
@property(nonatomic, copy) NSString *lastPeriodFlow; // @dynamic lastPeriodFlow;
@property(nonatomic, copy) NSDate *lastPeriodStart; // @dynamic lastPeriodStart;
@property(nonatomic, copy) NSDate *nextPeriodEnd; // @dynamic nextPeriodEnd;
@property(nonatomic, copy) NSDate *nextPeriodStart; // @dynamic nextPeriodStart;

@end

