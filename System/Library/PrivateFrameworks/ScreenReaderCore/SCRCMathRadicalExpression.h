//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

__attribute__((visibility("hidden")))
@interface SCRCMathRadicalExpression : SCRCMathExpression
{
    SCRCMathExpression *_radicand;	// 24 = 0x18
    SCRCMathExpression *_rootIndex;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017262
@property(retain, nonatomic) SCRCMathExpression *rootIndex; // @synthesize rootIndex=_rootIndex;
@property(retain, nonatomic) SCRCMathExpression *radicand; // @synthesize radicand=_radicand;
- (id)latexMathModeDescription;	// IMP=0x000000000001713d
- (id)mathMLString;	// IMP=0x0000000000016fb1
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000016b1d
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x0000000000016707
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000016521
- (unsigned long long)fractionLevel;	// IMP=0x000000000001650f
- (_Bool)_isCubeRoot;	// IMP=0x0000000000016485
- (_Bool)_isSquareRoot;	// IMP=0x00000000000163d1
- (id)subExpressions;	// IMP=0x000000000001634b
- (id)description;	// IMP=0x0000000000016281
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001613d

@end

