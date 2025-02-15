//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CLISuggest : NSObject
{
    unsigned long long _distanceFunction;	// 8 = 0x8
    NSSet *_corpus;	// 16 = 0x10
}

+ (id)correctionForWord:(id)arg1 fromCorpus:(id)arg2;	// IMP=0x004000000001c6e0
- (void).cxx_destruct;	// IMP=0x002000000001ce24
@property(readonly, copy, nonatomic) NSSet *corpus; // @synthesize corpus=_corpus;
@property(readonly, nonatomic) unsigned long long distanceFunction; // @synthesize distanceFunction=_distanceFunction;
- (id)correctionForWord:(id)arg1;	// IMP=0x001000000001c824
- (void)addCorpusWordsFromArray:(id)arg1;	// IMP=0x001000000001c7ee
- (id)initWithDistanceFunction:(unsigned long long)arg1;	// IMP=0x001000000001c78d
- (id)init;	// IMP=0x001000000001c779

@end

