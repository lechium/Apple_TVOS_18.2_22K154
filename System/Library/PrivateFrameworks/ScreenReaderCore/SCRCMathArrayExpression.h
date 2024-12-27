//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathArrayExpression : SCRCMathExpression
{
    NSArray *_children;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000010d28
- (id)suffixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010cc9
- (id)prefixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010c6a
- (id)localizableSuffixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010c62
- (id)localizablePrefixForChildAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010c5a
@property(readonly, nonatomic) NSArray *mathMLAttributes;
@property(readonly, nonatomic) NSString *mathMLTag;
- (_Bool)hasSimpleArrayOfChildren;	// IMP=0x0000000000010c42
- (id)mathMLString;	// IMP=0x0000000000010a18
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x0000000000010816
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;	// IMP=0x00000000000106e4
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000010462
- (id)children;	// IMP=0x000000000001043d
- (id)subExpressions;	// IMP=0x000000000001042b
- (id)description;	// IMP=0x0000000000010386
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000100f6

@end

