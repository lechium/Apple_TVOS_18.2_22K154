//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface EligibilityOverride : NSObject
{
    NSMutableDictionary *_overrideMap;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000002c64
- (void).cxx_destruct;	// IMP=0x0020000000002c54
@property(retain, nonatomic) NSMutableDictionary *overrideMap; // @synthesize overrideMap=_overrideMap;
- (id)description;	// IMP=0x0010000000002bbd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000002a25
- (unsigned long long)hash;	// IMP=0x00100000000029e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000294a
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000027ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000273c
- (id)overrideResultDictionaryForDomain:(unsigned long long)arg1;	// IMP=0x00100000000024e5
- (void)resetAllAnswers;	// IMP=0x00100000000024bc
- (void)resetAnswerForDomain:(unsigned long long)arg1;	// IMP=0x001000000000242b
- (void)forceDomain:(unsigned long long)arg1 answer:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x001000000000234a
- (id)init;	// IMP=0x00100000000022f4

@end

