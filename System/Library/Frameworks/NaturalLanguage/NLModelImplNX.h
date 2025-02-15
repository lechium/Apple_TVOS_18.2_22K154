//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplNX
{
    void *_nlModel;	// 8 = 0x8
    void *_modelContainer;	// 16 = 0x10
    NLModelConfiguration *_configuration;	// 24 = 0x18
    NSDictionary *_labelMap;	// 32 = 0x20
    unsigned long long _numberOfTrainingInstances;	// 40 = 0x28
    NSString *_trainingLanguage;	// 48 = 0x30
    NSString *_trainingEmbeddingType;	// 56 = 0x38
    NSString *_embeddingModelIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000047fa6
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x00000000000477fe
- (id)predictedLabelForString:(id)arg1;	// IMP=0x000000000004750f
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000046e86
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000046957
- (id)predictedLabelHypothesesDictionaryForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000046934
- (id)predictedLabelsDictionaryForString:(id)arg1;	// IMP=0x0000000000046914
- (id)trainingInfo;	// IMP=0x0000000000046824
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x0000000000046813
- (id)labelMap;	// IMP=0x00000000000467fe
- (unsigned long long)systemVersion;	// IMP=0x00000000000466e5
- (id)configuration;	// IMP=0x00000000000466d0
- (id)modelData;	// IMP=0x0000000000046689
- (void)dealloc;	// IMP=0x000000000004662e
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000044f33
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000044a4d
- (id)initWithModelContainer:(void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;	// IMP=0x0000000000044856

@end

