//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SNKShotFeaturizerImpl : NSObject
{
}

+ (id)streamCompletionFromFeaturizationResult:(id)arg1;	// IMP=0x00100000001fb44a
+ (id)streamResultsFromFeaturizationResult:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001fb2cc
+ (id)streamResultsForDatasetType:(long long)arg1 embeddings:(id)arg2 labels:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001fb11a
+ (id)streamResultWithEmbedding:(id)arg1 label:(id)arg2 dataset:(long long)arg3 error:(id *)arg4;	// IMP=0x00100000001fb05a
+ (id)labelFromNumberRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001faf73
+ (int)recognizeHallucinatorModel:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f942f
+ (_Bool)ensureIsValidHallucinatorV3Model:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f8878
+ (id)readNumTimeShiftsPerSegmentFromHallucinator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f8727
+ (id)readNumRepetitionsPerTimeShiftFromHallucinator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f85d6
+ (id)featurizeFiles:(id)arg1 randomNumberGenerator:(CDUnknownBlockType)arg2 hallucinatorModelURL:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001f790a
+ (id)performSegmentationRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001f11be
+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 resultHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000001f03e3
+ (id)featurizeFiles:(id)arg1 hallucinatorModelURL:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001efdf2
+ (CDUnknownBlockType)pseudoRandomNumberGeneratorWithSeed:(unsigned int)arg1;	// IMP=0x00100000001ee801
+ (CDUnknownBlockType)defaultRandomNumberGenerator;	// IMP=0x00100000001ee7e8

@end

