//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSDate;

@interface LogPeriodIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000000b080
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000000ae30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000acb0
- (id)init;	// IMP=0x000000000000ab40
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000aa20
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSDate *date; // @dynamic date;
@property(nonatomic) long long flow; // @dynamic flow;

@end

