//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE;

@interface UserIdentifyIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000004332a
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000431fe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000043151
- (id)init;	// IMP=0x00000000000430e8
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000004306b
@property(nonatomic) long long code; // @synthesize code;

@end

