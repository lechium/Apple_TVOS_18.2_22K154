//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _EditScriptRangedAtom;

__attribute__((visibility("hidden")))
@interface _EditScriptRanged
{
    long long _options;	// 48 = 0x30
    _EditScriptRangedAtom *_currentScriptAtom;	// 56 = 0x38
}

+ (id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2;	// IMP=0x0060000000daddfe
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(_Bool)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6;	// IMP=0x0060000000dad398
+ (id)editScriptFromString:(id)arg1 toString:(id)arg2;	// IMP=0x0060000000dad377
- (void).cxx_destruct;	// IMP=0x0000000000dadeb0
- (void)computeSmallestSingleEdit;	// IMP=0x0000000000dadc53
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)arg1 andReverseIndexOfLastDifference:(long long *)arg2 shouldShortenFirstDifference:(_Bool)arg3;	// IMP=0x0000000000dadbcc
- (void)finalizeCurrentScriptAtom;	// IMP=0x0000000000dad951
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;	// IMP=0x0000000000dad78f
- (void)initializeCurrentScriptAtom;	// IMP=0x0000000000dad76e
- (id)applyToString:(id)arg1;	// IMP=0x0000000000dad559
@property(readonly, nonatomic) NSString *stringB;
@property(readonly, nonatomic) NSString *stringA;
- (id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(_Bool)arg6 options:(long long)arg7;	// IMP=0x0000000000dad24e

@end

