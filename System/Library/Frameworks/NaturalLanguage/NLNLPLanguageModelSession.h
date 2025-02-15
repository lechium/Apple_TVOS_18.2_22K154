//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelSession.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelSession : NLLanguageModelSession
{
    struct CoreLanguageModelWithState *_model;	// 16 = 0x10
}

- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002bd44
- (id)predictionInitialCharacterSet;	// IMP=0x000000000002bcdf
- (id)predictionOptionsForMaximumPredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2;	// IMP=0x000000000002bbbe
- (id)stateWithOptions:(id)arg1;	// IMP=0x000000000002bb39
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;	// IMP=0x000000000002ba3b
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b72c
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;	// IMP=0x000000000002b589
- (id)description;	// IMP=0x000000000002b46e
- (void)dealloc;	// IMP=0x000000000002b428
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;	// IMP=0x000000000002b2d9

@end

