//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCSessionSwitches : NSObject
{
    unsigned long long _switches;	// 8 = 0x8
    NSString *_conversationID;	// 16 = 0x10
}

+ (id)featureFlagAndDefaultNameForFeature:(unsigned long long)arg1;	// IMP=0x0060000000069900
+ (float)generateRandomNumberWithConversationID:(id)arg1 featureString:(id)arg2;	// IMP=0x00600000000695f4
@property(readonly, nonatomic) unsigned long long switches; // @synthesize switches=_switches;
- (void)dealloc;	// IMP=0x00000000000699dc
- (_Bool)trialEnablementWithClient:(id)arg1 Context:(CDStruct_177058d5 *)arg2 normalizedRandom:(double)arg3;	// IMP=0x0000000000069945
- (void)setFeature:(unsigned long long)arg1 isEnabled:(_Bool)arg2;	// IMP=0x000000000006992e
- (_Bool)isFeatureEnabled:(unsigned long long)arg1;	// IMP=0x00000000000695e7
- (id)initWithConversationID:(id)arg1;	// IMP=0x0000000000068ffc

@end

