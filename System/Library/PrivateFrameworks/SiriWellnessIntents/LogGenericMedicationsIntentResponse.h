//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE, NSArray;

@interface LogGenericMedicationsIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000002cde0
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000002cb90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ca10
- (id)init;	// IMP=0x000000000002c8a0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000002c780
@property(nonatomic) long long code; // @synthesize code;

// Remaining properties
@property(nonatomic, copy) NSArray *matchingMeds; // @dynamic matchingMeds;
@property(nonatomic, copy) NSArray *matchingMedsBeforeUpdate; // @dynamic matchingMedsBeforeUpdate;

@end

