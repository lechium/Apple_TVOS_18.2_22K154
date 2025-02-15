//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLDataProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface NLConcatenatedDataProvider : NLDataProvider
{
    NSArray *_dataProviders;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000053137
- (unsigned long long)numberOfVocabularyEntries;	// IMP=0x00000000000530e8
- (unsigned long long)numberOfLabels;	// IMP=0x0000000000053099
- (id)documentFrequencyMap;	// IMP=0x000000000005303e
- (id)vocabularyMap;	// IMP=0x0000000000052fe3
- (id)inverseLabelMap;	// IMP=0x0000000000052f88
- (id)labelMap;	// IMP=0x0000000000052f2d
- (struct __CFStringTokenizer *)tokenizer;	// IMP=0x0000000000052ede
- (void)_generateMaps;	// IMP=0x0000000000052ed8
- (id)instanceAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000052d4e
- (unsigned long long)numberOfInstances;	// IMP=0x0000000000052c0e
- (id)configuration;	// IMP=0x0000000000052bb3
- (id)initWithDataProviders:(id)arg1;	// IMP=0x0000000000052b1f

@end

