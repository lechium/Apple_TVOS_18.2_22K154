//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLSplitDataProvider : NLDataProvider
{
    NLDataProvider *_dataProvider;	// 104 = 0x68
    NSArray *_indexes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000053389
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x000000000005336c
- (unsigned long long)numberOfLabels;	// IMP=0x000000000005334f
- (id)documentFrequencyMap;	// IMP=0x0000000000053332
- (id)vocabularyMap;	// IMP=0x0000000000053315
- (id)inverseLabelMap;	// IMP=0x00000000000532f8
- (id)labelMap;	// IMP=0x00000000000532db
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x00000000000532be
- (void)_generateMaps;	// IMP=0x00000000000532b8
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000053239
- (unsigned long long)numberOfInstances;	// IMP=0x000000000005321c
- (id)configuration;	// IMP=0x00000000000531ff
- (id)initWithDataProvider:(id)arg1 indexes:(id)arg2;	// IMP=0x000000000005314a

@end

