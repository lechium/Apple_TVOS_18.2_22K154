//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SCRCMathTableExpression
{
}

- (_Bool)canBeWrappedInLatexMathIndicators;	// IMP=0x000000000001d02e
- (id)latexDescriptionInMathMode:(_Bool)arg1;	// IMP=0x000000000001cf5f
- (unsigned long long)numberOfTables;	// IMP=0x000000000001cf28
- (unsigned long long)_numberOfColumns;	// IMP=0x000000000001cd9c
- (id)mathMLTag;	// IMP=0x000000000001cd8f
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 openOperator:(id)arg3 openOperatorTreePosition:(id)arg4 closeOperator:(id)arg5 closeOperatorTreePosition:(id)arg6;	// IMP=0x000000000001ca4a
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x000000000001ca22
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x000000000001c9a6
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x000000000001c8ed
- (_Bool)isMultiRowTable;	// IMP=0x000000000001c8a4

@end

