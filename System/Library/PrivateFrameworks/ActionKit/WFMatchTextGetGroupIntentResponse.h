//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface WFMatchTextGetGroupIntentResponse : INIntentResponse
{
    long long _code;	// 8 = 0x8
}

+ (id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)arg1 rangeErrorGroupCount:(id)arg2;	// IMP=0x0060000000337d20
+ (id)noMatchIntentResponseWithNoMatchIndex:(id)arg1;	// IMP=0x0060000000337cb2
@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000337c16

// Remaining properties
@property(copy, nonatomic) NSNumber *noMatchIndex; // @dynamic noMatchIndex;
@property(copy, nonatomic) NSNumber *rangeErrorGroupCount; // @dynamic rangeErrorGroupCount;
@property(copy, nonatomic) NSNumber *rangeErrorGroupNumber; // @dynamic rangeErrorGroupNumber;
@property(copy, nonatomic) NSArray *text; // @dynamic text;

@end

