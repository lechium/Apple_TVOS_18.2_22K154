//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class MISSING_TYPE;

@interface SocialConversationIntentResponse : INIntentResponse
{
    MISSING_TYPE *code;	// 8 = 0x8
}

- (id)initWithPropertiesByName:(id)arg1;	// IMP=0x000000000000700d
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000006ee1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006e34
- (id)init;	// IMP=0x0000000000006d93
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000006cfa
@property(nonatomic) long long code; // @synthesize code;

@end

