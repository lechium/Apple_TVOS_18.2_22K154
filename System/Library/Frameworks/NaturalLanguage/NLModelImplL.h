//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplL
{
    const void *_maxEntModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSDictionary *_labelMap;	// 24 = 0x18
    NSDictionary *_vocabularyMap;	// 32 = 0x20
    NSDictionary *_documentFrequencyMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000012ba6
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000012aa5
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000012994
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x000000000001289a
- (id)predictedLabelForString:(id)arg1;	// IMP=0x00000000000127b5
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x00000000000127a4
- (id)documentFrequencyMap;	// IMP=0x000000000001278f
- (id)vocabularyMap;	// IMP=0x000000000001277a
- (id)labelMap;	// IMP=0x0000000000012765
- (id)configuration;	// IMP=0x0000000000012750
- (id)modelData;	// IMP=0x0000000000012722
- (void)dealloc;	// IMP=0x00000000000126dc
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000124d1
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000012309
- (id)initWithOwnedModelObject:(const void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;	// IMP=0x0000000000012188

@end

